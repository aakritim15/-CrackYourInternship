class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if (n==0) return 0;
        int mn=INT_MAX;
        int mx=0;
        for (int i=0;i<n;++i){
            if (prices[i]<mn)
                mn=prices[i];
            else if (prices[i]-mn>mx) 
                mx=prices[i]-mn;
        }
        return mx;
    }
};