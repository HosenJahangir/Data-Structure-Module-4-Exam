#include <bits/stdc++.h>
using namespace std;

int main()
{
    // SOLUTION ONE:
    /* int N;
     cin >> N;
     int i = 0;
     while (i < N)
     {
         int j = 0;
         while (j < N)
         {
             if (i == N / 2 && j == N / 2)
             {
                 cout << "X";
             }
             else if (i == j)
             {
                 cout << "\\";
             }
             else if (i + j == N - 1)
             {
                 cout << "/";
             }
             else
             {
                 cout << " ";
             }
             j++;
         }
         cout << endl;
         i++;
     }*/
    // SOLUTION TWO.
    int N;
    cin >> N;
    int outerSpace = 0;
    int innerSpace = N - 2;
    int j = 0;
    // Main loop which will handle rows
    for (int i = 0; i < N; i++)
    {
        if (i == N / 2)
        {
            j = 0;
            while (j < outerSpace)
            {
                cout << " ";
                j++;
            }
            cout << "X";
            j = 0;
            while (j < outerSpace)
            {
                cout << " ";
                j++;
            }
            outerSpace--;
            innerSpace += 2;
        }
        else if (i < N / 2)
        {
            j = 0;
            while (j < outerSpace)
            {
                cout << " ";
                j++;
            }
            cout << "\\";
            j = 0;
            while (j < innerSpace)
            {
                cout << " ";
                j++;
            }
            cout << "/";
            j = 0;
            while (j < outerSpace)
            {
                cout << " ";
                j++;
            }
            outerSpace++;
            innerSpace -= 2;
        }
        else
        {
            j = 0;
            while (j < outerSpace)
            {
                cout << " ";
                j++;
            }
            cout << "/";
            j = 0;
            while (j < innerSpace)
            {
                cout << " ";
                j++;
            }
            cout << "\\";
            j = 0;
            while (j < outerSpace)
            {
                cout << " ";
                j++;
            }
            outerSpace--;
            innerSpace += 2;
        }
        cout << endl;
    }
    return 0;
}
