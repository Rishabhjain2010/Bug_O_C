#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int m1,n1,i,j;
    scanf("%d%d",&m1,&n1);
    if(m1>6||n1>6)
    exit(0);
    
    int ar1[m1][n1];
    for(i=0;i<m1;i++)
    for(j=0;j<n1;j++)
    scanf("%d",&ar1[i][j]);
    
    int m2,n2;
    scanf("%d",&m2);
    scanf("%d",&n2);
    if(m2>6||n2>6||n1!=m2)
    exit(0);
    
    int ar2[m2][n2];
    for(i=0;i<m2;i++)
    for(j=0;j<n2;j++)
    scanf("%d",&ar2[i][j]);
    
    int sum=0;
    printf("C=\n");
    for(i=0;i<m1;i++)
    {
        for(int k=0;k<n2;k++)
        {
            for(j=0;j<n1;j++)
            sum=sum+ar1[i][j]*ar2[j][k];
            
        printf("%d ",sum);
        sum=0;
        }
        printf("\n");
    }
    return 0;
    }
