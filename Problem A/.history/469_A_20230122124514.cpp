#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool all = true;
    cin >> n;
    int p, q;
    cin >> p;
    vector<int> a(p);
    for (int i = 0; i < p; i++)
        cin >> a[i];
    cin >> q;
    if ((p + q) != 0)
    {
        a.resize(p + q);
        for (int i = p; i < (q + p); i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        for (int i = 1; i < (p + q); i++)
        {
            if ((a[i] - a[i - 1]) == 1 || (a[i] - a[i - 1]) == 0)
            {
                continue;
            }
            else
            {
                all = false;
            }
        }

        if (n <= a[p + q - 1] && all)
            cout << "I become the guy.";
        else
            cout << "Oh, my keyboard!";
    }else{
        cout << "Oh, my keyboard!";
    }
}