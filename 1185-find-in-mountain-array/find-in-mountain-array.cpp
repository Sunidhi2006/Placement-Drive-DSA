/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int peakIdxArr(int lo,int hi,MountainArray &mountainArr){
        int peak_idx = -1;
        while(lo<hi){
            int mid = lo+(hi-lo)/2;
            if(mountainArr.get(mid) > mountainArr.get(mid+1) ){
                hi = mid;
                peak_idx = hi;
            }
            else{
                lo = mid+1;
            }
        }
        return peak_idx;
    }
    int binarySearch(int lo,int hi,int target,MountainArray &mountainArr){
        int idx = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(mountainArr.get(mid) == target){
                idx = mid;
                return idx;
            }
            else if(mountainArr.get(mid) < target){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        return idx;
    }
    int binarySearchTwo(int lo,int hi,int target,MountainArray &mountainArr){
        int idx = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(mountainArr.get(mid) == target){
                idx = mid;
                return idx;
            }
            else if(mountainArr.get(mid) > target){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        return idx;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {

        int n  = mountainArr.length();
        int lo = 0;
        int hi = n-1;
        int peak_idx = -1;
        peak_idx = peakIdxArr(0,n-1,mountainArr);


        int idx = -1;
        idx = binarySearch(0,peak_idx-1,target,mountainArr);

        if(idx!=-1){
            return idx;
        }
        idx = binarySearchTwo(peak_idx,n-1,target,mountainArr);
        return idx;
    }
};