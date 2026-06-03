#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int count=0,cand;
        for (int i=0;i<n;i++)
        {
            if(count==0)
            {
                cand=nums[i];
                count++;
            }
            else
            {
                if (cand==nums[i]){count++;}
                else {count--;}
            }
        }
        return cand;
    }
};
int main ()
{
    Solution s;
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout<<"Enter the elements: ";
    for (int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    cout << "The majority element is: " << s.majorityElement(nums) << endl;
    return 0;
}