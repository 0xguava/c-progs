#include <stdio.h>

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
}
