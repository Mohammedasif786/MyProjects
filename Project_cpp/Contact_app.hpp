#include <cstdlib>

void Contact::inputs() {
    short int user;
     while (true)
     {
        system("cls");
        logo();
        cout << "[1].Create Contact" << endl;
        cout << "[2].Show the list of Contact" << endl;
        cout << "[3].Search the Contact list" << endl;
        cout << "[4].Delete Contact" << endl;
        cout << "[5].Exit" << endl;
        cout << "Enter your choice :: ";
        cin >> user;
        switch (user)
        {
        case 1:
            Create_contact();
            Contact::create();
            break;
        case 2:
            list_contact();
            Contact::read();
            break;

        case 3:
            Search_contact();
            //Contact::Search();
            break;

        case 4:
            del_contact();
            break;

        case 5:
        exit(0);

        default:
            cerr << "Please try again " << endl;
            break;
        }
     }
     
}

//*Create Contact 
void Create_contact() {
    //!start here first
    short int ask;
    cout << "How many contact you want add-up? :: ";
    cin >> ask; //*First try as 1 or 2
    fflush(stdin);

    system("cls");
    for(short int i=0;i<ask;++i) {
    cout << "\tDetails of user" << "\t\tContacted added :: ["<< sizeof(app)/sizeof(app[0]) << "/" << Contact::count << "]";
    cout << "\t\n=============================\n";
    cout << "Enter you name :: ";
    cin >> ptr1->name;
    cout << "Enter Moblie no :: ";
    cin >> ptr1->phone;
    cout << "Enter Email :: ";
    cin >> ptr1->email;
    cout << "Enter Address :: ";
    cin >> ptr1->address;
    ++ptr1;
    ++Contact::count;
    }
}

//*list
void list_contact() {
    //*Search types manual Search() and All search(X)
    //all list shown
    for (short int i = 0; i < Contact::count; i++) {
       cout << "Name :" << app[i].name << endl
            << "Pno :" << app[i].phone << endl
            << "Email :"<< app[i].email << endl
            << "Address :"<< app[i].address << endl;
    }
    cout << "\n";
    system("pause");
}

//Searching Contact Function
void Search_contact() {
    string find_person;
    char user;

    while(true) {
    cout << "Enter the name or Phone number to find person :: ";
    cin >> find_person;

    cout << "\n+============================+\n";
    for (size_t i = 0; i <= Contact::count; i++)
    {
        if((find_person == app[i].name) or (find_person == app[i].phone))  {
        cout << "Name :" << app[i].name << endl
            << "Pno :" << app[i].phone << endl 
            << "Email :"<< app[i].email << endl
            << "Address :"<< app[i].address << endl;
        cout << "+============================+\n";

           system("pause");
        } else if(i > Contact::count) cerr << "Not found in the Contact book " << endl;
    }
    cout << "Want to search more? (y/n) :: ";
    cin >> user;
    if(user == 'n' or user == 'N')
        break;
}
      
}


//*delete contact
void del_contact() {
    cout << "inside the delete contact!" << endl;

    string key;
    cout << "Enter a key to delete the Contact :: ";
    cin >> key;

    for(size_t i=0;i<Contact::count;++i) {
    if((key == app[i].name)or(key == app[i].phone)) // 2
        app[i].name = '\0';
        app[i].address = '\0';
        app[i].email = '\0';
        app[i].phone = '\0';
    //name[i] = '\0';
        --Contact::count;
   } 
    system("pause");
}