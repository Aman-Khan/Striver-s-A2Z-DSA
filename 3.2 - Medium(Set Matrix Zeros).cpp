void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> rowWithZero(n, 1);
        vector<int> colWithZero(m, 1);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    rowWithZero[i]=0;
                    colWithZero[j]=0;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(rowWithZero[i]==0){
                for(int j=0; j<m; j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0; i<m; i++){
            if(colWithZero[i]==0){
                for(int j=0; j<n; j++){
                    matrix[j][i]=0;
                }
            }
        }
    }
