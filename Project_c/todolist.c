#include<stdio.h>
#include <stdlib.h>
#include "todolist.h"
#define true 1

int main() {
    struct list l1;

    while (true)
    {
        system("cls");
        printf("\t\t\t      TO-DO-LIST (A)\n");
        printf("\t\t\t=======================\n");
        printf("\t\t\t1.Add task<checklist> \n");
        printf("\t\t\t2.Show the task<checklist> \n");
        printf("\t\t\t3.Delete a single task \n");
        printf("\t\t\t4.Delete all task \n");
        printf("\t\t\t5.Exit\n\n");
        printf("Enter your choice (1/2/3/4) :: ");
        scanf("%d",&l1.no_list);

        switch (l1.no_list)
        {
        case 1:
            Add();
            break;

        case 2:
            show();
            break;

        case 3:
        del_one();
            break;

        case 4:
            del_all();
            break;

        case 5:
            exit(0);

        default:
            printf("\nWrong type input please try again : 404!");
        }
    }
    
    return 0;
}