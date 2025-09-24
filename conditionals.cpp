#include <bits/stdc++.h>

using namespace std;

// Write a program that takes an input of
// age and prints if you're adult or not
// >=20, yes
// < 20, no

// int main(){
//     int age;
//     cin >> age;
//     if (age < 20){
//         cout << "You're a kid";
//     }else if (age >=20){
//         cout << "You're an adult";
//     }

//     return 0;
// }

// Problem-
/*
A school has following rules for grading system

a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade
*/

// int main()
// {
//     int marks;
//     cin >> marks;
//     if (marks < 25)
//     {
//         cout << "F";
//     }
//     else if (marks <= 44)
//     {
//         cout << "E";
//     }
//     else if (marks <= 49)
//     {
//         cout << "D";
//     }
//     else if (marks <= 59)
//     {
//         cout << "C";
//     }
//     else if (marks <= 79)
//     {
//         cout << "B";
//     }
//     else if (marks <= 100)
//     {
//         cout << "A";
//     }
//     return 0;
// }

/*
Take the age from the user and then decide accordingly
1. if age < 18 -> not eligible for job
2. if age >=18 and age <= 54 -> eligible for job
3. If age >= 55 and age <=57 -> eligible for job but retirement soon
4. if age > 57 -> retirement time
*/

int main()
{
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "not eligible for job";
    }
    else if (age <= 54)
    {
        cout << "eligible for job";
    }
    else if (age <= 57)
    {
        cout << "eligible for job";
        if (age >= 55)
        {
            cout << ", but retirement soon";
        }
    }
    else
    {
        cout << "retirement time";
    }

    return 0;
}