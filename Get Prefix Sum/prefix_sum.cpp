#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> vr(n);
    vr[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        vr[i] = vr[i - 1] + v[i];
    }

    reverse(vr.begin(), vr.end());
    for (int i = 0; i < n; i++)
    {
        cout << vr[i] << " ";
    }
    return 0;
}