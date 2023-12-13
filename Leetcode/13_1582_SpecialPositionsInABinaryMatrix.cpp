class Solution {
public:
    int checkRow(vector<vector<int>> &mat, int i){
        int idx = -1;
        for(int j=0; j<mat[0].size(); j++){
            if(mat[i][j] == 1){
                if(idx >= 0){
                    return -1;
                }
                else{
                    idx = j;
                }
            }
        }
        return idx;
    }

    bool checkCol(vector<vector<int>> &mat, int i, int colIdx){
        for(int j=0; j<mat.size(); j++){
            if(mat[j][colIdx] == 1 && j != i){
                return false;
            }
        }
        return true;
    }
    
    int numSpecial(vector<vector<int>>& mat) {
        int row = mat.size(), col = mat[0].size();
        int special = 0;

        for(int i=0; i<row; i++){
            int idx = checkRow(mat, i);
            if(idx >= 0 && checkCol(mat, i, idx)){
                special++;
            }
        }
        return special;
    }
};
