#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAIN_ENTITY_POINTER 0
#define EMPTY_POINTER -1
#define DATA_BLOCK_SIZE 50

//ESTRUCTURAS
typedef struct Entity{
    char name[DATA_BLOCK_SIZE];
    long dataPointer;
    long attributesPointer;
    long nextEntity;
} ENTITY;

typedef struct Attribute {
    char name[DATA_BLOCK_SIZE];
    bool isPrimary;
    long type;
    long size;
    long nextAttribute;
} ATTRIBUTE;
