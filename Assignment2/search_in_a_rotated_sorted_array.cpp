class Solution {
public:
    int pivotIndex(vector<int>nums){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid]<nums[mid-1]){
                return mid-1;
            }
            if(nums[mid]<nums[mid+1]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return mid-1;
    }
    int search(vector<int>& nums, int target) {
        return pivotIndex(nums);
    }
};