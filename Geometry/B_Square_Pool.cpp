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
        ll n, s, dx, dy, xi, yi, ans = 0;
        cin >> n >> s;
        while (n--)
        {
            cin >> dx >> dy >> xi >> yi;
            ans += dx == dy ? xi == yi : xi + yi == s;
        }
        cout << ans << endl;
    }

    return 0;
}