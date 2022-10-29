#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int     numFloors, 
            numRooms;
    double  rate,
            total_rooms = 0,
            total_occupied = 0,
            occupied,
            unoccupied;

// ASK THE USER FOR THE NUMBER OF FLOORS IN THE HOTEL;
cout << "  Enter the number of floors in the Hotel " << endl;
cin >> numFloors;
while (numFloors < 1)
{
    cout << " ⚠️ Enter a valid quantity for the number of floors in the Hotel. ⚠️" << endl;
    cout << " ⚠️ The quantity should be at least 1 ⚠️" << endl;
    cout << "   Try again! " << endl;
    cout << "   Enter the number of floors in the Hotel " << endl;
    cin >> numFloors;
}
for(int f = 1; f <= numFloors; f++)
if (f != 13)  
{                              
    cout << "Enter the number of rooms in floor " << f << endl;
    cin >> numRooms;
    while(numRooms < 10)
    {
        cout << "⚠️ Enter a valid quantity for the number of rooms in a floor ⚠️" << endl;
        cout << "⚠️ The quantity should be at least 10 rooms in a floor ⚠️" << endl;
        cout << "Try again! " << endl;
        cout << "Enter the number of rooms in floor " << f << endl;
        cin >> numRooms;
    }
    total_rooms += numRooms;
    cout << "Enter the number of rooms occupied in floor " << f << endl;
    cin >> occupied;
    total_occupied += occupied;
}
cout << "-------------------------------------------" << endl;
cout << "The total number of rooms in the Hotel: " << total_rooms << endl;
cout << "The total number of rooms occupied in the Hotel: " << total_occupied << endl;
unoccupied = (total_rooms - total_occupied);
cout << "The total number of unoccupied rooms in the Hotel: " << unoccupied << endl;
rate = (total_occupied/total_rooms) * 100;
cout << fixed << setprecision (2) << "The percentage of rooms occupied: " << rate << "%"<< endl;
cout << "-------------------------------------------" << endl;
}