// Q.1 Alphabet Skipper 
// Develop a program that prints all alphabets from a to z by skipping 3 alphabets using a do-while loop. 
// Example: 
// Output: a, e, i, m, q. u. y. 


#include <iostream>
using namespace std;

main()
{
    char alpha = 'a';

    while (alpha <= 'z')
    {
        cout << alpha << " ";
        alpha = alpha + 4;
    }
    
    return 0;
}
