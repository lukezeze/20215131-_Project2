#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	string s2;
	cout << "ù ��° ���ڿ�:";
	getline(cin, s1);
	cout << "�� ��° ���ڿ�:";
	getline(cin, s2);
	if (s1 == s2)
	{
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	}
	else
	{
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;
	}

	return 0;
}