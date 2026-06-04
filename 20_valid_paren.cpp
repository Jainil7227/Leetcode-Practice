#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution {
public:
    bool isValid(string s) 
    {
        stack <char> st;
        for (char x : s)
        {
            if (x=='(' or x=='{' or x=='[') {st.push(x);}
            else
            {   
                if (st.empty()) {return false ;}
                else if (x==')')
                {
                    if (st.top()=='(') {st.pop();}
                    else return false;
                }
                else if (x==']')
                {
                    if (st.top()=='[') {st.pop();}
                    else return false;
                }
                else if (x=='}')
                {
                    if (st.top()=='{') {st.pop();}
                    else return false;
                }
                else return false;
            }    
        }
        if (st.empty()==true) return true;
        else return false;
    }
};

int main()
{
    Solution s;
    string str="(){}[]";
    if (s.isValid(str)) cout<<"The string is valid."<<endl;
    else cout<<"The string is not valid."<<endl;
    return 0;
}