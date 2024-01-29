#include<iostream>
#include<vector>
using namespace std; 
#define endl '\n'
#define size 32

class Contact_app
{
private:
    short int user_choice;
    typedef struct  information {
    string first_name,last_name,date_of_birth,country; //USE of array?
    char gender;
    unsigned phone_no;
    }info;

    void logo() {
        system("color a");
        cout << "\t\t+==================================+" << endl;
        cout << "\t\t| Contact App develop by Asif(KBN) |" << endl;
        cout << "\t\t+==================================+" << endl << endl;
        cout << "\033[1;0m" << endl; //*white color
    }
public:
    Contact_app(/* args */);
    ~Contact_app();

     void add() {
        info first[size];
        int total;

        cout << "How many contact you want to add! :: ";
        cin >> user_choice;

        total += user_choice;

        if(user_choice == 0) {
        for(int i=0;i<user_choice;++i) {
        cout << "Enter you First name :: ";
        cin >> first[i].first_name;
        cout << "Enter you last name :: ";
        cin >> first[i].last_name;
        cout << "Enter your Gender(M/F/Others) :: ";
        cin >> first[i].gender;
        cout << "Enter Date of Birth :: ";
        cin >> first[i].date_of_birth;
        cout << "Enter you Phone number :: ";
        cin >> first[i].phone_no;
        cout << "Enter your Country :: ";
        cin >> first[i].country;
    }
    } else {
       for(int i=total;i<total+user_choice;++i) {
        cout << "Enter you First name :: ";
        cin >> first[i].first_name;
        cout << "Enter you last name :: ";
        cin >> first[i].last_name;
        cout << "Enter your Gender(M/F/Others) :: ";
        cin >> first[i].gender;
        cout << "Enter Date of Birth :: ";
        cin >> first[i].date_of_birth;
        cout << "Enter you Phone number :: ";
        cin >> first[i].phone_no;
        cout << "Enter your Country :: ";
        cin >> first[i].country;
    }

    }
        //? User pointer to return the main information to other used to perfom operation!
        //! or Leave because we inside the class not the oustide the Class
    }
    void display() {

    }
    void Search() {

    }
    void del() {

    }

};

Contact_app::Contact_app(/* args */)
{
    short int user;
    while(true) {
      system("cls");
      logo();
      cout << "[1].Add new Contact " << endl;
      cout << "[2].Display Contact user" << endl;
      cout << "[3].Search Contact" << endl;
      cout << "[4].Delete Contact" << endl;
      cout << "[5].Exit Application" << endl << endl;
    cout << "Enter your choice :: ";
    cin >> user;
    switch (user)
    {
    case 1:
        add();
        break;
    
    case 2:
        display();
        break;

    case 3:
        Search();
        break;

    case 4:
        del();
        break;

    case 5:
    exit(0);
    
    default:
    cerr << "Error there is no option available Please try another!" << endl;
        break;
    }
  }
}

Contact_app::~Contact_app()
{
    //*file handling inshallah...
}


int main(void) { 
    Contact_app* program = new Contact_app();
    delete program;
    return 0;
}
