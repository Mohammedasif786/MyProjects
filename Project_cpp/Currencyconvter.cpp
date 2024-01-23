#include<iostream>
#define endl '\n'
using namespace std;                                            

class Currencyconvter
{
private:
    float money,foren_money,amount;
    short int user;
public:
    Currencyconvter(/* args */);
    ~Currencyconvter();
    void logo() {
        cout << "\n\t+========================================+" << endl;
        cout << "\t| Currency Conventer App develop by Asif |" << endl;
        cout << "\t+========================================+" << endl << endl;
    }
    void start() {
        while (true) {
            cout << endl << "Choose Below Option to convert currency " << endl;
            cout << "{1}.Dollar(USD) -> Rupee(INR)" << endl;
            cout << "{2}.Euro(euro) -> Rupee(INR)" << endl;
            cout << "{3}.Japanese(Yen) -> Rupee(INR)" << endl;
            cout << "{4}.Pound(pound) -> Rupee(INR)" << endl;
            cout << "{5}.Dollar(USD) -> Japanese(YEN)" << endl;
            cout << "{6}.Rupee(INR) -> Japanese(YEN)" << endl;
            cout << "{7}.Rupee(INR) -> Pound(pound)" << endl;
            cout << "{8}.Rupee(INR) -> Dollar(USD)" << endl ;
            cout << "{9}.EXIT" << endl << endl;
        cout << "Enter you choice :: ";
        cin >> user;
        switch (user)
        {
            system("cls");
         case 1:
            cout << "Enter the Dollar to Convert Rupees :: ";
            cin >> money,foren_money = 0.012;
            amount = money/foren_money; 
            cout << "Dollar Converted into Rupees(INR) :: " << amount << endl << endl; 
            break;

         case 2:
            amount = money/foren_money; 
            cout << "Dollar Converted into Rupees(INR) :: " << amount;
            break;

         case 3:
            amount = money/foren_money; 
            cout << "Dollar Converted into Rupees(INR) :: " << amount;
            
            break;
         case 4:
            amount = money/foren_money; 
            cout << "Dollar Converted into Rupees(INR) :: " << amount;
            
            break;
         case 5:
            amount = money/foren_money; 
            cout << "Dollar Converted into Rupees(INR) :: " << amount;
            
            break;
         case 6:
            amount = money/foren_money; 
            cout << "Dollar Converted into Rupees(INR) :: " << amount;
            
            break;
         case 7:
            amount = money/foren_money; 
            cout << "Dollar Converted into Rupees(INR) :: " << amount;
            
            break;
         case 8:
            amount = money/foren_money; 
            cout << "Dollar Converted into Rupees(INR) :: " << amount;
            break;

         case 9:
            exit(0);
       
         default:
         cout << "Wrong Option Selected! Please try Again" << endl;
            break;
         }
        }
    }
};

Currencyconvter::Currencyconvter(/* args */)
{
}

Currencyconvter::~Currencyconvter()
{
}

int main(void) {
    Currencyconvter* convert = new Currencyconvter();
    convert->logo(); 
    convert->start();
    delete convert;
    return 0;
}
