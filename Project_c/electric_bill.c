#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "electric_bill.h"

//*Complete this function of Beginning...
void logo() {
    //
}
int main(int argc,char** argv) {
    short int user;
    while (1)
    {
        logo();
        printf("[1].Calculator\n");
        printf("[2].Bill Records\n");
        printf("[3].Exit\n");
        printf("Enter you choice :: ");
        scanf("%d",&user);
        switch (user)
        {
        case 1:
            start();
            break;

        case 2:
            Bill_Rec();
            break;

        case 3:
            exit(0);
     
        default:
        perror("Please Try a valid Entry!");
            break;
        }
    }
    
    return 0;
}