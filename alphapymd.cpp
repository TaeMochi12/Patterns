//    A
//   ABA
//  ABCBA
// ABCDCBA

#include <iostream>
using namespace std;
int main()
{
    char c = 'A';
    for (int i = 1; i <= 4; i++)
    {

        for (int j = 0; j < (4 - i); j++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 0; j < i + (i - 1); j++)
        {
            cout << ch;
            if (j < (i + (i - 1)) / 2)
                ch++;
            else
                ch--;
        }

        for (int j = 0; j < (4 - i); j++)
        {
            cout << " ";
        }
        cout << endl;
        c = c + 1;
    }
    return 0;
}