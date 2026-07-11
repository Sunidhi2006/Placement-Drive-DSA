class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int minr = 0;
        int maxr = m-1;
        int minc = 0;
        int maxc = n-1;
        int count = 0;
        int tne = m*n;
        vector<int>v;
        while(minr<=maxr && minc<=maxc ){
            for(int i=minc;i<=maxc && count<(tne);i++){
                v.push_back(matrix[minr][i]);
                            count++;
            }
            minr++;

            for(int j=minr;j<=maxr && count<(tne);j++){
                v.push_back(matrix[j][maxc]);
                            count++;
            }
            maxc--;

            for(int k=maxc;k>=minc && count<(tne);k--){
                v.push_back(matrix[maxr][k]);
                            count++;
            }
            maxr--;

            for(int l=maxr;l>=minr && count<(tne);l--){
                v.push_back(matrix[l][minc]);
                            count++;
            }
            minc++;
        }
        return v;
    }
};