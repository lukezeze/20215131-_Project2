#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    cout << "반지를을 입력하시오: ";
    cin >> radius;
    double a;
    a = 4.0 / 3.0 * 3.14 * radius;
    cout << "구의 부피는 " << a<< endl;
    return 0;
}