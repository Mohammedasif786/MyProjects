#include "structlist.h"
#define NL printf("\n");

struct list* Add(void) {
    struct list l1,*addone; 
    addone = &l1;
    //addone->fp = fopen("list.txt","w");

NL  //User choice no of task element to add in the list.
    printf("Enter task no you want to add :: ");
    scanf("%d",&addone->u1.user_ask);

    //File checking if added or not!
    /*if(addone->fp == NULL) {
    printf("Error to open FILE ");
    return 1;
    }*/
NL 
    //User input section
    for(int i=0;i<addone->u1.user_ask;++i) {
        printf("Enter you %d task :: ",i+1);
        scanf("%s",&addone->task[i]);
       printf("\n");
    }

    //fprintf(addone->fp,addone->task);
    /* /*for(int i=0;i<addone->u1.user_ask;++i) 
        fputs(addone->task[i],addone->fp);*/

    // Failed to add the char* 
    if(addone->task[0] == NULL)
        printf("\nSorry no input is added");
        else
        printf("\nSuccesfully added");

    //Finally close the file
    //*fclose(addone->fp);
    return addone;
}

void show(struct list* showptr1) {
    struct list showing,*showptr = &showing; 

    //showptr->fp = fopen("list.txt","r");

    //File checking if added or not!
    /*if(showptr->fp == NULL) {
    printf("Error to find FILE ");
    return 1;
    }*/

    //Displaying the data writing in the notepad/Document.
    /*fscanf(showptr->fp,"%s",showptr->task);*/

    printf("%d\n",showptr1->u1.user_ask);


    for(int i = 0;i<showptr1->u1.user_ask;++i)
        printf("%s\n",showptr->task[i]);
    printf("here output?");
    //Finally close the file
    //fclose(showptr->fp);
}

void del_one(void) {

}
void del_all(void) {

}
