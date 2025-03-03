#include<stdio.h>

void main(){
  int no_ps;

  printf("Enter no. of processes: ");
  scanf("%d",&no_ps);

  int atbt[no_ps][5];

  printf("Enter arrival time for processes: ");
  for(int i=0;i<no_ps;i++)
	  scanf("%d",&atbt[i][0]);

  printf("Enter burst time for processes: ");
  for(int i=0;i<no_ps;i++)
	  scanf("%d",&atbt[i][1]);

  int temp1, temp2;

  for(int i=0;i<no_ps-1;i++){
	  for(int j=0;j<no_ps-i-1;j++){
		  if(atbt[j][0] > atbt[j+1][0]){
			  temp1 = atbt[j][0];
			  atbt[j][0] = atbt[j+1][0];
			  atbt[j+1][0] = temp1;

			  temp2 = atbt[j][1];
			  atbt[j][1] = atbt[j+1][1];
			  atbt[j+1][1] = temp2;
		  }
	  }
  }

  atbt[0][2] = atbt[0][1];
  int max;
  for(int i=1;i<no_ps;i++){
	  max = 0;
	  for(int j=i;j>=0;j--)
		  max += atbt[j][1];
	  atbt[i][2] = max;
  }

  for(int i=0;i<no_ps;i++){
    atbt[i][3] = atbt[i][2] - atbt[i][0];
    atbt[i][4] = atbt[i][3] - atbt[i][1];
  }

  printf("\nAT\tBT\tCT\tTAT\tWT");
  for(int i=0;i<no_ps;i++)
	  printf("\n%d\t%d\t%d\t%d\t%d",atbt[i][0],atbt[i][1],atbt[i][2],atbt[i][3],atbt[i][4]);
}
