#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Functiom Prototypes
void getScoresNames(int *, string*, int);
void arrSort(int *, string*, int);
void display(int *, string*, int);
void calcAverage(int*, int);


int main()
{	
	// User decides array size
	int arraySize;
	cout << "\tNumber of scores you wish to average: \n";
	cin >> arraySize;
	while (arraySize < 0)
    {
        cout << "\t ERROR, please enter a positive quantity /n";
        cin >>  arraySize;
    }
	// pointers
	int *pointerScores = new int[arraySize];	// For scores
	string *pointerNames = new string[arraySize]; // For string
	getScoresNames(pointerScores, pointerNames, arraySize);
	arrSort(pointerScores, pointerNames, arraySize);
	display(pointerScores, pointerNames, arraySize);
	calcAverage(pointerScores, arraySize);
}


void getScoresNames(int *pointerScores, string* pointerNames, int arraySize)
{
	for (size_t i = 0; i < arraySize; i++)
	{
	cout <<"\tEnter the name of student " << (i+1) << endl;
	cin >> pointerNames[i];
	cout << "\tEnter the score " << (i+1) << endl;
	cin >> pointerScores[i];
	}
	
}

void arrSort(int *pointerScores, string* pointerNames, int arraySize)
{
	 int startScan = 0,minIndex = 0, minElem = 0,i = 0;
     string temp = "";
 
   for (startScan = 0; startScan < (arraySize - 1); startScan++)
   {
      minIndex = startScan;
      minElem = *(pointerScores + startScan);
      temp = *(pointerNames + startScan);

      for (i = startScan + 1; i < arraySize; i ++)
      {
         if (*(pointerScores + i) < minElem)
         {
            minElem = *(pointerScores + i);
            temp = *(pointerNames + i);
            minIndex = i;
         }
      }

      *(pointerScores + minIndex) = *(pointerScores + startScan);
      *(pointerNames + minIndex) = *(pointerNames+ startScan);
      *(pointerScores + startScan) = minElem;
      *(pointerNames + startScan) = temp;
   }   
}

void display(int *pointerScores, string *pointeNames, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << "\tStudent: " << pointeNames[i] << endl;
		cout << "\tScore: " << pointerScores[i] << "%" << endl;
	}
	
}

void calcAverage(int *pointerScores, int arraySize)
{
    double average, total = 0.0;
    for (int i = 0; i < arraySize; i++)
    {
        total += pointerScores[i];
    }

    cout << fixed << showpoint << setprecision(2);
    average = total / arraySize;
    cout << "\tAverage = " << average;
}