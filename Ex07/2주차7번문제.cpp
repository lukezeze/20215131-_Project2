#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "몇 개의 정수를 입력합니까?";
	cin >> num;
	int* ptr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << "정수를 입력하시오 :";
		cin >> ptr[i];
	}
	cout << "입력된 정수는 :";
	for (int i = 0; i < num; i++)
	{
		cout << ptr[i] << ", ";
	}
	cout << endl;
	delete ptr;
	return 0;
}