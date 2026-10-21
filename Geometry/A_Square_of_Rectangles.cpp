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
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;

        bool flag = false;
        if ((b1 == b2 && b1 == b3 && b1 == l1 + l2 + l3) 
            || (l1 == l2 && l1 == l3 && l1 == b1 + b2 + b3) 
            || (l2 == l3 && b1 == b2 + b3 && b1 == l1 + l2)
            || (b2 == b3 && l1 == l2 + l3 && l1 == b1 + b2)) flag = true;
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}