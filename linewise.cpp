//   * * * *
//   * * * *
//   * * * *
//   * * * *

/* Trick to solve any pattern:
> NESTED LOOPS ARE USED
> THE OUTER LOOP COUNTS THE NO. OF ROWS
> THE INNER LOOP FOCUSES ON THE COLUMNS AND CONNECT THEM SOMEHOW TO THE ROWS
> PRINT THEM '*' INSIDE THE INNER FOR LOOP
> OBSERVE SYMMETRY [OPTIONAL.. THIS WILL BE APPLICABLE IN SOME PATTERNS ONLY]
*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}