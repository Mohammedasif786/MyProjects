#include<stdio.h>
#include<string.h>

typedef struct Account{
    float account_balance,default_acc,Money_value;
    int max,min;
    char* name[20],date[40];
}Account;

Account* add() {
    Account user1,*ptr1 = &user1;
    system("cls");
    user1.max = 7000; user1.min = 0;

    printf("Enter you amount to debit :: ");
    scanf("%f",&user1.Money_value);
    printf("\nEnter the date :: ");
    scanf("%s",user1.date);
    printf("Enter you name as depostier to save the record ::");
    scanf("%s",user1.name);

    if(user1.max >= user1.Money_value) {
        user1.account_balance += user1.Money_value;
        user1.default_acc = user1.account_balance;
        printf("ADDED!\n");
    } else  { 
        printf("Out of limit"); 
        exit(0); 
    }
    return ptr1;
}

void update(Account* user4) {
    float update_value;

    if(user4->account_balance == 0) {
        printf("\nSorry You have not Suffient Balance");
        exit(0);
    } else {
        printf("Enter the amount into Account :: ");
        scanf("%f",&update_value);

        if(update_value > user4->max)
            user4->account_balance = user4->default_acc;
            else {
            user4->account_balance += update_value;
            printf("ADDED!");
            }
    }

}

Account* bank() {
    Account temp,*ptr2 = &temp;
    short int user,close = 1; 

    while (1)
    {
        printf("1: Add\n");
        printf("2: UDATE\n");
        printf("3: Go back\n");
        printf("\nEnter your choice :: ");
        scanf("%d",&user);
 
        switch (user)
        {
        case 1:
            ptr2 = add();
            break;

        case 2:
            update(ptr2);
            break;

        case 3:
            ++close;
            break;

        default:
        printf("Wrong Enterd");
            break;
        }     
        if(close == 0)
        break;
    }
    return ptr2; 

}

void self_pocket(Account* temp) {
    printf("\n\t+===================+");
    printf("\n\tName : %s",temp->name);
    printf("\n\tAccount.no : 7291xxxxx");
    printf("\n\tBalance : %f",temp->account_balance);
    printf("\n\tDate : %s",temp->date);
    printf("\n\t+===================+");
    getchar()+getchar();
}

void shop(Account* temp) {
    float shoes = 149.99,cloth =599.23 ,hat = 83.72;
    short int user,count = 0,count2 = 0,count3 = 0;

    while(1) {
        printf("\n+=====================+\n");
        printf("|\tSHOP\t     |\n");
        printf("+=====================+\n");

    printf("\t\t\t\tBalance remiaing :: %d\n",temp->account_balance);
    printf("\n1: Shoes price => 149.99 MRP\n");
    printf("\n2: Cloth price => 599.23 MRP\n");
    printf("\n3: Hat price => 83.72 MRP\n");
    printf("\n4: EXIT shop\n");
    printf("\nEnter you choice :: ");
    scanf("%d",&user);

    switch (user)
    {
    case 1:
        if(temp->account_balance > temp->min) {
        temp->account_balance -= shoes; 
      printf("Shoes purchased!\n");
      printf("Balance remiaing :: %d\n",temp->account_balance);
        ++count;
        temp->default_acc = temp->account_balance;
        printf("%d->Purchase items\n",count);
        } 
        break;

    case 2:
        if(temp->account_balance > temp->min) {
        temp->account_balance -= cloth; 
        printf("Shoes purchased!\n");
      printf("Balance remiaing :: %d\n",temp->account_balance);
        ++count2;
        temp->default_acc = temp->account_balance;
        printf("%d->Purchase items\n",count);
        }
        break;

    case 3:
        if(temp->account_balance > temp->min) {
        temp->account_balance -= hat; 
        printf("Shoes purchased!\n");
        printf("Balance remiaing :: %d\n",temp->account_balance);
        ++count3;
        temp->default_acc = temp->account_balance;
        printf("%d->Purchase items\n",count);
        }
        break;
    
    default:
    printf("Wrong Press\n");
        break;
    }
    if(user == 'Y' || user == 'y');
        break;
    }
}

int main() {
    short int user;
    Account temp,*ptr3 = &temp;

    {
        system("cls");
            printf("\n\t+==========+\n");
            printf("\t|  MY UPI  |");
            printf("\n\t+==========+\n\n");
        printf("1: Bank Account\n");
        printf("2: Self Pocket\n");
        printf("3: Shop\n");
        printf("4: Exit this game!\n");
        printf("\nEnter your choice :: ");
        scanf("%d",&user);
        switch (user)
        {
        case 1:
            ptr3 = bank();
            break;

        case 2:
        self_pocket(ptr3);
            break;

        case 3:
            shop(ptr3);
            break;

        case 4:
            exit(0);
        
        default:
        printf("ERROE");
            break;
        }
    }
        
    return 0;
}