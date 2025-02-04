class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int beg=0;
        int end=nums.size()-1;
        int mid=beg+(end-beg)/2;
        while(beg<end){
            if(nums[mid]<nums[mid+1]){
                beg=mid+1;
            }
            else{
                end=mid;
            }
            mid=beg+(end-beg)/2;

        }
        return beg;
    }
};