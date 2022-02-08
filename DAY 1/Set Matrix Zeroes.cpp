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

// Optimal
void setZeroes(vector<vector<int>>&arr) {
        int col=1;
        int m=arr.size(),n=arr[0].size();
        
        for(int i=0;i<m;i++){
            if(arr[i][0]==0) col=0;
            for(int j=1;j<n;j++){
                if(arr[i][j]==0)
                    arr[i][0]=arr[0][j]=0;
            }
        }
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=1;j--){
                if(arr[i][0]==0 ||arr[0][j]==0)
                    arr[i][j]=0;
            }
            if(col==0) arr[i][0]=0;
        }
    }
