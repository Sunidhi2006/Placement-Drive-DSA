class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int arr[n];
        int brr[n];
        int mini[n];

        int previous_max = height[0];
        int next_max = height[n-1];
        arr[0] = -1;
        brr[n-1] = -1;

        //previous greatest array
        for(int i=1;i<n;i++){
            arr[i] = previous_max;
                if(previous_max < height[i]){
                    previous_max = height[i];
                }
        }
        //next greatest array
        for(int i=(n-2);i>=0;i--){
            brr[i] = next_max;
                if(next_max < height[i]){
                    next_max = height[i];
                }
        }
        //minimum array
        for(int i=0;i<n;i++){
                mini[i] = min(arr[i],brr[i]);
        }

        //calculating total water
        int water = 0;
        for(int i=1;i<n-1;i++){
            if(mini[i]>height[i]){
            water = water + (mini[i]-height[i]);
            }
        }
        return water;
    }
};