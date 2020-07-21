//To prove the problem we use PigeonHole Principle

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int x;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            x=nums[i]%(n+1);
            nums[x-1]+=n+1;
        }
        int ans=0;
        x=1;
        for(int i=0;i<n;i++){
            if(nums[i]/(n+1) > ans){
                ans=nums[i]/(n+1);
                x=i+1;
            }
        }
        return x;
    }
};
