#include <iostream>
using namespace std;

int main()
{
    int t, n, j = 0, k = 0;
    cin >> t;
    while (j < t)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 == 0)
            cout << "no" << endl;
        else if (a[0] != 1 || a[n - 1] != 1)
            cout << "no" << endl;
        else
        {
            for (int i = n / 2; i > 0; i--)
            {
                if (a[i] - a[i - 1] != 1)
                    k = 1;
            }
            if (k == 1)
            {
                cout << "no" << endl;
            }
            else
            {
                for (int i = n / 2; i < n - 1; i++)
                {
                    if (a[i] - a[i + 1] != 1)
                        k = 1;
                }
                if (k == 1)
                {
                    cout << "no" << endl;
                }
                else
                    cout << "yes" << endl;
            }
        }
        k = 0;
        j++;
    }
    return 0;
}
