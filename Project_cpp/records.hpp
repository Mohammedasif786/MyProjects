#include<iostream>
using std::cout; using std::cin;

namespace space {
    struct records
    {
         char *student_name;
         char *subjects[5] = {
            "English","Math","Science"
            ,"Kannada","CS"
         }; 
         int marks[5]; //! 50 to 100!
         char grade;
    };
    
}
using space::records;


void condition(char user) {
    short int records_no;

    if(user == 'Y') {
    cout << "Do you want to increase the Records (y/n)";
    cin >> records_no;
    }

}

void Records() {
    short int user,*puser = &user;
    //?int count = 0; Future use!
    cout << "Enter the number of records :: ";
    cin >> user;
    records student[user];

    for (size_t i = 0; i < user; i++) {
        if(user == i-1)
        condition(user);

    }
    
}