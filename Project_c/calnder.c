#include<stdio.h>
#include "calstr.h"
#define true 1

int main(void) {
    struct calender c1;
    *(c1.days+1) = "MON";
    unsigned jan = 31,feb = 29,month,mar = 31,apr = 30,may = 30,jun = 30,jul = 31,Aug = 31,sep = 30,oct = 31,nov = 30,dec = 31;
    int user = 1;

    for (size_t i = 0; i < size; i++)
        c1.cal[i] = i+1;
    
    //printf("\tSUN \tMON \tTUE \tWED \tTHU \tFRI \tSAT\n");

    while(true) {
        printf("1.Jan\n");
        printf("2.Feb\n");
        printf("3.Mar\n");
        printf("4.Apr\n");
        printf("5.May\n");
        printf("6.Jun\n");
        printf("7.Jul\n");
        printf("8.Aug\n");
        printf("9.Sep\n");
        printf("10.Oct\n");
        printf("11.Nov\n");
        printf("12.Dec\n");
        printf("13.Show all the Calnder\n");
        printf("Enter you chocie :: ");
        scanf("%d",&user);
        switch (user)
        {
        case 1:
            month = jan;
            break;
        
        case 2:
            month = feb;
            break;

        case 3:
            month = mar;
            break;

        case 4:
            month = apr;
            break;

        case 5:
            month = may;
            break;

        case 6:
            month = jun;
            break;

        case 7:
            month = jul;
            break;

         case 8:
            month = Aug;
            break;

                case 9:
            month = sep;
            break;
                 case 10:
            month = oct;
            break;
                  
         case 11:
            month = nov;
            break;
            
         case 12:
            month = dec;
            break;

        case 13:
        break;
        
        default:
            break;
        }

    printf("\tSUN \tMON \tTUE \tWED \tTHU \tFRI \tSAT\n");
    for (size_t i = 0,j = 0,k = 0; i < size; i++,j++,++k)
    {
       if(j == 7) {
        printf("\n");
        j = 0;
       }
       
        if (k == month) {
            k = 0;
            printf("\n");
         printf("\tSUN \tMON \tTUE \tWED \tTHU \tFRI \tSAT\n");
       }
       
       printf("\t %u ",c1.cal[k]);
    }
    break;
    }
    //* 48 spaces contain!

    return 0;
}