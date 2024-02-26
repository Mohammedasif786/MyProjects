#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "electric_bill.h"

struct electric_bill {
    float khw,hp;
    int watt;
}el,*ptr = &el;

void logo() {
    system("cls");
    printf("\t\t[=======================]\n");
    printf("\t\t^ Electric bill by Asif\t^\n");
    printf("\t\t[=======================]\n");
    printf("\n\n");
}


int main(int argc,char** argv) {
    short int user;
    while (1)
    {
        logo();
        printf("[1].Calculation\n");
        printf("[2].Bill records\n");
        printf("[3].Exit\n");
        printf("Enter you choice :: ");
        scanf("%d",&user);
        switch (user)
        {
        case 1:
            start();
            break;

        case 2:
            Bill_rec();
            break;

        case 3:
        exit(0);
        
        default:
        perror("\nInvalid type try again!\n");
            break;
        }
    }
    
    return 0;
}