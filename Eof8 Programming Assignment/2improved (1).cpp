#include <iostream>
using namespace std;

int linearSearch(const int, const int[], int);

int main()
{

    const int SIZE = 10;
    int array[SIZE] = { 13579, 26791, 26792, 33445, 55555, 
                        62483, 77777, 79422, 85647, 93121 };
                      
                      
                      
    int validation;
    int userInput;

    cout << "Hello user, please enter the 5-digit number ticket: \n";
    cin >> userInput;

    while(cin.fail())
    {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Enter NUMBERS only: ";
    cin >> userInput;
    }

    validation = linearSearch(SIZE, array, userInput);

    if (validation == -1)
    {
        cout << "Your ticket #" << userInput << " is not a winner this week \n";
    }
    else {
        cout << "Your ticket #" << userInput << " is a winner this week :)\n";
    }
    return 0;
}

int linearSearch(const int SIZE, const int array[], int userInput)
{

    int index = 0;     
    int position = -1; 
    bool found = false;
    

    while (index < SIZE && !found)
    {
        if (array[index] == userInput)
        {
            found = true;
            position = index;
        }
        index ++;
    }
    return position;

}