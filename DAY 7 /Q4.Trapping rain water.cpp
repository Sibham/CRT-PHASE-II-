class Solution {
public:
    int trap(vector<int>& arr) {
        int n =arr.size();
        vector<int>left(n);
        vector<int>right(n);
        int leftmax=arr[0];
        int rightmax=arr[n-1];
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            left[i]=leftmax;
            leftmax=max(leftmax,arr[i]);
        }
          for(int i=n-2;i>=0;i--)
        {
              right[i]=rightmax;
              rightmax=max(rightmax,arr[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(left[i]>arr[i]&&right[i]>arr[i])
            {
               ans+=min(left[i],right[i])-arr[i]; 
            }
        }
        return ans;
    }
};
