// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

// if we subtract every value from four then we get

// 0: 0000000
// 1: 0111110
// 2: 0122210
// 3: 0123210
// 4: 0122210
// 5: 0111110
// 6: 0000000

// in the above pattern,each element is its position's minimum distance among its distance from top,bottom,left and right..again subtracting aabove values from 4,we will get the orginal pattern->4-(4-value)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            int top = i;
            int left = j;
            int right = 6 - j;
            int bottom = 6 - i;
            cout << (4 - min(min(top, bottom), min(left, right))); // min function takes only 2 values
        }
        cout << endl;
    }
    return 0;
}