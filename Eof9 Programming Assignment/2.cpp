#include <iostream>
#include <iomanip>
using namespace std;

void calcAverage(double*, int);
void selectionSort(double*, int);
void swap(int&, int&);

int main()
{
    int arraySize; 
    cout << "\tNumber of scores you wish to average: \n";
    cin  >> arraySize;
    while (arraySize < 0)
    {
        cout << "Please enter a postive quantity for test scores /n";
        cin >>  arraySize;
    }
    
    double *pointer = new double[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        cout << "\tEnter the score of test " << i + 1 << ": \n";
        cin >> pointer[i];
    }
    
    selectionSort(pointer, arraySize);
    
    cout << endl;
    cout << "\tThe scores in ascending order:  \n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << pointer[i] << "%" << endl;
    }
    cout << endl;
    calcAverage(pointer, arraySize);


    delete [] pointer;
    pointer = nullptr;
    return 0;
}

void selectionSort(double *pointer, int arraySize)
{
    int minIndex, minValue;

    for (int start = 0; start < (arraySize - 1); start++)
    {
        minIndex = start;
        minValue = pointer[start];
        for (int i = start + 1; i < arraySize; i++)
        {
            if (pointer[i] < minValue)
            {
                minValue = pointer[i];
                minIndex = i;
            }
            
        }
        swap(pointer[minIndex], pointer[start]);
        
    }
    
}

void swap(int &a, int &b)
{
    int temp;
    a = b;
    b = temp;
}



void calcAverage(double *pointer, int arraySize)
{
    double average, total = 0.0;
    for (int i = 0; i < arraySize; i++)
    {
        total += pointer[i];
    }

    cout << fixed << showpoint << setprecision(2);
    average = total / arraySize;
    cout << "\t Average = " << average;
}