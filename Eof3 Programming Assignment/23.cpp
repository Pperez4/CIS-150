/***************************************************************
CIS 150     FALL 2022                      Due Date : 09/11/2022
Paola Perez
Professor Jennifer Merritt.
 ***************************************************************/
// Stock Transaction Program. 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   double 
    shares = 1000,                                  //1000 shares purchased and 1000 sold.
    paid_per_share = 45.50,                        //He paid 45.50 per share.
    percent_paid = 0.02,                          //He paid 2 percent of commission.
    share_sold = 56.90,                          //He sold the stock 56.90 per share.
    amount_paid = (shares * paid_per_share),
    comission_when_bought = (amount_paid * percent_paid),
    amount_sold_stock = (share_sold * shares),
    comission_when_sold = (amount_sold_stock * percent_paid),
    profit =  (amount_sold_stock - comission_when_sold) - (amount_paid + comission_when_bought);
    
    
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "The amount of money Joy paid for the stock: $"  << amount_paid << endl;
    cout << "Amount of comission Joe paid his broker when he bought the stock: $" << comission_when_bought << endl;
    cout << "Amount Joe sold the stock for: $" << amount_sold_stock << endl;
    cout << "Amount of comission Joe paid his broker when he sold the stock: $" << comission_when_sold << endl;
    cout << "Profit: $" << profit << endl;
    cout << endl;
}