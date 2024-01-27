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
            system("pause");
            break;

         case 2:
            cout << "Enter the Euro to Convert Rupees :: ";
            cin >> money,foren_money = 0.01106929378;
            amount = money/foren_money; 
            cout << "Euro Converted into Rupees(INR) :: " << amount << endl << endl;
            system("pause");
            break;

         case 3:
            cout << "Enter the Japanese(YEN) to Convert Rupees :: ";
            cin >> money,foren_money = 1.78;
            amount = money/foren_money; 
            cout << "YEN Converted into Rupees(INR) :: " << amount << endl << endl;
            system("pause");
            break;

         case 4:
            cout << "Enter the Pound to Convert Rupees :: ";
            cin >> money,foren_money = 0.0094;
            amount = money/foren_money; 
            cout << "Pound Converted into Rupees(INR) :: " << amount << endl << endl;
            system("pause");
            break;

         case 5:
            cout << "Enter the Dollar to Convert YEN :: ";
            cin >> money,foren_money = 0.0068;
            amount = money/foren_money; 
            cout << "Dollar Converted into Japanese(YEN) :: " << amount << endl << endl;
            system("pause");
            break;

         case 6:
            cout << "Enter the Rupees to Convert YEN :: ";
            cin >> money,foren_money = 0.56;
            amount = money/foren_money; 
            cout << "Rupees Converted into Japanese(YEN) :: " << amount << endl << endl;
            system("pause");
            break;

         case 7:
            cout << "Enter the Rupees to Convert Pound :: ";
            cin >> money,foren_money = 105.94;
            amount = money/foren_money; 
            cout << "Dollar Converted into Pound :: " << amount << endl << endl;
            system("pause");
            break;

         case 8:
            cout << "Enter the Rupees to Convert Dollar :: ";
            cin >> money,foren_money = 83.12;
            amount = money/foren_money; 
            cout << "Rupees Converted into Dollar :: " << amount << endl << endl;
            system("pause");
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
