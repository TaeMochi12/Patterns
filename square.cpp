// ****
// *  *
// *  *
// ****

#include <iostream>
using namespace std;
int main()
{
    int n; // no. of sides if taken by user
    cin >> n;
    int stars, spaces;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            stars = n / 2;
            spaces = 0;
        }
        else
        {
            stars = 1;
            spaces = n - 2;
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