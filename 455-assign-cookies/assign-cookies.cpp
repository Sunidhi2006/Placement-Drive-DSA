class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;
        int i = 0;
        int j = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i<g.size() && j<s.size()){
            if(g[i] <= s[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
        // int count = 0;
        // int i = g.size() -1;
        // int j = s.size() -1;
        // sort(g.begin(),g.end());
        // sort(s.begin(),s.end());
        // while(i>=0 && j>=0){
        //     if(g[i] <= s[j]){
        //         count++;
        //         i--;
        //         j--;
        //     }
        //     else{
        //         i--;
        //     }
        // }
        // return count;
    }
};