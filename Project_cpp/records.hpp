#include<iostream>
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
        
}

void Average(records stdAVG[],int loop) {
        static int sum,loop2 = 5,gained_marks,total;

        for (size_t i = 0; i < loop2; i++) 
            sum +=  stdAVG[loop].marks[loop2];

        gained_marks = sum;

        total = (gained_marks*100)/500;

        cout << "Average marks :: " << total << endl;

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