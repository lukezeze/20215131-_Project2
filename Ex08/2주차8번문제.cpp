#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num;
	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�?";
	cin >> num;
	string* ptr = new string[num];
	for (int i = 0; i < num; i++)
	{
		cout << "�̸� �Է� #"<<(i+1)<<":";
		cin >> ptr[i];
	}
	cout << "������ �̸� ����Դϴ�."<<endl;
	for (int i = 0; i < num; i++)
	{
		cout <<"�̸� #"<<(i+1)<< ":" << ptr[i] << endl;
	}
	delete ptr;
	return 0;
}