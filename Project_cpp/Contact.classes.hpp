#include <fstream>
#define normal "\033[1;0m"
#define size 10

class Contact
{
private:
    std::ofstream contact_data;
    std::ifstream input_contact_data;
    //File handling data-set
     void create();
     void read();
    //void Search(); Feature update
     void delete_contact();
public:
    //Basic inputs dataype and varibles
    std::string name,email,phone,address;
    static int count;

    //I/p taken here
    //?Contact() why this not work?
    void inputs();

    //Logo defined here!
    void logo() {
        system("color a");
        cout << "\t\t+==================================+" << endl;
        cout << "\t\t| Contact App develop by Asif(KBN) |" << endl;
        cout << "\t\t+==================================+" << endl << endl;
        cout << "\033[1;0m" << endl; //*white color
    }

}app[size],*ptr1 = app;

//Static counter storage definer
int Contact::count = 0;

//*file handling function here only!
void Contact::create() {
    char wants;
    cout << "Do you want to save?(y/n) :: ";
    cin >> wants;
    if(wants == 'Y' or wants == 'y')
    contact_data.open("temp",ios::app|ios::ate);
    else
    contact_data.open("temp",ios::out);

    if(!contact_data) 
        cerr << "Error while Creating :: ";
    else {
        for(size_t i=0;i<Contact::count;++i) { 
        contact_data << app[i].name << endl
                     << app[i].phone << endl
                     << app[i].email << endl
                     << app[i].address << endl;
        }
        cout << "\033[1;32mFile Created Succesfully" << normal << endl;
        system("pause");
       contact_data.close();
    } 
}

//Read the Data from Disk
void Contact::read() {
    string reading;
    input_contact_data.open("temp",ios::in);

    if(!input_contact_data) 
        cerr << "Error while Creating :: ";
    else {
        while(true) {
            input_contact_data >> reading;
            if(input_contact_data.eof())
            break;
            cout << reading << endl;
        }
        input_contact_data.close();
        cout << endl;
        system("pause");
    }
}

void Contact::delete_contact() {
    string search,reading;
    char erase = '\0';
    input_contact_data.open("temp",ios::in);

    if(input_contact_data.is_open()) {
        cout << "Enter the name or Phone number to delete :: ";
        cin >> search;

        input_contact_data.read((char *)this,sizeof(this));
        while(!input_contact_data.eof())
                if(reading == search)
                remove("temp");
   } else cerr << ":: Not found in the Contact :: " << endl;

   input_contact_data.close();
}

/*void Contact::Search() {
    string reading,find;

    cout << "What you want to search :: ";
    cin >> find;

    input_contact_data.open("temp",ios::in);
    while(input_contact_data >> reading) 
          if(reading == find) {
        cout << "Name : " << reading << endl;
        cout << "Pno : " << reading << endl;
        cout << "email : " << reading << endl;
        cout << "Addres : "  << reading << endl;
        break;
          }
        system("pause");

        input_contact_data.close();
}
*/

//*END