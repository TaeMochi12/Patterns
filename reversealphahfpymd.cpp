// E
// DE
// CDE
// BCDE
// ABCDE

#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    // why my wrong??
    //  char ch = 'E';
    //  for (int i = 0; i < 5; i++)
    //  {
    //      for (int j = 0; j <= i; j++)
    //      {
    //          cout << ch << " ";
    //          ch = ch + 1;
    //      }
    //      cout << endl;
    //      ch = ch - 1;
    //  }
    return 0;
}