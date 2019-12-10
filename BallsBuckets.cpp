#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{
    int n=3;
    int m=3;
    int a[]= {-1,1,2,3}; //第i个桶容量a[i],桶0不存在
    int dp[4][4];
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
        {
            if(j==0)
            {
                dp[i][j]=1;//如果没有球，只有一种方法，所有桶为空。（0个桶的时候0个球有1种方法，0个桶有1个球的时候方法为0）
                continue;
            }
            if(i==0)
            {
                dp[i][j]=0;
                continue;//如果没有桶，但是却需要放球，方法数为0
            }
            int t=j<a[i]?j:a[i];
            if(j-t-1<0)
                dp[i][j]=dp[i][j-1]-0+dp[i-1][j];//dp[i-1][j-t-1]为0,因为没有方法可以在桶里放入负数个球
            else
                dp[i][j]=dp[i][j-1]-dp[i-1][j-t-1]+dp[i-1][j];
        }
    cout<<dp[m][n]<<endl;
    return 0;
}
