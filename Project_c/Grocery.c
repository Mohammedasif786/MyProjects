#include<stdio.h>
#include<stdlib.h> 
#include "task_func.h"
#include "account.h" //*File Handling codes...
extern void logo();


int main(int argc,char** argv) {
    short int user;
    while (1) {
        system("cls");
        logo();
        printf("\n");
        printf("1.Sign in Account\n");
        printf("2.Login in Account\n");
        printf("3.Exit/Quit\n\n");
        printf("Enter your choice :: ");
        scanf("%d",&user);
        switch (user)
        {
        case 1:
            SignUp();
            break;

        case 2:
            Login();
            break;

        case 3:
            exit(0);
        
        default:
        perror("Invalid type try again!");
            break;
        }
    }
    
    return 0;
}