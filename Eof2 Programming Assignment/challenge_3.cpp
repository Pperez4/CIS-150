/***************************************************************
CIS 150     FALL 2022                      Due Date : 09/04/2022
Paola Perez
Professor Jennifer Merritt
 ***************************************************************/
// Sales Tax
#include <iostream>
using namespace std;
int main()

{
    float state_tax, county_tax, calculation, total_tax, total_purchase;
    total_purchase = 95.0;
    state_tax = 0.04;
    county_tax = 0.02;
    calculation = state_tax + county_tax;
    total_tax = calculation * total_purchase;
    cout << "The total sales tax of the purchase is " << "$" << total_tax << endl;
    
}


