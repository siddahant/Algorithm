class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
       if(mat==target)
            return true;
        
        //rotate only 4 times
        for(int i=0;i<4;i++) 
        {
            //step 1: reverse mat
            reverse(mat.begin(),mat.end()); 
            
            //step 2: swap symmetry
            for(int i=0;i<mat.size();i++){
                for(int j=i+1;j<mat[i].size();j++)
                    swap(mat[i][j],mat[j][i]);
            }
            
            //compare if it is equal
            if(mat==target)
                return true;
        }
        return false;
    }
};