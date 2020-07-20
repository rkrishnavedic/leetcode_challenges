class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int mask=1;
        for(int i=31;i>=0;i--){
            int digit=0;
            for(int j=0;j<nums.size();j++){
               if((mask<<i)&nums[j]){
                   digit=(digit+1)%3;
               }
            }
            ans=ans<<1;
            if(digit==1){
                
                ans+=1;
            }
        }
        return ans;
    }
};
