// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 9; i++)
    {
        int stars = i;
        if (i > 5)
            stars = 10 - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}