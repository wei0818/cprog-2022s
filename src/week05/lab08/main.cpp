#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cout << "Enter an integer (n) : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << setw(4) << i << " *********" << endl;
    }
    cout << endl;

    return 0;
}