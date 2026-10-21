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
        ll size, px, py, qx, qy, mx = INT_MIN, sum = 0;
        cin >> size >> px >> py >> qx >> qy;
        vector<ll> vec(size);
        for (ll &x : vec) cin >> x, sum += x, mx = max(x, mx);

        ll dx = px - qx;
        ll dy = py - qy;
        ll d = sqrt(dx * dx + dy * dy);
        mx = max(d, mx);
        sum += d;
        cout << (mx > sum - mx ? "No" : "Yes") << endl;
    }

    return 0;
}