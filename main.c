#include <stdio.h>
#include "my_mat.h"


int main(){
    int arr[10][10];
    int flag=1;
    char c;
    
while(flag==1)
{
    scanf("%c",&c);
switch (c)
{
case 'A':

    domatA(arr);
    
    break;

case 'B':
{

int i,j;
scanf("%d %d",&i,&j);
getidxB(i,j,arr);
    break;
}
case 'C':
int i,j;
scanf("%d %d",&i,&j);
shortestC(i,j,arr);
    break;

case 'D':
    flag=0;

}
}

return 0;

}








