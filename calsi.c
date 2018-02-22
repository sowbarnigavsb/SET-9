#include <stdio.h>

int main(void) {
              int num1,num2;
              char s;
              scanf("%d%c%d",&num1,&s,&num2);
              switch (s)
              {
              case '/':
            	printf("%d",num1/num2);
            	break;
              case '%':
            	printf("%d",num1%num2);
            	break;
	}
	// your code goes here
	return 0;
}
