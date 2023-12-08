#include<iostream>
#include<stdlib.h>
using std::cout; using std::cin; using std::endl; using std::string;

namespace space {
    struct records
    {
         string student_name;
         char *subjects[5] = {
            "English","Math","Science"
            ,"Kannada","CS"
         }; 
         int marks[5]; //! 50 to 100! marks
         short int rollnumber;
         char grade;
    };
    
} //Completed
using space::records;

void Grade(records stdGDR[],int loop) {
       //code... 
}

void Average(records stdAVG[],int loop) {
        int sum,loop2 = 5,subjects = 5;
        register float avg = 0.00;

        for (size_t i = 0; i < loop2; i++) 
            sum +=  stdAVG[loop].marks[loop2];

        for(int i=0;i<loop2;++i)
        cout << stdAVG[loop].marks[loop2] << endl;

        avg =  sum/subjects;
        //total = (gained_marks*100)/500;

        cout << "Average marks :: " << avg << endl;

        Grade(stdAVG,loop);
}

void data_user(records std[],int loop) {

        cout << "Roll number of Student :: ";
        cin >> std[loop].rollnumber;
        cout << "Name of Student :: ";
        cin >> std[loop].student_name;
        int len = 5; 
        while (len--) {
               cout << std[loop].subjects[len] << ": ";
               cin >> std[loop].marks[len];
        }

        Average(std,loop);
        
}

int condition(short int *no_records) {
    char user2;

    cout << "Do you want to increase the Records (y/n)";
    cin >> user2;

    if(user2 == 'Y' or user2 == 'y') {
       cout << "Enter the Number of records :: " ;
       cin >> *no_records;
    }

    return *no_records;
}

void Records() {
    system("cls");
    short int no_records = 10,*puser = &no_records;
    records student[no_records];
    int count = 0;// Future use!

    cout << "Enter the number of records :: ";
    cin >> no_records;

    for (size_t i = 0; i < no_records; i++) {
             //Logic Code...
        data_user(student,i);
      
       ++count;
    
     if(no_records-1 == i)
        condition(puser);

    }

    cout << "The number of times :: " << count << endl;
}