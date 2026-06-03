#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) 
    {
        unordered_map<char,int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        int ans=0;
        int cur,lar=0;
        int x = s.size();
        for (int i =x-1;i>=0;i--)
        {
            cur = roman[s[i]];
            if (cur>=lar)
            {
                lar = cur;
                ans += cur;
            }
            else 
            {
                ans-= cur;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    string str;
    cout<<"Enter a Roman numeral: ";
    cin >> str;
    cout << s.romanToInt(str) << endl;
    return 0;
}