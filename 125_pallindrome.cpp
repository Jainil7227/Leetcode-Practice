#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) 
    {
        string t = "";
        for (char x:s )
        {
            if (isalnum(x))
            {
                t+= tolower(x);
            }
        }
        int high = t.length()-1;
        int low = 0;
        while (low<high)
        {
            if (t[low] != t[high]){return false;}
            high --;
            low++;
        }
        return true;
    }
};
int main()
{
    Solution s;
    string str = "A man, a plan, a canal: Panama";
    return 0;
}