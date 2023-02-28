#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << abs(1.0*(a-b))/2 + 1.0*(a+b)/2;

    return 0;
}
