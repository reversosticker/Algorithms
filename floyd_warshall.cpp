//implementation of floyd_warshall algo in cpp
    for(int k=1;k<A.size()+1;k++)
    {
        for(int i=1;i<A.size()+1;i++)
         {
             for(int j=1;j<A.size()+1;j++)
             {
                 if(m[i][k]!=INT_MAX and m[k][j]!=INT_MAX and  m[i][j] > m[i][k]+m[k][j])
                     m[i][j] = m[i][k]+m[k][j];
             }
         }
    }
