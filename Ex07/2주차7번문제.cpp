#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "�� ���� ������ �Է��մϱ�?";
	cin >> num;
	int* ptr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << "������ �Է��Ͻÿ� :";
		cin >> ptr[i];
	}
	cout << "�Էµ� ������ :";
	for (int i = 0; i < num; i++)
	{
		cout << ptr[i] << ", ";
	}
	cout << endl;
	delete ptr;
	return 0;
}