#include <iostream>

using namespace std;

// �޸� 4���� 10�� �ݺ��ϴ°�
// Array = �޸𸮿� ������ �����ϰ� �ϴ°�
int main()
{
   
    float color = 0;
    float color = 0;
    int Apple = 0;
    int Goblin = 0;
    char Alphabet = 'A';
    bool condition = true; //�𸮾󿡼��� bool�Ⱦ��� �ٸ��� ���ٰ� ��.
    bool IsFinish = false;
    bool IsRunning = true;


    //Ư�� Ű�� ������ ����
    char Key = 0;
    for (; IsRunning;)
    {
        cin >> Key;
        if (Key == 'Q')
        {
            IsRunning = false;
        }
        cout << "�ݰ���" << endl;
    }
    return 0;
}
