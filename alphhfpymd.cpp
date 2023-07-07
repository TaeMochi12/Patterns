// A
// AB
// ABC
// ABCD
// ABCDE

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++) //'A'+i means for 3rd row print A+2 i.e. A B C
        {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}