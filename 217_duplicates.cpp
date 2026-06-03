#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        unordered_set<int> dup;
        int x=nums.size();
        for (int i=0;i<x;i++)
        {
            if (dup.find(nums[i]) != dup.end())
            {
                return true;
            }
            else dup.insert(nums[i]);
        }
        return false;
    }
};
int main()
{
    Solution s;
    vector<int> nums={1,2,3,1};
    cout<<s.containsDuplicate(nums)<<endl;
    return 0;
}