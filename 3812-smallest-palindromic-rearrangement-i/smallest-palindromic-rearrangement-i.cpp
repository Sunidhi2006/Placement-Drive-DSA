class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int mid = n/2;
        sort(s.begin(),s.begin()+mid);
        int i=0;
        while(i<mid){
            s[n-1-i] = s[i];
            i++;
        }
        return s;
    }
};