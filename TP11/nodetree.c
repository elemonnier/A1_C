#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "nodetree.h"
#include "list.h"
#include "queueList.h"

struct NodeTree* createEmptyTree(){ //PROF
    return NULL;
}

void display(int value){
    printf("%d ", value);
}

struct NodeTree* bin(struct NodeTree* leftTree, int value, struct NodeTree* rightTree){ //PROF
    struct NodeTree* tree = (struct NodeTree*)malloc(sizeof(struct NodeTree));
    if (tree != NULL){
        tree->value = value;
        tree->left = leftTree;
        tree->right = rightTree;
    }
    return tree;
}

bool isEmptyTree(struct NodeTree* tree){ //PROF
    return (tree == NULL);
}

int root(struct NodeTree* tree){
    return tree->value;
}

struct NodeTree* left(struct NodeTree* tree){ //PROF
    return tree->left;
}

struct NodeTree* right(struct NodeTree* tree){ //PROF
    return tree->right;
}

bool isLeaf(struct NodeTree* tree){
    return (left(tree) == NULL && right(tree) == NULL);
}

void deleteLeaf(struct NodeTree* tree){
    if(isLeaf(tree)){
        free(tree);
    }
}

void deleteTree(struct NodeTree* tree){
    if (!isEmptyTree(tree)) {
        deleteTree(left(tree));
        deleteTree(right(tree));
        deleteLeaf(tree);
    }
}

void preorder(struct NodeTree* tree){
    if(!isEmptyTree(tree)){
        display(root(tree));
        preorder(left(tree));
        preorder(right(tree));
    }
}

void postorder(struct NodeTree* tree){
    if(!isEmptyTree(tree)){
        postorder(left(tree));
        postorder(right(tree));
        display(root(tree));
    }
}

void inorder(struct NodeTree* tree){
    if (!isEmptyTree(tree)){
        inorder(left(tree));
        display(root(tree));
        inorder(right(tree));
    }
}

/*void BFS(struct NodeTree* tree){

}*/

int numberNodes(struct NodeTree* tree){
    if(isEmptyTree(tree)){
        return 0;
    }
    return 1 + numberNodes(left(tree)) + numberNodes(right(tree));
}

int max(int height1, int height2){
    int maxHeight;
    if (height1 > height2) {
        maxHeight = height1;
    }
    else{
        maxHeight = height2;
    }
    return maxHeight;
}

int min(int height1, int height2){
    int minHeight;
    if (height1 < height2) {
        minHeight = height1;
    }
    else{
        minHeight = height2;
    }
    return minHeight;
}

int height(struct NodeTree* tree){
    if (isEmptyTree(tree)){
        return 0;
    }
    return 1 + max(height(left(tree)), height(right(tree)));
}

int numberLeaves(struct NodeTree* tree){
    if (isLeaf(tree)){
        return 1;
    }
    return numberLeaves(left(tree)) + numberLeaves(right(tree));
}

int numberInternalNodes(struct NodeTree* tree){
    return numberNodes(tree) - numberLeaves(tree);
}

int numberRepetitions(struct NodeTree* tree, int x){
    if (isEmptyTree(tree)){
        return 0;
    }
    else{
        if(root(tree) == x){
            return 1 + numberRepetitions(left(tree), x) + numberRepetitions(right(tree), x);
        }
        else{
            return numberRepetitions(left(tree), x) + numberRepetitions(right(tree), x);
        }
    }
}

void pathTo(struct NodeTree* tree, int x){
    if (!isEmptyTree(tree)){
        if (x == root(tree)){
            display(root(tree));

            if (belongs(left(tree), x)){
                display(root(tree));
                pathTo(left(tree), x);

                if (belongs(right(tree), x)){
                    display(root(tree));
                    pathTo(right(tree), x);
                }
            }
        }
    }
}

int sumValues(struct NodeTree* tree){
    if (isLeaf(tree)){
        return root(tree);
    }
    return sumValues(left(tree)) + sumValues(right(tree)) + root(tree);
}

bool belongs(struct NodeTree* tree, int x){
    if (isEmptyTree(tree)){
        return false;
    }
    if (root(tree) == x){
        return true;
    }
    return belongs(left(tree), x) || belongs(right(tree), x);
}

int lastFullLevel(struct NodeTree* tree){
    if (left(tree) == NULL || right(tree) == NULL){
        return 0;
    }
    return 1 + min(lastFullLevel(left(tree)), lastFullLevel(right(tree)));
}

void descendants(struct NodeTree* tree, int x){
    if (root(tree) == x){
        preorder(tree);
        return;
    }
    if (!belongs((tree), x) || isEmptyTree(tree)){
        return;
    }
    if (belongs(left(tree), x)){
        descendants(left(tree), x);
    }
    else {
        if (belongs(left(tree), x)) {
            descendants(right(tree), x);
        }
        else{
            return;
        }
    }
}

struct NodeTree* mirror(struct NodeTree* tree){
    if (isEmptyTree(tree)){
        return createEmptyTree();
    }
    return bin(mirror(right(tree)), root(tree), mirror(left(tree)));
}

bool equals(struct NodeTree* tree1, struct NodeTree* tree2){
    if (isEmptyTree(tree1) && isEmptyTree(tree2)){
        return true;
    }
    if ((isEmptyTree(tree1) && !isEmptyTree(tree2)) || (!isEmptyTree(tree1) && isEmptyTree(tree2))){
        return false;
    }
    return (root(tree1) == root(tree2)) && (equals(left(tree1), right(tree2)) && (equals(right(tree1), left(tree2))));
}

