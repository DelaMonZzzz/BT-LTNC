#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    int _max = a[0], _min = a[0];
    for (int i = 1; i < n; i++)
    {
        _max = max(_max, a[i]);
        _min = min(_min, a[i]);
    }
    cout << "Mean: " << 1.0*sum/n << endl
         << "Max: " << _max << endl
         << "Min: " << _min << endl;

    return 0;
}
