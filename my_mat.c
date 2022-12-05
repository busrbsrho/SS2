#include "my_mat.h"
#define INF 99999;

int arr[10][10];

void fwa()
{
for(int k=0; k<10; k++)
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(arr[i][j]>arr[i][k]+arr[i][j])
            {
                arr[i][j]=arr[i][k]+arr[i][j];
                
            }
        }
    }
}

}

void getidx(int i, int j)
{
    fwa(arr);
    if((arr[i][j]>0)&&(arr[i][j]<99999))
{
    printf("True\n");
}
else
{
    printf("False\n");
}

}

void domat()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {  int a;
           sacnf("%d",a);
           if((i!=j)&&(a==0))
           {
            arr[i][j]=INF;
           }
            else
            {
            arr[i][j]=a; 
            }

           
        }
        
    }

    
    
    
}
void shortest(int i, int j)
    { 
        fwa(arr);
        int k;
        k=arr[i][j];
        printf("%d",k);
    }