class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0,mid=0,e=size(nums)-1;
        while(mid<=e) {
            if (nums[mid]==0){
                swap(nums[mid],nums[s]);
                s++;
                mid++;
            } else if (nums[mid]==1){
                mid++;
            } else {
                swap(nums[mid],nums[e]);
                e--;
            }
        }
    }
};
// else count 0,1,2 n run for loop placing them in array 