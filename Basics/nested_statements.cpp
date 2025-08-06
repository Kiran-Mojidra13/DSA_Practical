#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    if (age > 18)
    {
        cout << "You are elegable to get Job";

        if(age == 20)
            cout <<"You got it!";
    }
    else {
        cout << "not eligable";
    }
    return 0;
}