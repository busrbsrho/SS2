#include "my_mat.h"
#include <stdio.h>

int min(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    return b;
}

void domatA(int arr[SIZE][SIZE])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {  
           scanf("%d",&arr[i][j]);
           
           
        }
    
        
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {  
            if(arr[i][j]==0&&i!=j)
            {
                arr[i][j]=INF;
            }   
           
        }
    
        
    }
    for(int k=0; k<10; k++)
    {
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
               arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
            }
        }
    }
}

void getidxB(int i, int j,int arr[SIZE][SIZE])
{
    
    if((arr[i][j]>0)&&(arr[i][j]<INF))
{
    printf("True\n");
}
else
{
    printf("False\n");
}

}

void shortestC(int i, int j,int arr[SIZE][SIZE])
    { 
        int k;
        k=arr[i][j];
        
        if(k==INF || k==0)
        {
            printf("%d\n",-1);
        }
        else{
            printf("%d\n",k);
        }
    }
