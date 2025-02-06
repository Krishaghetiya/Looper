// Q.2 Digit Counter 
// Develop a Program to count the total number of digits in a number. 
// Example: 
// Input: Enter any number: 754 
// Output: Total number of digits: 3 


#include <iostream>
using namespace std;

main()
{
    int a , count;
    cout << "Enter any number:";
    cin >> a;
    count = 0;

    while (a != 0)
    {
        a = a/10;
        count++;
    }
    
    cout << count ;




    return 0;
}
