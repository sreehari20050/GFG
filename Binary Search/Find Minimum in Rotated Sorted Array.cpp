//Solution 1

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        for(int i = 1 ; i < n ; i++){
            if(ans > nums[i]){
                ans = nums[i];
            }
        }
        return ans;
    }
};

//Solution 2

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 ;
        int high = nums.size() - 1;
        int ans = INT_MAX ;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[low] <= nums[mid]){
                ans = min(ans,nums[low]);
                low = mid + 1;
            }
            else{
                ans = min(ans,nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};

//Solution 3 

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0 ;
        int high = nums.size() - 1;
        int ans = INT_MAX ;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[low] <= nums[high]){
               ans = min(ans,nums[low]);
               return ans;
            }
            if(nums[low] <= nums[mid]){
                ans = min(ans,nums[low]);
                low = mid + 1;
            }
            else{
                ans = min(ans,nums[mid]);
                high = mid - 1;
            }
        }
        return ans;
    }
};
