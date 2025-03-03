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

  for(int i=0;i<no_ps;i++){
    tat[i] = ct[i] - atbt[i][0];
    wt[i] = tat[i] - atbt[i][1];
  }

  printf("\nAT\tBT\tCT\tTAT\tWT");
  for(int i=0;i<no_ps;i++)
	  printf("\n%d\t%d\t%d\t%d\t%d",atbt[i][0],atbt[i][1],ct[i],tat[i],wt[i]);
}
