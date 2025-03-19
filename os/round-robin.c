#include<stdio.h>

void main() {
  int ps, tq;

  printf("Enter no of processes: ");
  scanf("%d", & ps);

  printf("Enter time quantum: ");
  scanf("%d", & tq);

  int at[ps], bt[ps], ct[ps], tat[ps], wt[ps], remt[ps];

  printf("Enter AT: ");
  for (int i = 0; i < ps; i++)
    scanf("%d", & at[i]);

  printf("Enter BT: ");
  for (int i = 0; i < ps; i++)
    scanf("%d", & bt[i]);

  for (int i = 0; i < ps - 1; i++)
    for (int j = 0; j < ps - i - 1; j++)
      if (at[j] > at[j + 1]) {
        at[j] = at[j] + at[j + 1];
        at[j + 1] = at[j] - at[j + 1];
        at[j] = at[j] - at[j + 1];

        bt[j] = bt[j] + bt[j + 1];
        bt[j + 1] = bt[j] - bt[j + 1];
        bt[j] = bt[j] - bt[j + 1];
      }
    ;
  ;

  for (int i = 0; i < ps; i++) {
    remt[i] = bt[i];
    ct[i] = 0;
  }

  int count, time = 0;

  while (1) {
    count = 0;
    for (int j = 0; j < ps; j++)
      if (remt[j] == 0)
        count++;
    ;

    if (count == ps)
      break;

    for (int i = 0; i < ps; i++)
      if (remt[i] != 0) {
        if (remt[i] > tq) {
          time += tq;
          ct[i] = time;
          remt[i] -= tq;
        } else {
          time += remt[i];
          ct[i] = time;
          remt[i] = 0;
        }
      }
    ;

  }

  for (int i = 0; i < ps; i++){
    tat[i] = ct[i] - at[i];
    wt[i] = tat[i] - bt[i];
  }

  printf("\n");

  printf("AT:");
  for (int i = 0; i < ps; i++)
    printf("\t%d", at[i]);
  printf("\n");

  printf("BT:");
  for (int i = 0; i < ps; i++)
    printf("\t%d", bt[i]);
  printf("\n");

  printf("CT:");
  for (int i = 0; i < ps; i++)
    printf("\t%d", ct[i]);
  printf("\n");

  printf("TAT:");
  for (int i = 0; i < ps; i++)
    printf("\t%d", tat[i]);
  printf("\n");

  printf("WT:");
  for (int i = 0; i < ps; i++)
    printf("\t%d", wt[i]);
  printf("\n");
}
