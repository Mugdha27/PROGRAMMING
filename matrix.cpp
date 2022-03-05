#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    cout << "The matrix is " << n << " x " << m << endl;
    int a[n][m];
    int i, j;
    cout << "The matrix elements are " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "The matrix is " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    bool flag = false;
    int k;
    cout << "Enter the element that you want to search " << endl;
    cin >> k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == k)
            {
                cout << i << " " << j << endl;
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}