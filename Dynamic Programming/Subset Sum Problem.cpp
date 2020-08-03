//Subset Sum Problem
//By Aryan Grover(@aryang23)
for(int i=0;i<n;i++)
{
    for(int j=0;<n;j++)
    {
        if(i==0)
        t[i][j]=false;
        else if(j==0)
        t[i][j]=true;
        if(arr[i-1]<=j)
        {
            t[i][j]=(t[i-1][j]-arr[i-1][j-arr[i-1]] or t[i-1][j]);
        }
        else
        t[i][j]=t[i-1][j];
        }
}
