/*
Fill The Grid
*/
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
set<int> st;
map<int, int> mp;
list<int> ls;
vector<int> vec;
int maxi = INT_MIN;
int mini = INT_MAX;
int32_t main()
{
    int cases = 1;
    cin >> cases;
    while (cases--)
    {
        int x, y;
        cin >> x >> y;
        if (x % 2 == 0 && y % 2 == 0)
            cout << 0 << endl;
        else if (x % 2 != 0 && y % 2 != 0)
            cout << x + y - 1 << endl;
        else if (x % 2 == 0 && y % 2 != 0)
            cout << x << endl;
        else
            cout << y << endl;
    }
    return 0;
}