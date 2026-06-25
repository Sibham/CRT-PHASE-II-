class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int first=-1;
        int second=-1;
        while(low<=high){
           int  mid = low + (high-low)/2;
            if(nums[mid]==target){
                first = mid;
                high = mid - 1; //isliye kyuki pahale bi toh ah sakta hai
            }else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        int s = 0;
        int e = nums.size()-1;
        while(s<=e){
           int  mid = s + (e-s)/2;
            if(nums[mid]==target){
                second = mid;
                 s = mid + 1; //last wala baadme bi toh aah sakta hai or right side hi hoga 
            }else if(nums[mid]<target){
                s = mid+1;
            }
            else{
                e = mid - 1;
            }
        }
        return {first , second};
    }
};
