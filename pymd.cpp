//     *
//    ***
//   *****
//  *******
// *********

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - (i + 1); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int h = 0; h < 5 - (i + 1); h++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}