class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    //transpose
    for(int i=0;i<=(n-1);i++){
      for(int j=i+1;j<=(n-1);j++){
        swap(matrix[i][j],matrix[j][i]);
      }
    }
  
    //rotate
    for(int i=0;i<=(n-1);i++){
        int j=0;
        int k=(n-1);
        while(j<=k){
            swap(matrix[i][j],matrix[i][k]);
            k--;
            j++;
        }
    }
    
    }
};