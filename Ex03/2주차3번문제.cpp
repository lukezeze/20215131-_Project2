#include <iostream>
#include <time.h>
using namespace std;
#define GOAL 250
int main() 
{
    srand(time(NULL));
    int cash = 50, bets = 0, win = 0;
    cout << "초기 금액: $" << cash << endl;
    cout << "목표 금액: $" << GOAL << endl;
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
    cout << bets << " 중의 " << win << "번 승리" << endl;
    cout << "이긴 확률 = " << (double)win / (double)bets << endl;
    return 0;
}