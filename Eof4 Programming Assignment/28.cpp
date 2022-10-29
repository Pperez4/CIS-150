#include <iostream>

using namespace std;

int main()
{
    char vegan, vegetarian, gluten_free, y, n;
    cout << "Please anwer the following questions with lowercase y for yes and lowercase n for no" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "Are you vegetarian? ";
    cin >> vegetarian;
    cout << "Are you vegan? ";
    cin >> vegan;
    cout << "Are you gluten-free? ";
    cin >> gluten_free;

    if(vegetarian == 'y' && vegan == 'y' && gluten_free == 'y'){
        cout << "-------------------------------------------" << endl;
        cout << "Here are your restaurant choices: " << endl;
        cout << "The Chef’s Kitchen" << endl;
        cout << "-------------------------------------------" << endl;}
        else if (vegetarian == 'n' && vegan == 'n' && gluten_free == 'n')
                {
                cout << "Here are your restaurant choices: " << endl;
                cout << "-------------------------------------------" << endl;
                cout << "Joe’s Gourmet Burgers\n";
                cout << "Main Street Pizza Company\n";
                cout << "Corner Cafe\n";
                cout << "Mama’s Fine Italian\n";
                cout << "The Chef’s Kitchen\n";
                cout << "-------------------------------------------" << endl;
                }
                    else if(vegetarian == 'y' && vegan == 'n' && gluten_free == 'y' || vegetarian == 'n' && vegan == 'n' && gluten_free == 'y')
                        {   cout << "-------------------------------------------" << endl;
                            cout << "Here are your restaurant choices: " << endl;
                            cout << "Main Street Pizza Company\n";
                            cout << "Corner Cafe\n";
                            cout << "The Chef’s Kitchen\n";
                            cout << "-------------------------------------------" << endl;
                            }
                            else if(vegetarian == 'n' && vegan == 'y' && gluten_free == 'n' || vegetarian == 'y' && vegan == 'y' && gluten_free == 'n' || vegetarian == 'n' && vegan == 'y' && gluten_free == 'y')
                            {
                                    cout << "-------------------------------------------" << endl;
                                    cout << "Here are your restaurant choices: " << endl;
                                    cout << "Corner Cafe\n";
                                    cout << "The Chef’s Kitchen\n";
                                    cout << "-------------------------------------------" << endl;
                            }
                                else if(vegetarian == 'y' && vegan == 'n' && gluten_free == 'n')
                                        {
                                            cout << "-------------------------------------------" << endl;
                                            cout << "Here are your restaurant choices: " << endl;
                                            cout << "Main Street Pizza Company\n";
                                            cout << "Corner Cafe\n";
                                            cout << "Mama’s Fine Italian\n";
                                            cout << "The Chef’s Kitchen\n";
                                            cout << "-------------------------------------------" << endl;
                                        }
                                           else if(vegetarian == 'n' && vegan == 'n' && gluten_free == 'y')
                                           {                  
                                                    cout << "-------------------------------------------" << endl;
                                                    cout << "Here are your restaurant choices: " << endl;
                                                    cout << "Main Street Pizza Company\n";
                                                    cout << "Corner Cafe\n";
                                                    cout << "The Chef’s Kitchen\n";
                                                    cout << "-------------------------------------------" << endl;
                                           }
                                                    else{
                                                        cout << "-------------------------------------------" << endl;
                                                        cout << "⚠️ Invalid answer please try again. ⚠️" << endl;
                                                        cout << "-------------------------------------------" << endl;
                                                    }

}