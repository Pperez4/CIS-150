/***************************************************************
CIS 150     FALL 2022                      Due Date : 09/04/2022
Paola Perez
Professor Jennifer Merritt
 ***************************************************************/
// Sales Prediction
#include <iostream>

using namespace std;

int main()
{
    float percent_total;
    int year_sales, prediction;
    percent_total = 0.58;
    year_sales = 8600000;
    prediction = year_sales * percent_total;
    cout << "The total year sales prediction is $" << prediction << endl;
}
