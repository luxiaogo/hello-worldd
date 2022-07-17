#include<iostream>
using namespace std;
class person
{
    public:
    person(int m_L,int m_W,int m_H)
    {
        L=m_L;
        W=m_W;
        H=m_H;
    }
    private:
    int L;
    int W;
    int H;
    public:
    int get_L()
    {
        return L;
    }
    int get_W()
    {
        return W;
    }
    int get_H()
    {
        return H;
    }
    bool compare(person &p)
    {
        if(L==p.get_L() && W==p.get_W() && H==p.get_H())
        return true;
        return false;
    }
};
int main()
{
    person p1(5,5,5);
    person p2(5,5,5);
    bool ret=p1.compare(p2);
    if (ret)
    cout <<"两个正方形是一样的" ;
}