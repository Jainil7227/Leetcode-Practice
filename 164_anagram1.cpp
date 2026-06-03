#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n=nums.size();
        int ans=nums[0];
        unordered_map<int,int> freq;
        for (int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for (auto x : freq)
        {
            if (x.second>n/2) return x.first;
        }
        return 0;
    }
};
int main()
{
    vector<int> nums={2,2,1,1,1,2,2};
    Solution s;
    cout<<s.majorityElement(nums)<<endl;
    return 0;
}