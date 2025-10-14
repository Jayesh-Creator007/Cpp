#include <iostream>
using namespace std;



int main()
{
    int t,h,m,s;
    cout << "Enter the time in seconds:";
    cin >> t;
    h = t / 3600;
    m = (t % 3600) / 60;
    s = t % 60;
    cout<< "H:M:S"<<endl;
    cout << h << ":" << m << ":" << s;
    return 0;
}
