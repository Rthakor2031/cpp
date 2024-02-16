#include <iostream>
using namespace std;

void main() 
{
    char ch1, ch2, temp;

    cout << "Enter first character: ";
    cin >> ch1;
    cout << "Enter second character: ";
    cin >> ch2;

    
    if (ch1 > 'M' || ch2 > 'M') 
	{
        cout << "Enter a character less than 'M'" << endl;
    } else 
	{
        temp = ch1;
        ch1 = ch2;
        ch2 = temp;

        cout << "After swapping:" << endl;
        cout << "First character: " << ch1 << endl;
        cout << "Second character: " << ch2 << endl;
    }

}
