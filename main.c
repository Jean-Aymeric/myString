#include <stdio.h>
#include "myString.h"

int main() {
    Cell* cell = stringToLlc("Hello World!\n");
    printCell(cell);
    llcRemoveChar(cell, 'o');
    printCell(cell);
    return 0;
}
