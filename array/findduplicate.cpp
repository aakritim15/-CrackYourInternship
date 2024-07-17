class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        int l=1,h=n;
        while (l<h){
            int mid=l+(h-l)/2;
            int c=0;
            for (int a:nums){
                if (a<=mid)
                    c++;
            }
            if (c>mid)
                h=mid;
            else
                l=mid+1;
        }
        return l;
    }
};