#include <iostream>
#include <time.h>
using namespace std;
#define GOAL 250
int main() 
{
    srand(time(NULL));
    int cash = 50, bets = 0, win = 0;
    cout << "�ʱ� �ݾ�: $" << cash << endl;
    cout << "��ǥ �ݾ�: $" << GOAL << endl;
    while (1) 
    {
        bets++;
        if ((double)rand() / RAND_MAX < 0.5)
        {
            win++;
            cash++;
        }
        else
        {
            cash--;
        }
        if (cash == 0 || cash == GOAL)
        {
            break;
        }
    }
    cout << bets << " ���� " << win << "�� �¸�" << endl;
    cout << "�̱� Ȯ�� = " << (double)win / (double)bets << endl;
    return 0;
}