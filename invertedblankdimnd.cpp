// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include <iostream>
using namespace std;
int main()
{
    int stars, spaces;
    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            stars = i;
            spaces = 10 - 2 * i;
        }
        else
        {
            stars = 10 - i;
            spaces = 2 * i - 10;
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}