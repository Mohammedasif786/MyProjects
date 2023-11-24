#include<iostream>
#include "dsa.cpp"

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

void Grade(int loop,int* pavg) {
    if (*pavg == 0 or *pavg <=49)
    {
        cout << "The Grade is :: " << 'F' << endl;
    }
    else if(*pavg  == 50 or *pavg <= 59) {
        cout << "The Grade is :: " << 'D' << endl;

    } else if(*pavg == 60 or *pavg <= 66) {
        cout << "The Grade is :: " << 'C' << endl;

    } else if(*pavg == 67 or *pavg <= 70) {
        cout << "The Grade is :: " << 'B' << endl;

    } else if(*pavg == 71 or *pavg <= 80) {
        cout << "The Grade is :: " << "B+" << endl;

    } else if(*pavg == 81 or *pavg <= 86) {
        cout << "The Grade is :: " << 'A' << endl;

    } else if(*pavg == 87 or *pavg <= 97) {
        cout << "The Grade is :: " << "A+" << endl;

    } else if(*pavg >= 98) {
        cout << "The Grade is :: " << 'O' << endl;
    }
        
}

void Average(records stdAVG[],int loop) {
        static int sum,loop2 = 5,avg = 0,Subjects = 5;
        int* ptr_avg = &avg;

        for (size_t times = 0; times < loop2; times++) 
          sum += stdAVG[loop].marks[times];
        
        avg = sum/Subjects;
        
        cout << "Average marks :: " << avg << endl;

        Grade(loop,ptr_avg);
}

void data_user(records std[],int loop) {

        cout << "Roll number of Student :: ";
        cin >> std[loop].rollnumber;
        cout << "Name of Student :: ";
        cin >> std[loop].student_name;

        int len = 5,sub = 0; 

        while (len--) {
               cout << std[loop].subjects[sub] << ": ";
               cin >> std[loop].marks[sub];
               sub++;
        }

        Average(std,loop);
        
}

int condition(short int *no_records) {
    char user2;

    cout << "Do you want to increase the Records (y/n) :: ";
    cin >> user2;

    if(user2 == 'Y' or user2 == 'y') {
       cout << "Enter the Number of records :: " ;
       cin >> *no_records;
    }

    return *no_records;
}

void Records() {
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