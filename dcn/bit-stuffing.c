#include<stdio.h>

void main(){
int data[100], bits, cbit=0;

printf("Enter no of bits: ");
scanf("%d",&bits);

printf("Enter data: ");
for(int i=0;i<bits;i++)
scanf("%d",&data[i]);

int temp[bits];
for(int i=0;i<bits;i++)
temp[i] = data[i];

for(int i=0;i<bits;i++){
if(data[i] == 1 && data[i+1] == 1){
cbit++;
} else {
cbit = 0;
}

if(cbit == 4){
for(int j=bits;j>=i+2;j--)
data[j+1] = data[j];

data[i+2] = 0;
cbit=0;
}

}

printf("Raw data:\t");
for(int i=0;i<bits;i++)
printf(" %d",temp[i]);

printf("\nBit Stuffed data:");
for(int i=0;i<bits+1;i++)
printf(" %d",data[i]);

}                                                                                              
