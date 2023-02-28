#include <iostream>

using namespace std;

int main()
{
    string f0, f1, fn;
    int x = 2;
    f0 = "a";
    f1 = "b";
    cout << f0 << " " << f1 << " ";

    while (x <= 10)
    {
        fn = f1 + f0;
        f0 = f1;
        f1 = fn;
        x++;
        cout << fn << " ";
    }

    return 0;
}
