#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int> nums = {3,2,4};
    int target = 6;
    vector<int> arr;
    bool flag =false;
    for (int i=0;i<nums.size();i++)
    {
        for (int j=i+1;j<nums.size();j++)
        {
            if (nums[i]+nums[j]==target)
            {
                arr.push_back(i);
                arr.push_back(j);
                flag = true;
                break;
            }
        }
        if(flag==true) break;
    }
    for(int k:arr)
    {
        cout<<k<<" ";
    }
}