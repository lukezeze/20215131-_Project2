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
    cout << "������� �ֻ���: " << a << "+" << b << "=" << c << endl;

    if (c == 7 || c == 11)
    {
        cout << "����ڰ� �̰���ϴ�." << endl;
    }
    else if (c == 2 || c == 3 || c == 12)
    {
        cout << "����ڰ� �����ϴ�." << endl;
    }
    return 0;
}