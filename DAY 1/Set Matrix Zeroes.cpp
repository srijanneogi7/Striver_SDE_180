// NAIVE 
class Solution {
public:
    void setZeroes(vector<vector<int>>&arr) {
        vector<vector<int>>loc;
        const int m=arr.size();
        const int n=arr[0].size();
        
        vector<bool>row(m);
        vector<bool>col(n);
        
        for(int i=0;i<m;++i){
            for(int j=0;j<n;j++){
                if(arr[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i] || col[j]){
                    arr[i][j]=0;
                }
            }
        }
        
    }
};

//
