#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num;
	cout << "얼마나 많은 이름을 입력 하시겠습니까?";
	cin >> num;
	string* ptr = new string[num];
	for (int i = 0; i < num; i++)
	{
		cout << "이름 입력 #"<<(i+1)<<":";
		cin >> ptr[i];
	}
	cout << "다음은 이름 목록입니다."<<endl;
	for (int i = 0; i < num; i++)
	{
		cout <<"이름 #"<<(i+1)<< ":" << ptr[i] << endl;
	}
	delete ptr;
	return 0;
}