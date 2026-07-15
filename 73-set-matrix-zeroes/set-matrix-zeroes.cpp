class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool flag_row = false;
        bool flag_column = false;

        for(int j=0;j<n;j++){
            if(matrix[0][j] == 0){
                flag_row = true;
                break;
            }                 
        }

        for(int i=0;i<m;i++){
            if(matrix[i][0] == 0){
                flag_column = true;
                break;
            }                 
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if( matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                } 
            }
        }

        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                } 
            }
        }

        if(flag_row == true){
        for(int j=0;j<n;j++){
            matrix[0][j] = 0 ;               
          }
        }

        if(flag_column == true){
        for(int i=0;i<m;i++){
            matrix[i][0] = 0 ;               
          }
        }
    }
};