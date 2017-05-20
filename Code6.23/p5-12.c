#include <stdio.h>
int main(void)
{
	int x,i,j;
	int tensu1[4][3]={{91,63,78},{67,72,46},{89,34,53},{32,54,34}};
	int tensu2[4][3]={{97,67,82},{73,43,46},{97,56,21},{85,46,35}};
	int sum[4][3];
	int all[2][4][3];

	/*放到三维数组*/
	for(x=0;x<2;x++){
		for(i=0;i<4;i++){
			for(j=0;j<3;j++){
				if(x==0)
					all[x][i][j]=tensu1[i][j];
				else if(x==1)
					all[x][i][j]=tensu2[i][j];
			}
		}
	}

	return 0;

}