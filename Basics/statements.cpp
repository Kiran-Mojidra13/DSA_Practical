#include <iostream>
using namespace std;

//write program that takes input of age and print adult or not
int main()
{

    // int age;

    // cout<< "Enter Age";
    // cin >> age;

    // if(age >= 18)
    // {
    //     cout << "You are an adult";
    // }
    // else if(age < 18 && age>0){
    //     cout << "You are Minor";
    // }
    // else{
    //     cout<< "Please Enter valid choise";
    // }


    int marks;
    cin >> marks;

    if(marks < 25)
        cout<< "F";
    else if(marks >=25 && marks <=44)
        cout << "E";
    else if(marks >=45 && marks <=49)
        cout << "D";
    else if(marks >=50 && marks <=59)
        cout << "C";
    else if(marks >=60 && marks <=79)
        cout << "B";
    else if(marks >=80 && marks <=100)
        cout << "A";
    else
        cout << "Enter valid";
    

    return 0;
}