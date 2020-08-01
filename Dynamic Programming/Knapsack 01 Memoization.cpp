//By Aryan Grover (@aryang23)
//Knapsack 01
int knapsack(int wt[],int val[],int w,int n)
{
    if(n==0 or w==0)
    return 0;
    if(t[n][w]!=-1)
    return t[n][w];
    if(wt[n-1]<=w)
    return t[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    else if(wt[n-1]>w)
    return t[n][w]=knapsack(wt,val,w,n-1);
}
