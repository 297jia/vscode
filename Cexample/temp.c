#include <stdio.h>
void main(){
    int x,y,z;
    int temp;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){temp=y,y=x,x=temp;}
    if(x>z){temp=z,z=x,x=temp;}
    if(y>z){temp=z,z=y,y=temp;}
    printf("%d %d %d",z,y,x);
}