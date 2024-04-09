#include <stdlib.h>

void logo() {
    printf("\033[1;32m");
    printf("\t\t+=========================+\n");
    printf("\t\t|Grocery list App By Asif |\n");
    printf("\t\t+=========================+\n");
    printf("\033[1;0m");
}
void SignUp() { //signup sign 0
    //const char* username,first_name,last_name,password;
     const short int sign = 0;
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
        static int temp;
        short int user;
        fprintf(file_sign,"Complete!");
        while (1)
        {
            printf("\n\n");
            printf("1.Add an item\n");
            printf("2.Display all items \n");
            printf("3.Delete an item\n");
            printf("4.Quit\n");
            printf("Enter you choice :: ");
            scanf("%d",&user);
            switch (user)
            {
            case 1:
              temp = create(sign,file_sign);
                break;
           
            case 2:
                show(temp);
                break;

            case 3:
                delete_list(temp);
                break;

            case 4:
            exit(0);
                                 
            default:
            perror("\t:: Invalid Choice :: :( \n");
                break;
            }
        }
        fclose(file_sign);
    }
}
void Login() { //Login sign 1
     char username[size],first_name[size/2],last_name[size/2],password[size/5];
     const short int sign = 1;
     char reading[size]; //*Assume for Dynamic Storage!
    //Asking Question....
   printf("Enter you Username\n");
    scanf("%s",username);
    printf("Enter your password\n");
    scanf("%s",password);

    FILE *file_login;
    file_login = fopen(username,"a+");
    if(file_login== NULL) {
        perror("can't Create file");
        exit(0);
    } else {
        static int temp;
        short int user;
        /*fscanf(file_login,"%s",reading);
        printf("%s",reading);*/
        while (1)
        {
            printf("\n\n");
            printf("1.Add an item\n");
            printf("2.Display all items \n");
            printf("3.Delete an item\n");
            printf("4.Quit\n");
            printf("Enter you choice :: ");
            scanf("%d",&user);
            switch (user)
            {
            case 1:
               temp = create(sign,file_login);
                break;
           
            case 2:
                show(temp);
                break;

            case 3:
                delete_list(temp);
                break;

            case 4:
            exit(0);
                                 
            default:
            perror("\t:: Invalid Choice :: :( \n");
                break;
            }
            }
        system("pause");
        printf("\n");
        fclose(file_login);
    }
}


//*Future usage
/*void delete_file() {

}*/