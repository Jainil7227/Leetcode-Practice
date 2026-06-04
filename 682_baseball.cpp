#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        int f_score = 0;
        vector<int> score;
        for (auto x : operations)
        {
            if (x == "+")
            {
                score.push_back(score[score.size()-1]+score[score.size()-2]);
            }
            else if (x == "D")
            {
                score.push_back(score.back()*2);
            }
            else if (x == "C")
            {
                score.pop_back();
            }
            else 
            {
                int a = stoi(x);
                score.push_back(a);
            }
        }
        for (int y : score)
        {
            f_score += y;
        }
        return f_score;
    }
};
int main()
{
    Solution s;
    vector<string> operations = {"5","2","C","D","+"};
    cout << s.calPoints(operations) << endl;
    return 0;
}