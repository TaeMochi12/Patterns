// A
// BB
// CCC
// DDDD
// EEEEE

#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch = ch + 1;
    }
    return 0;
}