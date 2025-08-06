#include <iostream>
using namespace std;

 int main()
 {
    int day;

    cin >> day;

    switch (day)
    {
        case 1:
            cout << "sun";
            break;
        case 2:
            cout << "Mon";
            break;
        case 3:
            cout << "Tues";
            break;
        case 4:
            cout << "Wed";
            break;
        case 5:
            cout << "Thrus";
            break;
        case 6:
            cout << "Fri";
            break;
        case 7:
            cout << "satur";
            break;
        default:
            cout << "enter valid";
    }
    return 0;

 }