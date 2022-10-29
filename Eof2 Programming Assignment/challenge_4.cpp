/***************************************************************
CIS 150     FALL 2022                      Due Date : 09/04/2022
Paola Perez
Professor Jennifer Merritt
 ***************************************************************/
//Restaurant Bill
#include <iostream>
#include <iomanip>               // iomanip library to set setprecision in my floating-point values.
using namespace std;

int main()
{
    float meal_price = 88.67,  // the meal price is $88.67.
    tax = 0.0675,             // the tax is 6.75 percent of the meal.
    tip = 0.20,              // the tip is 20 percent after the afteradding the tax.
    meal_tax,
    meal_after_tax,
    tip_meal,
    total_bill;

    cout << "Meal cost is $" << meal_price << endl;
    // tax calculation.
    meal_tax =  meal_price * tax;
    meal_after_tax = meal_tax + meal_price;
     cout << "The tax amount is $" << setprecision(2) << fixed << meal_tax << endl;
    // tip calculation.
    tip_meal = tip * meal_after_tax ;
     cout << "Tip amount is $" << setprecision(2) << fixed << tip_meal << endl;
    // bill total.
    total_bill = tip_meal + meal_after_tax;
    cout << "Total bill is $" << setprecision(2) << fixed << total_bill << endl;
    return 0;
}
