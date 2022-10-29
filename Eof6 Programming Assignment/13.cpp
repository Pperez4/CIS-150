#include <iostream>
using namespace std;

// Function prototypes      
// Shows a message.                  
void showIntro(); 
// Accepts no arguments.                                          
int askNumemployees(); 
// Accepts one argument: number of employees.
int numberAbsences(int numEmployees);     
// Accepts two arguments: number of employees and days absent.                 
double average(int numEmployees, int numAbsences);          

int main()
{   
    showIntro();
    int numEmployees = askNumemployees();
    int numAbsences = numberAbsences(numEmployees);
    cout << "-------------------------------------------" << endl;
    cout << "The average is: " << average(numEmployees, numAbsences) << endl;
    cout << "-------------------------------------------" << endl;
}

void showIntro()
{
    cout << "-------------------------------------------\n"
         << "This program calculates the average number\n"
         << "of days a company's employees are absent.\n"
         << "-------------------------------------------\n";
}

/**
* ? The function askNumemployees asks the user for the number of employees in the company. 
*/

int askNumemployees()
{
    int numberE;
    do
    {
    cout << "Enter the number of employees in the company: \n";
    cin >> numberE;
    if (numberE < 1) 
    cout << " ⚠️ Enter a valid quantity for the number of employees ⚠️ \n";
    } while (numberE < 1);
    return numberE;
    
}

/** 
* ? The function numberAbsences function accepts one argument - number of employees.
* ? Ask the user for the number of days each employee missed.
*/

int numberAbsences(int numEmployees)   
{
	int totalDays = 0;
	for (int i = 1; i <= numEmployees; i++)
	{
		int daysAbsent;
		do
		{
			cout << "Enter the number of missed days of employee " << i << ": ";
			cin >> daysAbsent;
			if (daysAbsent < 0)
			{
				cout << "⚠️ Enter a valid quantity for number of days ⚠️\n";
			}
			else
			{
				totalDays += daysAbsent;
			}		
		} while (daysAbsent < 0);	
	}
	return totalDays;
}

/**
* ? The function average takes two arguments - number of employees and absences.
* ? Returns as a double, the average number of days absent.
*/
double average(int numEmployees, int numAbsences)
{
    double average = numAbsences/numEmployees;
    return average;
}
