#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int y = 0; y > -n; y--)
    {
        for(int x = 0; x < n; x++)
        {
            if (x - y < n)
            {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
