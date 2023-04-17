#include <stdio.h>
#include "myString.h"

int main() {
    Cell* cell = stringToLlc("Hello World!\n");
    printCell(cell);
    printf("%s", llcToString(cell));
    printCellRecursively(cell);
    printReverseCell(cell);
    concatenateCells(cell, stringToLlc("CouCou"));
    printCell(cell);
    return 0;
}
