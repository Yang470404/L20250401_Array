#include <iostream>

using namespace std;

// 메모리 4개씩 10개 반복하는거
// Array = 메모리에 여러개 선언하게 하는거
int main()
{
   
    float color = 0;
    float color = 0;
    int Apple = 0;
    int Goblin = 0;
    char Alphabet = 'A';
    bool condition = true; //언리얼에서는 bool안쓰고 다른거 쓴다고 함.
    bool IsFinish = false;
    bool IsRunning = true;


    //특정 키를 누르면 종료
    char Key = 0;
    for (; IsRunning;)
    {
        cin >> Key;
        if (Key == 'Q')
        {
            IsRunning = false;
        }
        cout << "반가워" << endl;
    }
    return 0;
}
