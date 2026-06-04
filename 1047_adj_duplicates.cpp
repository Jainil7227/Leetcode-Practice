#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char> st;
        string ans="";
        for (char x : s)
        {
            if (st.empty()) {st.push(x);}
            else if (st.top()==x) {st.pop();}
            else st.push(x);
        } 
        while (!st.empty())
        {
            ans+= st.top();
            st.pop();
        }   
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
 
int main()
{
    Solution s;
    string str = "abbaca";
    cout << s.removeDuplicates(str) << endl;
    return 0;
}