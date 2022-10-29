#include <iostream>
using namespace std;

void showMessage();
void gradeAnswers(int, int, char[], char[]);
int main() {
   showMessage();
   const int arraySize = 20;
   const int correctAnswersneeded = 15;

   char correctAnswers[arraySize] =
   {'B', 'D', 'A', 'A', 'C','A', 'B', 'A', 'C', 'D',
    'B', 'C', 'D', 'A', 'D','C', 'C', 'B', 'D', 'A'};

   char userAnswers[arraySize];



   for (int i = 0; i < arraySize; i++)
      {
         cout <<  "Enter the answer for question  " << (i + 1) << ": ";
         cin >> userAnswers[i];

       
       if (userAnswers[i] != 'A' && userAnswers[i] != 'B' && userAnswers[i] != 'C' && userAnswers[i] != 'D')

     {
            cout << "The program only accept the letters A, B, C, or D as answers.\n";
            cout << "Please enter a valid answers  "
                 << (i + 1) << ": ";

            cin >> userAnswers[i];
     } 

  } 

   gradeAnswers(arraySize, correctAnswersneeded, correctAnswers, userAnswers);
   return 0;
} 
   
void showMessage()
{
    cout << endl
         << " This program grades the written\n "
         << "portion of the driver’s license exam.\n"
         << endl;
}


void gradeAnswers(int arraySize, int correctAnswersneeded, char correctAnswers[], char userAnwers[]) 
{
   cout << "The exam has " << arraySize << " multiple choice questions\n";
   int userCorrectanswers = 0;
   for (int i = 0; i < arraySize; i++) 
   {
    if (correctAnswers[i] == userAnwers[i]) 
    userCorrectanswers++; 
   }

   cout << "A user must correctly answer 15 of the 20 questions to pass the exam.\n";

   if (userCorrectanswers >= correctAnswersneeded) 
    {
        cout << "\nUser passed the exam\n";
    }

   else {
    cout <<"\nUser didn't pass exam\n";}

   cout << "Total number of correctly answered questions: " << userCorrectanswers << "\n";
   cout << "Total number of incorrectly answered questions: " << arraySize - userCorrectanswers << "\n";
 

   cout << "list of the incorrectly answered questions.\n";

   for (int i = 0; i < arraySize; i++) {
   if (correctAnswers[i] != userAnwers[i])  
   cout  << i << " is incorrect." << endl;
   }


} 