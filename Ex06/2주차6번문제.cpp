#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string s1;
    int a = 0, b = 0, c = 0;
    cout << "��ȣ�� �Է��Ͻÿ�: ";
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
        cout << "�������� �ʽ��ϴ�." << endl;
    }
    else 
    {
        cout << "�����մϴ�." << endl;
        }
    return 0;
}