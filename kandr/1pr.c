#include <stdio.h>

/* int getl(char line[], int lim); // 1.17 */

void main(){
  /* ================= 1-8 ================= */
  /* int c, b=0, t=0, n=0; */
  /* while((c = getchar()) != EOF ){ */
  /*   if(c == ' ') */
  /*     b++; */
  /*   else if(c == '\t') */
  /*     t++; */
  /*   else if(c == '\n') */
  /*     n++; */
  /* } */
  /* printf("b:%d t:%d n:%d",b,t,n); */
  
  /* ================= 1-9 ================= */
  /* int c; */
  /* while((c = getchar()) != EOF){ */
  /*   if(c == ' '){ */
  /*     while((c = getchar()) == ' '); */
  /*     putchar(' '); */
  /*     putchar(c); */
  /*   }else { */
  /*     putchar(c); */
  /*   } */
  /* } */

  /* === OR === */

	/* int c; */
	/* while((c = getchar()) != EOF){ */
	/* 	putchar(c); */
	/* 	if(c == ' '){ */
	/* 		while((c = getchar()) == ' ') */
	/* 			; */
	/* 		putchar(c); */
	/* 	} */
	/* } */

  /* ================= 1-10 ================= */
  /* int c; */
  /* while((c = getchar()) != EOF){ */
  /*   if(c == '\t'){ */
  /*     putchar('\\'); */
  /*     putchar('t'); */
  /*   }else if(c == '\b'){ */
  /*     putchar('\\'); */
  /*     putchar('b'); */
  /*   }else if(c == '\\'){ */
  /*     putchar('\\'); */
  /*     putchar('\\'); */
  /*   }else{ */
  /*     putchar(c); */
  /*   } */
  /* } */

  /* ================= 1-12 ================= */ 
 /*  int c; */
	/**/
 /*  while((c = getchar()) != EOF){ */
 /*    if(c == ' ' || c == '\n' || c == '\t'){ */
 /*      c = getchar(); */
 /*      if(c == ' ') */
 /*        while((c = getchar()) == ' ') */
 /*          ; */
 /*      if(c == '\t') */
 /*        while((c = getchar()) == '\t') */
 /*      ; */
 /*      if(c == '\n') */
 /*        while((c = getchar()) == '\n') */
 /*      ; */
 /*      putchar('\n'); */
 /*    }  */
 /*    putchar(c); */
	/* } */

  /* ================= 1-13 ================= */ 
  /* int c, i=0, j, word=0; */
  /* int wlarr[1000]; */
  /**/
  /* while((c = getchar()) != EOF){ */
  /*   if(c == ' ' || c == '\n' || c == '\t'){ */
  /*     wlarr[i] = word;    */
  /*     word = -1; */
  /*     i++; */
  /*   } */
  /*   word++; */
  /* } */
  /* for(j=0;j<i;j++){ */
  /*   printf("%d:\t",wlarr[j]); */
  /*   for(int k=0;k<wlarr[j];k++){ */
  /*     printf("| "); */
  /*   } */
  /*   printf("\n"); */
  /* } */
  
  /* ================= 1-14 ================= */ 
  /* int c, i=0, j, oth=0; */
  /* int wlarr[36]; */
  /**/
  /* for(i=0;i<36;i++){ */
  /*   wlarr[i] = 0; */
  /* } */
  /**/
  /* while((c = getchar()) != EOF){ */
  /*   if(c >= '0' && c <= '9') */
  /*     ++wlarr[c-'0']; */
  /*   else if(c >= 97 && c <= 122) */
  /*     ++wlarr[c - 'a' + 10]; */
  /*   else */
  /*     ++oth; */
  /* } */
  /**/
  /* for(j=0;j<36;j++){ */
  /*   if(wlarr[j] != 0){ */
  /*     if (j <= 9)  */
  /*       printf("%d, %d:",j,wlarr[j]); */
  /*     else */
  /*       printf("%c, %d:",j+87,wlarr[j]); */
  /*     for(int k=0;k<wlarr[j];k++) */
  /*       printf("| "); */
  /*     printf("\n"); */
  /*   } */
  /* } */
  /**/
  /* printf("oth: "); */
  /* for(j=0;j<oth;j++) */
  /*   printf("| "); */

  /* ================= 1-17 ================= */ 
  /* int len; */
  /* char line[1000]; */
  /**/
  /* while((len = getl(line, 1000)) > 0) */
  /*   if(len > 15) */
  /*     printf("%s",line); */
}

/* ================= 1-17 ================= */ 
/* int getl(char lin[], int li){ */
/*   int i,c; */
/*   for(i=0; i<li && (c = getchar()) != EOF && c != '\n'; i++) */
/*     lin[i] = c; */
/*   if(c == '\n'){ */
/*     lin[i] = c; */
/*     i++; */
/*   } */
/*   lin[i] = '\0'; */
/*   return i; */
/* } */
