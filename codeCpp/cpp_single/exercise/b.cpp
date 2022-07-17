#include<iostream>
using namespace std;
#include<ctime>
//这是一个猜随机数的游戏
int main()
{
    srand((unsigned int)time(NULL));
    int num = rand() % 100 + 1;
    int val,i;
    for(i=1;i<5;i++)
    {
        cin >> val;
        cout << "这是第some次尝试" << endl;
        if(val>num) cout << " 猜测数字过大 " << endl;
        else if(val<num) cout << "猜测数字过小" << endl;
        else {cout << "答对了！" << endl;break;}
    }
    cout << "游戏结束" << endl;
    system("pause");
    return 0;
}
