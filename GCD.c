#include <stdio.h>

int main() {
              int n1,n2,n3;
              scanf("%d%d",&n1,&n2);
              for(int i=1;i<=1000;i++)
              {
              	if(n1%i==0&&n2%i==0)
              	n3=i;
              }
              printf("%d",n3);
              
	return 0;
}
