void delete_list(int);
void show(int);

#define size 50
#define max 500

struct list {
char list_items[max];
}each[size],*ptr_each = each;

static int create(short int check,FILE* typefile) {
    if(!check) {
    static int i,user = 3;

    printf("\t\t::Write down you list(Signin):: \n");
        /*printf("Enter you want add the list max(50) :: ");
        scanf("%d",user);*/

        for(int i=0;i<user;++i) {
        printf("list[%d] :",i);
        scanf("%s",each[i].list_items);
        fprintf(typefile,"list[%d]:%s\n",i,each[i].list_items);
        }

        ++i;
        return user;
    } else if(check) {
       static int j,user = 3;

        printf("\t\t::Write down you list(logout):: \n");
        printf("Enter number of list max(50) :: ");
        scanf("%d",&user);

        fflush(stdin);

        for(int i=0;i<user;++i) {
        printf("list[%d] :",i);
        scanf("%s",each[i].list_items);
        fprintf(typefile,"list[%d]:%s\n",i,each[i].list_items);
        }

        ++j;
        return user;
    }
}

void show(int user) {
     //Show the List items
    printf("\n"); 
    printf("list added ::[%d]\n",user);
     for(int i=0;i<user;++i)
            printf("list[%d]:%s\n",i,each[i].list_items);
        system("pause");
}

void delete_list(int user) {
    short int cut = 0;
    printf("Enter list number to delete :: ");
    scanf("%d",&cut);
    for (size_t i = cut-1; i < user; i++) {
        each[i] = each[i+1];
    }
    
}
