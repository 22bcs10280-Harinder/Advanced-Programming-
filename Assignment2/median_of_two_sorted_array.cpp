class Solution {
public:
   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double>arr;
        int i;
        double median;
        for(i=0; i<nums1.size(); i++){
            double ele=nums1[i];
            arr.push_back(ele);
        }
        for(int j=0; j<nums2.size(); j++){
            double ele=nums2[j];
            arr.push_back(ele);
        }
        sort(arr.begin(), arr.end());
        // cout<<arr.size();
        // return arr.size();
        for(int i=0; i<arr.size(); i++){
            cout<<arr[i]<<endl;
        }
        if(arr.size()%2!=0){
            median=arr[arr.size()/2];
            cout<<"The median of the array when no. of elements are : "<<median<<endl;
        }
        else{
            median=(arr[arr.size()/2]+arr[(arr.size()/2)-1])/2;
            cout<<"The median of array with even no of elements : "<<median<<endl;
        }
        return median;
    }
};