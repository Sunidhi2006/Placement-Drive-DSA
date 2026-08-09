class Solution {
public:
    int mySqrt(int x) {
        int lo = 0;
        int hi = x;

        while(lo <= hi){
            int mid = (lo+hi) / 2;
            long long m = (long long)mid;
            long long y = (long long)x;

            if(m*m == y) return m;
            else if((m*m) >  y){
                hi = m-1;
            }
            else{
                lo = m+1;
            }
        }
        return hi;
    }
};