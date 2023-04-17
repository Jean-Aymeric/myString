//
// Created by JAD on 17/04/2023.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef MYSTRING_MYSTRING_H
#define MYSTRING_MYSTRING_H
typedef struct Cell {
    char value;
    struct Cell* next;
} Cell;

Cell* createCell(char value);
void printCell(Cell* cell);
Cell* stringToLlc(char* string);
char* llcToString(Cell* cell);
int llcLength(Cell* cell);
void printCellRecursively(Cell* cell);
void printReverseCell(Cell* cell);
void concatenateCells(Cell*, Cell*);
void llcRemoveChar(Cell* cell, char characterToRemove);
Cell* reverseLLC(Cell* cell);

#endif //MYSTRING_MYSTRING_H
