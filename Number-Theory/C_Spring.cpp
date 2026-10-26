#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}

int main()
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        ll a, b, c, m;
        cin >> a >> b >> c >> m;

        ll A = m / a;
        ll B = m / b;
        ll C = m / c;
        ll AB = m / lcm(a, b);
        ll BC = m / lcm(b, c);
        ll AC = m / lcm(a, c);
        ll ABC = m / lcm(lcm(a, b), c);

        ll alice = 6*A - 3*(AB + AC) + 2*ABC;
        ll bob = 6*B - 3*(AB + BC) + 2*ABC;
        ll carol = 6*C - 3*(BC + AC) + 2*ABC;

        cout << alice << " " << bob << " " << carol << endl;
    }

    return 0;
}