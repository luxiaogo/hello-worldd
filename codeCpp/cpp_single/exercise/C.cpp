#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,j,temp;
    cout << "请输入十个数：" << endl;
    for(i=0;i<10;i++)
    cin >> arr[i];
    for(i=0;i<10;i++)
    for(j=i+1;j<10;j++)
    if(arr[j]>arr[i])
    {temp=arr[j];arr[j]=arr[i];arr[i]=temp;}
    for(i=0;i<10;i++)
    cout << arr[i] << " ";
    system("pause");
    return 0;
}