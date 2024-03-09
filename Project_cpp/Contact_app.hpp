void Contact::inputs() {
    short int user;
     while (true)
     {
        system("cls");
        logo();
        cout << "[1].Create Contact" << endl;
        cout << "[2].Show the list of Contact" << endl;
        cout << "[3].Delete Contact" << endl;
        cout << "[4].Exit" << endl;
        cout << "Enter your choice :: ";
        cin >> user;
        switch (user)
        {
        case 1:
            Create_contact();
            /*if(user)
            Contact::create();*/
            break;
        case 2:
            list_contact();
            break;
        case 3:
            delete_contact();
            break;
        case 4:
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
        cout << app[i].name << " "
            << app[i].phone << " "
            << app[i].email << " "
            << app[i].address << endl;
    }
    
    cout << "\n";
    system("pause");
}

//*delete contact
void delete_contact() {
    cout << "inside the delete contact!" << endl;
}