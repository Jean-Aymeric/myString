//
// Created by JAD on 17/04/2023.
//

#include "myString.h"
Cell* createCell(char value) {
    Cell* cell = (Cell*) malloc(sizeof (Cell));
    cell->value = value;
    cell->next = NULL;
}

void printCell(Cell* cell) {
    Cell* temporaryCell = cell;
    while (temporaryCell != NULL) {
        printf("%c", temporaryCell->value);
        temporaryCell = temporaryCell->next;
    }
}

Cell* stringToLlc(char* string) {
    if (string == NULL) {
        return NULL;
    }
    Cell* llc = createCell(string[0]);
    Cell* temporaryCell = llc;
    for (int i = 1; i < strlen(string); i++) {
        temporaryCell->next = createCell(string[i]);
        temporaryCell = temporaryCell->next;
    }
    return llc;
}

char* llcToString(Cell* cell) {
    if (cell == NULL) {
        return NULL;
    }
    int length = llcLength(cell);
    char* string = (char*) malloc(sizeof (char) * (length+1));
    Cell* temporaryCell = cell;
    for (int i = 0; i < length; i++) {
        string[i] = temporaryCell->value;
        temporaryCell = temporaryCell->next;
    }
    string[length] = '\0';
    return string;
}

int llcLength(Cell* cell) {
    if (cell == NULL) {
        return 0;
    }
    int length = 0;
    Cell* temporaryCell = cell;
    while (temporaryCell != NULL) {
        length++;
        temporaryCell = temporaryCell->next;
    }
    return length;
}

void printCellRecursively(Cell* cell) {
    if (cell == NULL) {
        return;
    }
    printf("%c", cell->value);
    printCellRecursively(cell->next);
}

void printReverseCell(Cell* cell) {
    if (cell == NULL) {
        return;
    }
    printReverseCell(cell->next);
    printf("%c", cell->value);
}

void concatenateCells(Cell* cell1, Cell* cell2) {
    Cell* temporaryCell = cell1;
    while (temporaryCell->next != NULL) {
        temporaryCell = temporaryCell->next;
    }
    temporaryCell->next = cell2;
}