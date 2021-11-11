cmake_minimum_required(VERSION 3.7)
project(revisions C)

set(CMAKE_C_STANDARD 99)

add_executable(revisions main.c memory_entry.c memory_entry.h nightclub.c nightclub.h person.c person.h)