#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "list.h"
#include "queueList.h"

struct NodeTree {
    int value;
    struct NodeTree* left;
    struct NodeTree* right;
};

#ifndef ARBRES_NODETREE_H
#define ARBRES_NODETREE_H

struct NodeTree* createEmptyTree();
struct NodeTree* bin(struct NodeTree* leftTree, int value, struct NodeTree* rightTree);
bool isEmptyTree(struct NodeTree* tree);
int root(struct NodeTree* tree);
struct NodeTree*  left(struct NodeTree* tree);
struct NodeTree* right(struct NodeTree* tree);
bool isLeaf(struct NodeTree* tree);
void deleteLeaf(struct NodeTree* tree); // efface une feuille
void deleteTree(struct NodeTree* tree); // efface tout l’arbre
void preorder(struct NodeTree* tree);
void postorder(struct NodeTree* tree);
void inorder(struct NodeTree* tree);
//void BFS(struct NodeTree* tree); //(BFS=largeur)utiliser Queue!
int numberNodes(struct NodeTree* tree);
int max(int height1, int height2);
int min(int height1, int height2);
int height(struct NodeTree* tree);
int numberLeaves(struct NodeTree* tree);
int numberInternalNodes(struct NodeTree* tree);
int numberRepetitions(struct NodeTree* tree, int x);
void pathTo(struct NodeTree* tree, int x); // l’afficher
int sumValues(struct NodeTree* tree);
bool belongs(struct NodeTree* tree, int x);
int lastFullLevel(struct NodeTree* tree);
void descendants(struct NodeTree* tree, int x); // les afficher
struct NodeTree* mirror(struct NodeTree* tree);
bool equals(struct NodeTree* tree1, struct NodeTree* tree2);
int indexOfValue(int tab2[], int sizeTab2, int value);
struct NodeTree* buildFromPreIn(int pre[],int in[],int sp,int ep,int si,int ei);
struct NodeTree* buildFromPostIn(int post[],int in[],int sp,int ep,int si,int ei);
struct NodeTree* buildFromBFSIn(int bfs[],int in[],int sb,int eb,int si,int ei);
bool isBST(struct NodeTree* tree);
struct NodeTree* find(struct NodeTree* tree, int value);
struct NodeTree* findMin(struct NodeTree* tree);
struct NodeTree* findMax(struct NodeTree* tree);
void insert(struct NodeTree* tree, int value);
struct NodeTree* findParentNode(struct NodeTree* tree, int value);
struct NodeTree* maxRoot(struct NodeTree* tree);
void deleteBSTTree(struct NodeTree* tree, int value);
bool compareBST(struct NodeTree* tree1, struct NodeTree* tree2);
void inorderArray(struct NodeTree* tree, int array[], int* counter);
bool compareArray(int array1[], int array2[], int size);
bool equivalentsBST(struct NodeTree* tree1, struct NodeTree* tree2);

#endif //ARBRES_NODETREE_H
