#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
    int i;

    cout << "Element" << setw(13) << "Value" << endl;

    for (i = 0; i < 10; i++)
    {
        cout << setw(7) << i << setw(13) << n[i] << endl;
    }

    system("pause");
    return 0;
}