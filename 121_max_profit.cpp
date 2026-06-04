#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n = prices.size();
        int min_p=prices[0];
        int profit = 0 ;
        for (int x : prices)
        {
            if (x<=min_p)
            {
                min_p = x;
            }
            else
            {
                if ((x-min_p)>profit)
                {
                    profit = x-min_p;
                }
            }
        }
        return profit;     
    }
};
int main()
{
    Solution s;
    vector<int> prices = {7,1,5,3,6,4};
    cout << s.maxProfit(prices) << endl;
    return 0;
}