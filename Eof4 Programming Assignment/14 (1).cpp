#include <iostream>
#include <iomanip>
using namespace std;
int main(){

         double monthCharge = 10.0,
                 tenCents = 0.10,
                 eightCents = 0.08,
                 sixcents = 0.06,
                 fourCents = 0.04,
                 balanceCharge = 15.0,
                 beginningBalace, checkQuantity, bankService;
    cout << "-------------------------------------------" << endl;
    cout << "Enter your account balance: $";
    cin >> beginningBalace;
    cout << "-------------------------------------------" << endl;
 
    if(beginningBalace < 400){
        cout << "-------------------------------------------" << endl;
        cout << " ⚠️ Your account is below the suggested balance" << endl;
        cout << "             you will be charged $15 ⚠️ "<< endl;
        cout << "-------------------------------------------" << endl;
        monthCharge = monthCharge + balanceCharge;}

    cout << "Enter the number of checks written : ";
    cin >> checkQuantity;
    if(checkQuantity < 0)
        {cout << "-------------------------------------------" << endl;
         cout << " ⚠️ The system does not allow negative quantities" << endl;
         cout << "please enter a positive quantity and try again ⚠️ " << endl;
         cout << "-------------------------------------------" << endl;}
    else{
        }
   
    if(checkQuantity < 20)
        {bankService = checkQuantity * tenCents + monthCharge;}
   else if(checkQuantity >=  20 && checkQuantity <= 39)
        {bankService = checkQuantity * eightCents + monthCharge;}
   else if(checkQuantity >= 40  && checkQuantity <= 59 )
        {bankService = checkQuantity * sixcents + monthCharge;}
   else if(checkQuantity >= 60)
        {bankService =  checkQuantity * fourCents + monthCharge;}
    

    cout << "-------------------------------------------" << endl;
    cout << fixed << setprecision(2) << "Service Total: $ " << bankService << endl;
    cout << "-------------------------------------------" << endl;
}












