#include <stdio.h>

int main(void) {
	int kabaliclanninjanum[10],opponentninjanum[10],n;
	scanf("%d",&n);
            printf("No of ninjas are %d\n",n);
	for(int i=1;i<=n;i++)
	scanf("%d%d",&kabaliclanninjanum[i],&opponentninjanum[i]);
	for(int i=1;i<=n;i++)
	{
		if(kabaliclanninjanum[i]<opponentninjanum[i])
		printf("%d\n",opponentninjanum[i]-kabaliclanninjanum[i]);
	}
	// your code goes here
	return 0;
}
