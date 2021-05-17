#include <stdio.h>
#include "myheader.h"

int main(void){
    char name[17]={0,};
    printf("Name: ");
    scanf_s("%s",name);

    printHello();
    printBye();

    return 0;
}
