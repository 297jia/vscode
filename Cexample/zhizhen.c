#include <stdio.h>
int main(){
    int  a, *p1,  *p2;
	p1=&a;
	p2=p1;
	*p1 =3;
	printf("%d",*p2);

}
