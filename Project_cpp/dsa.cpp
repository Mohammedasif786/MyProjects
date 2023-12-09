//#pragma once
#include <iostream>
#include <cstdlib>
#include "insertion_student_MS.hpp"
#include "prototype.hpp"
#include "studclasses.hpp"
//?#include "delection_student_MS.hpp" Future!
//?#include "Searching_student_MS.hpp" 

using namespace std;

void insert_record(int size) {
    int user;

    while (true)
    {
        system("cls");
        cout << "1.Beginning insertion on table" << endl;
        cout << "2.middle insertion on table" << endl;
        cout << "3.end insertion on table" << endl;
        cout << "4.Spcifice place/index insertion on table(not use this option!(Construction...))" << endl;
        cout << "5.exit insertion on table" << endl << endl;
        cout <<"Enter you choice (1/2/3/4/5) ::";
        cin >> user;

        switch(user) 
        {
        case 1:
        beginning(size);
        break;
        
        case 2:
        middle();
        break;

        case 3:
        end();
        break; 

        /*case 4:
        speifice();
        break;*/

        case 5:
        exit(0);
        
        default:
        cout << "Wrong input 404!";
            break;
        }
    }
    
}
void del_record()  {
    cout << "Here del_records --here--";
}

void search_record() {
    space::records stud[4];

} 