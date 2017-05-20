#include <stdio.h>
int main(void)
{
	int s,e,d,g;

	printf("Start from (cm) :");
	scanf("%d",&s);
	printf("End at (cm) :");
	scanf("%d",&e);
	printf("delta (cm) :");
	scanf("%d",&d);

	for(s;s<=e;s+=5){
		g=(s-80)*0.7;
	    printf("%dcm    %dkg \n",s,g);
	}

    return 0;
}