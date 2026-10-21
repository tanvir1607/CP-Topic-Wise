#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int x, y, r;
        cin >> x >> y >> r;
        cout << x - r << " " << y << endl;
        // cout << x - r << " " << y << endl;
        // cout << x << " " << y - r << endl;
        // cout << x << " " << y + r << endl;
    }

    return 0;
}