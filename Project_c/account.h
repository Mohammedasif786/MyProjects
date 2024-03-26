#include <stdlib.h>
#define size 50
#define max 500

struct account
{
    char item[max];
}lt[size],*ptr = lt;

ptr = (int *)malloc(sizeof(struct account));

void logo() {
    printf("\t\t+=========================+\n");
    printf("\t\t|Grocery list App By Asif |\n");
    printf("\t\t+=========================+\n");
}
void SignUp() {
    //const char* username,first_name,last_name,password;
     char username[size],first_name[size/2],last_name[size/2],password[size/5];
    //Asking Question....
    printf("Enter your First name\n");
    scanf("%s",first_name);
    printf("Enter your Last name\n");
    scanf("%s",last_name);
    printf("Enter you Username\n");
    scanf("%s",username);
    printf("Enter your password\n");
    scanf("%s",password);

    FILE *file_sign;
    file_sign = fopen(username,"wb");
    if(file_sign == NULL) {
        perror("can't Create file");
        exit(0);
    } else {
        short int user;
        fprintf(file_sign,"Complete!");
        while (1)
        {
            printf("1.Add an item\n");
            printf("2.Display the Total value \n");
            printf("3.Delete an item\n");
            printf("4.Display all items \n");
            printf("5.Quit\n");
            printf("Enter you choice :: ");
            scanf("%d",&user);
            switch (user)
            {
            case 1:
                create();
                break;
            case 2:
                total();
                break;
            
            case 3:
                delete_list();
                break;

            case 4:
                show();
                break;

            case 5:
            exit(0);
                                 
            default:
            perror("\t:: Invalid Choice :: :( \n");
                break;
            }
        }
        fclose(file_sign);
    }
}
void Login() {
     char username[size],first_name[size/2],last_name[size/2],password[size/5];
     char reading[size]; //*Assume for Dynamic Storage!
    //Asking Question....
   printf("Enter you Username\n");
    scanf("%s",username);
    printf("Enter your password\n");
    scanf("%s",password);

    FILE *file_login;
    file_login = fopen(username,"rb+");
    if(file_login== NULL) {
        perror("can't Create file");
        exit(0);
    } else {
        short int user;
        /*fscanf(file_login,"%s",reading);
        printf("%s",reading);*/
        while (1)
        {
            printf("1.Add an item\n");
            printf("2.Display the Total value \n");
            printf("3.Delete an item\n");
            printf("4.Display all items \n");
            printf("5.Quit\n");
            printf("Enter you choice :: ");
            scanf("%d",&user);
            switch (user)
            {
            case 1:
                create();
                break;
            case 2:
                total();
                break;
            
            case 3:
                delete_list();
                break;

            case 4:
                show();
                break;

            case 5:
            exit(0);
                                 
            default:
            perror("\t:: Invalid Choice :: :( \n");
                break;
            }

        system("pause");
        printf("\n");
        fclose(file_login);
    }
}
}


//*Future usage
/*void delete_file() {

}*/