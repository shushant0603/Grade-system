#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter marks:" << endl;
    cin >> m;
    if (m < 25)
    {
        cout << "fail";
    }
    else if (m > 25 && m <= 45)
    {
        cout << "Grade E";
    }
    else if (m > 45 && m <= 50)
    {
        cout << "Grade D";
    }
    else if (m > 50 && m <= 60)
    {
        cout << "Grade c";
    }
    else if (m > 60 && m <= 80)
    {
        cout << "Grade B";
    }
    else if (m >= 80)
    {
        cout << "Grade A";
    }

    return 0;
}