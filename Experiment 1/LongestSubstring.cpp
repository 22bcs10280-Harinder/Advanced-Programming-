class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n=s.size();

        if(n==0) return 0;
        if(n==1) return 1;
        int cnt=0;
        int max_cnt=INT_MIN;
        map<int,int> mpp;
        int start=0;


        for(int i=0; i<s.size(); i++){ 
            if(mpp.find(s[i])!=mpp.end() && mpp[s[i]]>=start){
                start=mpp[s[i]]+1;
            }
            mpp[s[i]]=i;
            
            max_cnt=max(max_cnt,i-start+1);
        }
        
        

        return max_cnt;
    }
};