#include<stdio.h>

void main(){
  int no_ps;

  printf("Enter no. of processes: ");
  scanf("%d",&no_ps);

  int atbt[no_ps][2], ct[no_ps], tat[no_ps], wt[no_ps];

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

  ct[0] = atbt[0][1];
  int max;
  for(int i=1;i<no_ps;i++){
	  max = 0;
	  for(int j=i;j>=0;j--)
		  max += atbt[j][1];
	  ct[i] = max;
  }

  for(int i=0;i<no_ps;i++)
    tat[i] = ct[i] - atbt[i][0];

  for(int i=0;i<no_ps;i++)
    wt[i] = tat[i] - atbt[i][1];

  printf("\nAT: ");
  for(int i=0;i<no_ps;i++)
	  printf("\t%d",atbt[i][0]);

  printf("\nBT:");
  for(int i=0;i<no_ps;i++)
	  printf("\t%d",atbt[i][1]);

  printf("\nCT:");
  for(int i=0;i<no_ps;i++)
	  printf("\t%d",ct[i]);

  printf("\nTAT:");
  for(int i=0;i<no_ps;i++)
	  printf("\t%d",tat[i]);

  printf("\nWT:");
  for(int i=0;i<no_ps;i++)
	  printf("\t%d",wt[i]);
}
