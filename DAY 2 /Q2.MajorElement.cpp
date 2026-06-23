class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=-1;
        for(int i = 0 ; i< nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp[nums[i]]++;
            }else{
                mp[nums[i]]=1;
            }
        }
        for(auto x:mp){
            if(x.second > nums.size()/2){
                ans=x.first;
            }
        }
        return ans;
    }
};
