#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int n, m;
    string q1, q2, q3, q4, s;
    q1 = "NE";
    q2 = "NO";
    q3 = "SO";
    q4 = "SE";
    s = "divisa";
    while (k != 0)
    {
        cin >> n >> m;
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x > n && y > m)
            {
                cout << q1 << endl;
            }
            if (x < n && y > m)
            {
                cout << q2 << endl;
            }
            if (x < n && y < m)
            {
                cout << q3 << endl;
            }
            if (x > n && y < m)
            {
                cout << q4 << endl;
            }
            if (x == n || y == m)
            {
                cout << s << endl;
            }
        }
        cin >> k;
    }
}