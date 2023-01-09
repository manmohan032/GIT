// C++ program to return the number of
// square submatrices with all 1s
#include <bits/stdc++.h>
using namespace std;

 
// Function to return the number of
// square submatrices with all 1s
 
// Driver code
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int N,M;cin>>N;
        M=N;
        int count = 0;
        int a[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin>>a[i][j];
        }
    }
    for(int k =1;k<N;k++)
    {
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            // If a[i][j] is equal to 0
            if (a[i][j] == 0)
                continue;
 
            // Calculate number of
            // square submatrices
            // ending at (i, j)
            a[i][j] = min(min(a[i - 1][j],
                              a[i][j - 1]),
                          a[i - 1][j - 1])
                      + 1;
        }
    }
    }
 
    // Calculate the sum of the array
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            count += a[i][j];
    
    
        cout <<count<<endl;
    }
    return 0;
}