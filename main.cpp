//ЛР2
#include <iostream>

using namespace std;

int main() {
    int a[100], n, max = 0, j = 0, x, m = 0;
    cout << "n?";
    cin >> n;
    int newa[n*2];
    cout << "x?";
    cin >> x;
    cout << "Array";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max) max = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        newa[j] = a[i];
        if (a[i] == max)
        {
            newa[j + 1] = x;
            j = j + 2;
            m = m + 2;
        }
        else
        {
            j = j + 1;
            m = m + 1;
        }
    }
    for (int i = 0; i < m; i++)
        cout << newa[i];
    return 0;
}