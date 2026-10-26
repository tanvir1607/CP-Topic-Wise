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
        ll n;
        cin >> n;

        ll ans = 0, cnt = 0;
        for(ll b = 1; b <= n; b++)
        {
            cnt = n / b;
            ans += cnt * cnt;
        }
        cout << ans << endl;
    }

    return 0;
}