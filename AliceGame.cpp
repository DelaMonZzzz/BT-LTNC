#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n > 50) {
            cout << "This one" << endl;
        } else if (n < 50) {
            cout << "The other one" << endl;
        } else {
            break;
        }
    }

    return 0;
}
