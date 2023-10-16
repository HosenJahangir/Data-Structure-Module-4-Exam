#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int is_sorted = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                is_sorted = 0;
                break;
            }
        }

        if (is_sorted == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}