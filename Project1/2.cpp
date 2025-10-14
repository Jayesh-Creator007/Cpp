#include <iostream>
using namespace std;

int main()
{
    int t, h, m, s;
    cout << "Enter hours:";
    cin >> h;
    cout << "Enter minutes:";
    cin >> m;
    cout << "Enter seconds:";
    cin >> s;
    t = h * 3600 + m * 60 + s;
    cout << "Total time in seconds is " << t;
    return 0;
}
