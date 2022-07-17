#include<iostream>
using namespace std;
int in[6]={3,2,4,1,6,5};
int post[6]={3,4,2,6,5,1};
void pre(int root,int start,int end)
{
    if(start>end)return;
    int i=start;
    while(i<end && in[i]!=post[root])i++;
    cout << post[root];
    pre(root-end+i-1,start,i-1);
    pre(root-1,i+1,end);
}
int main()
{
    pre(5,0,5);
}