#include <iostream>      // 3 June 2026
#include <vector>
#include <unordered_map>
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
int main()
{
    vector<int> nums={2,2,1,1,1,2,2};
    Solution s;
    cout<<s.majorityElement(nums)<<endl;
    return 0;
}