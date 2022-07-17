#include<iostream>
using namespace std;
double PI=3.14;
class circle
{
    public:
    int r;
    double calculate()
    {
        return 2*PI*r;
    }
};
int main()
{
    circle c1;
    cout << "请输入圆的半径：" <<endl;
    cin >> c1.r;
    cout << "圆的周长为:" << c1.calculate() << endl;
}