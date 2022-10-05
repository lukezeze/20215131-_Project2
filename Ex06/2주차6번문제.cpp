#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string s1;
    int a = 0, b = 0, c = 0;
    cout << "암호를 입력하시오: ";
    getline(cin, s1);
    for (int i = 0; i < s1.size(); i++) 
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            a++;
        }
        else if (s1[i] >= 'A' && s1[i] <= 'Z')
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    if (a == 0 || b == 0 || c == 0)
    {
        cout << "안전하지 않습니다." << endl;
    }
    else 
    {
        cout << "안전합니다." << endl;
        }
    return 0;
}