int indexOfValue(int tab2[], int sizeTab2, int value){
    //gérer erreurs

    for (int counter = 0; counter < sizeTab2; counter++){
        if (value == tab2[counter]){
            return counter;
        }
    }
    return EXIT_FAILURE;
}

struct NodeTree* buildFromPreIn(int pre[],int in[],int sp,int ep,int si,int ei){
    if (pre[sp] == ei && pre[sp] == si) { return bin(createEmptyTree(), pre[sp], createEmptyTree()); }
    if (pre[sp] == si){ return bin(createEmptyTree(), pre[sp], buildFromPreIn(pre, in, sp+1, ep, pre[sp]+1, ei)); }
    if (pre[sp] == ei){ return bin(buildFromPreIn(pre, in, sp+1, ep, si, pre[sp]-1), pre[sp], createEmptyTree()); }
    return bin(buildFromPreIn(pre, in, sp+1, ep, si, pre[sp]-1), pre[sp], buildFromPreIn(pre, in, sp+1, ep, pre[sp]+1, ei));
}

//revoir valeurs

struct NodeTree* buildFromPostIn(int post[],int in[],int sp,int ep,int si,int ei){

}

struct NodeTree* buildFromBFSIn(int bfs[],int in[],int sb,int eb,int si,int ei){

}

bool isBST(struct NodeTree* tree){
    if (isLeaf(tree)){
        return true;
    }
    if (root(left(tree)) > root(right(tree)) || root(right(tree)) < root(left(tree))){
        return false;
    }
    return (isBST(left(tree)) && isBST(right(tree)));
}

struct NodeTree* find(struct NodeTree* tree, int value){
    if(belongs(tree, value)){
        if(root(tree) == value){
            return tree;
        }
        if (root(tree) < value){
            return find(right(tree), value);
        }
        return find(left(tree), value);
    }
    return createEmptyTree();
}

struct NodeTree* findMin(struct NodeTree* tree){
    if (left(tree) == NULL){
        return tree;
    }
    return findMin(left(tree));
}

struct NodeTree* findMax(struct NodeTree* tree){
    if (right(tree) == NULL){
        return tree;
    }
    return findMax(right(tree));
}

void insert(struct NodeTree* tree, int value){
    if(root(tree) > value && !isLeaf(tree)){
        insert(left(tree), value);
    }
    if(root(tree) < value && !isLeaf(tree)){
        insert(right(tree), value);
    }
    struct NodeTree* ptr = bin(createEmptyTree(), value, createEmptyTree());
    if (root(tree) > value){
        tree->left = ptr;
    }
    tree->right = ptr;
}

struct NodeTree* findParentNode(struct NodeTree* tree, int value){
    if(belongs(tree, value)){
        if (root(tree) == value){ // case when root is the value
            return createEmptyTree();
        }
        if (root(left(tree)) == value || root(right(tree)) == value) { // case when one of the sons are the value
            return tree;
        }
        if (root(tree) < value){
            return findParentNode(right(tree), value);
        }
        return findParentNode(left(tree), value);
    }
    return createEmptyTree();
}

struct NodeTree* maxRoot(struct NodeTree *tree){
    if (isLeaf(tree)){
        return tree;
    }
    if (root(left(tree)) > root(right(tree))){
        return maxRoot(left(tree));
    }
    return maxRoot(right(tree));
}

void deleteBSTTree(struct NodeTree* tree, int value){
    if(belongs(tree, value)) {
        if (isLeaf(tree)) {
            free(tree);
        }
        if (left(tree) == NULL || right(tree) == NULL) {
            struct NodeTree *ptrParent = findParentNode(tree, value);
            struct NodeTree *ptrValue = find(tree, value);
            if (left(ptrParent) == NULL && right(ptrParent) != NULL) {
                if (right(ptrValue) == NULL && left(ptrValue) != NULL) {
                    ptrParent->right = ptrValue->left;
                    free(ptrValue);
                }
                if (right(ptrValue) != NULL && left(ptrValue) == NULL) {
                    ptrParent->right = ptrValue->right;
                    free(ptrValue);
                }
            }
            if (left(ptrParent) != NULL && right(ptrParent) == NULL) {
                if (right(ptrValue) == NULL && left(ptrValue) != NULL) {
                    ptrParent->left = ptrValue->left;
                    free(ptrValue);
                }
                if (right(ptrValue) != NULL && left(ptrValue) == NULL) {
                    ptrParent->left = ptrParent->right;
                    free(ptrValue);
                }
            }
        }
        if (left(tree) != NULL && right(tree) != NULL) {
            struct NodeTree* ptrValue = find(tree, value);
            struct NodeTree* ptrReplace = maxRoot(left(ptrValue));
            ptrValue->value = ptrReplace->value;
            free(ptrReplace);
        }
    }
}

void inorderArray(struct NodeTree* tree, int array[], int* counter){
    if (!isEmptyTree(tree)){
        inorderArray(left(tree), array, counter);
        array[*counter] = root(tree);
        counter++;
        inorderArray(right(tree), array, counter);
    }
}

bool compareArray(int array1[], int array2[], int size){
    for (int counter = 0; counter < size; counter++){
        if(array1[counter] != array2[counter]){
            return false;
        }
    }
    return true;
}

bool equivalentsBST(struct NodeTree* tree1, struct NodeTree* tree2){
    int array1[numberNodes(tree1)];
    int array2[numberNodes(tree2)];
    int counter1 = 0;
    int counter2 = 0;
    inorderArray(tree1, array1, &counter1);
    inorderArray(tree2, array2, &counter2);
    return compareArray(array1,array2,numberNodes(tree1));
}