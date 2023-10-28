#include<iostream>
#include<cstring>
#include<cstdlib>
#include "records.hpp"
#include "dsa.hpp"
#define endl "\n"
#define NL cout << endl;
using std::cout; using std::cin; using std::string;

void logo() {
        cout << "\t\t\t================================" << endl;
        cout << "\t\t\t| Student Managment System |" << endl;
        cout << "\t\t\t================================" << endl;
}

int main() {
    short int choice;

    while (true)
    {
        logo();

        NL

        cout << "[1].Enter new Records " << endl;
        cout << "[2].Modify Records " << endl;
        cout << "[3].Delete Records " << endl;
        cout << "[4].Search and view Records " << endl;
        cout << "[5].Exit" << endl;

        cout << "Enter you choice :: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Records();
            break;

        case 2:
            insert_record();
            break;

        case 3:
            del_record();
            break;

        case 4:
            search_record();
            break;

        case 5:
            exit(0);
        
        default:
        cout << "Invalid input 404!";
            break;
        }
    }
    
    return 0;
}
