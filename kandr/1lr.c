#include<stdio.h>

int getl(char line[], int maxlines);
void cpy(char from[], char to[]);

void main(){
  /* ============== 1.6 ============== */
  /* int c, i, nwh, noth; */
  /* int ndigi[10]; */
  /**/
  /* for(i=0; i<10; i++){ */
  /*   ndigi[i] = 0; */
  /* }   */
  /**/
  /* while((c = getchar()) != EOF){ */
  /*   if(c >= '0' && c <= '9') */
  /*     ++ndigi[c-'0']; */
  /*   else if(c == ' ' || c == '\n' || c == '\t') */
  /*     ++nwh; */
  /*   else  */
  /*     ++noth; */
  /* } */
  /**/
  /* printf("digits ="); */
  /* for(i=0;i<10;i++) */
  /*   printf(" %d", ndigi[i]); */
  /* printf(", whites = %d and others = %d", nwh, noth); */

  /* ============== 1.6 ============== */
  int slen, len, max=0;
  char line[1000], longest[1000];

  while((len = getl(line,1000)) > 0){
    if(len > max){
      max = slen = len;
      cpy(line, longest);
    }
  }

  printf("length of longest: %d\n",slen);

  if(max != 0)
    printf("%s",longest);
  
}


/* ============== 1.6 ============== */
int getl(char line[], int maxline){
  int c,i;
  for(i=0;i<maxline-1 && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;    

  if(c == '\n'){
    line[i] = c;
    i++;
  }
  line[i] = '\0';

  return i;
}


void cpy(char from[], char to[]){
  int i=0;
  while((to[i] = from[i]) != '\0')
    i++;
}
