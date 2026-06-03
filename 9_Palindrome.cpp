#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int a=x;
    int y=0,dig;
    while (x>0)
    {
        dig=x%10; 
        y = y*10; 
        y = y+dig; 
        x = x/10;
    }
    bool flag = false;
    if (a==y)
    {
        flag=true;
    }
    cout<<flag;
}