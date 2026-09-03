class Solution {
public:

    bool Possible(vector<int>&time,long long mid,int totalTrips){
        long long sum = 0;
        for(int i=0;i<time.size();i++){
            sum += mid/time[i];
        }
        if(sum >= totalTrips){
            return true;
        }
        return false;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        int n = time.size();

        long long lo = 1;
        //calcu;ation for long long values and for finding minimum element in vector
        long long hi = 1ll * (*min_element(time.begin(),time.end())) * totalTrips;

        while(lo < hi){
            long long mid = lo+(hi-lo)/2;
            if(Possible(time,mid,totalTrips)){
                hi = mid;
            }
            else{
                lo = mid+1;
            }
        }
        return lo;
    }
};