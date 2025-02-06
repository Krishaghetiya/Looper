// Q.3 Digit Addition 
// Develop a Program to find the sum of a number's first and last digits. 
// Example: 
// Input: Enter any number: 384 
// Output: The sum of the first and the last digit: 7 


#include <iostream>
using namespace std;

main()
{
    int a , last_digit , sum ;
    int count=0;
    cout << "Enter any number:";
    cin >> a;
    last_digit = a % 10 ;

    while (a >= 10)
    {
        a = a/10;
        count++;
    }
    sum = a + last_digit;
    cout << sum;

    return 0;
}
