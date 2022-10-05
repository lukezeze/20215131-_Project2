#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int a, b, c;
    a = rand() % 6 + 1;
    b = rand() % 6 + 1;
    c = a + b;
    cout << "사용자의 주사위: " << a << "+" << b << "=" << c << endl;

    if (c == 7 || c == 11)
    {
        cout << "사용자가 이겼습니다." << endl;
    }
    else if (c == 2 || c == 3 || c == 12)
    {
        cout << "사용자가 졌습니다." << endl;
    }
    return 0;
}