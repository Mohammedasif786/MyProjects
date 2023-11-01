#include<iostream>
using std::cout; using std::cin; using std::endl;

namespace space {
    struct records
    {
         char *student_name;
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


int condition(short int* user) {
    char user2;

    cout << "Do you want to more records (y/n):: ";
    cin >> user2;

    fflush(stdin);

    if(user2 == 'Y' or user2 == 'y') {
       cout << "Enter the Number of records :: " ;
       cin >> *user;
    }

    return *user;
}

void Records() {
    short int no_records,*puser = &no_records;
    //int count = 0;// Future use!
    cout << "Enter the number of records :: ";
    cin >> no_records;
    records student[no_records];

    for (size_t i = 0; i < no_records; ++i) {
        if(no_records-1 == i)
        condition(puser);
        

        //Logic Code...
        cout << "Enter student roll number :: ";
        cin >> student[i].rollnumber;
        cout << "Name of Student :: ";
        cin >> student[i].student_name;

        short int subject_loop = 0;

        do  {
           cout << student[subject_loop].subjects << " : ";
           cin >> student[subject_loop].marks[subject_loop];
           ++subject_loop; 
        } while (subject_loop<5);
        
    

        //++count;
    }
    for(int i=0;i<5;++i) {
        cout << student[i].subjects << ": " << student[i].marks[i] << endl;
    }

    //cout << "The number of times :: " << count << endl;
}