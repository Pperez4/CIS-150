#include <iostream>
using namespace std;


void showMessage();
void askSales(const int, string[], int[]);
void showSales(const int, string[], int[], int);
void showHighest(const int,string[],int[]);
void showLowest(const int,string[], int[]);
int main()
{
    showMessage();
    const int arraySize = 5;
    string salsaType[] = {"mild", "medium", "sweet", "hot", "zesty"};
    int sales[arraySize];
    int totalSales;
    
    cout << "Enter a positive quantity for jars sold of each type of salsa.\n";
    askSales(arraySize, salsaType, sales);
    showSales(arraySize, salsaType, sales, totalSales);
    showHighest(arraySize,salsaType,sales);
    showLowest(arraySize, salsaType, sales);

}

void showMessage()
{
    cout << "This program lets a maker of chips and salsa keep\n"
         << "track of sales for five different types of salsa.\n";
    cout << endl;
}

void askSales(const int arraySize, string salsaType[], int sales[])
{
       for (int i = 0; i < arraySize; i++)
       {
            cout << salsaType[i] << " salsa: ";
            cin  >> sales[i];
            if(sales[i] < 0)
            {
                cout << "Please enter a valid quantity for the numbers of jars sold. \n";
            }
             
       }  
       
}


void showSales(const int arraySize, string salsaType[], int sales[], int totalSales)
{   
    cout << endl;
    cout << " Total Sales Report. \n";
    cout << endl;
    for(int i = 0; i < arraySize; i++)
    {
        cout << "Total " << salsaType[i] << " salsa jars sold this past month.\n";
        cout << sales[i] << "\n";
    } 
    totalSales = 0;
    for(int i = 0; i < arraySize; i++)
    {
        totalSales += sales[i];
    }
    cout << "Total jars of salsa sold this past month: " << totalSales << "\n";
}
 
 void showHighest(const int arraySize, string salsaType[], int sales[])
 {
    int highest, highestIndex;
    highest = sales[0];
    for( int i = 1; i < arraySize; i++)
    {
        if(sales[i] > highest)
        {
          highest = sales[i];
          highestIndex = i;
        }
    
    }
    cout << "The highest selling of the month  " << highest << " jars of " << salsaType[highestIndex] << endl;
    
 }

void showLowest(const int arraySize, string salsaType[], int sales[])
{
    int lowest, lowestIndex;
    lowest = sales[0];
    for(int i = 1; i < arraySize; i++)
    {
        if(sales[i] < lowest)
        {
          lowest = sales[i];
             lowestIndex = i;
        }

    }
    cout << "The lowest selling of the month " << lowest << " jars of " << salsaType[lowestIndex] << endl;

}