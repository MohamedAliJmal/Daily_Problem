#include <bits/stdc++.h>

using namespace std;

vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int> 
        for(int i{0};i<n;i++){
            for(int j{0};j<m;j++)
            {
                if(i==0 || i==n-1 || j==0 || j==m-1) cout<<matrix[i][j];
            }
        }
    }


int main()
{

    vector<vector<int>> m{{1,2,3},{4,5,6}};
    boundaryTraversal(m,2,3);
    return 0;


}