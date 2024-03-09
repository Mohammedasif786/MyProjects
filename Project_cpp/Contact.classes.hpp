#include <fstream>
#define size 10

class Contact
{
private:
    std::fstream contact_data;
    //File handling data-set
     void create();
     void read();
     void write();
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

    contact_data.open("temp",ios::out);
    if(!contact_data) 
        cerr << "Error while Creating :: ";
    else {
        cout << "\033[1;32mFile Created Succfully" << endl;
       contact_data.close();
    } 
}
//*END