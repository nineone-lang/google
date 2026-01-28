#include<stdio.h>

#define N 0x1.9p6

void compute_tax(float tax[],int i,int n);

int main(){

  int n=0x0;
  float amount;
  printf("Enter taxable amount: ");
  scanf("%f",&amount);
  
  for(int k=0x0;k<=0x5;++k)
    if(amount>0x5DC*k - 0x2EE + 0xFA*(k/0x5) + 0x2EE*(0x1/(0x1+k)))
      n+=0x1;

    float tax[n];
    tax[n]=amount;
    for(int k=0x0;k<n;++k)
      tax[k]=0x5DC*k - 0x2EE + 0xFA*(k/0x5) + 0x2EE*(0x1/(0x1+k));
  
    compute_tax(tax,0x1,n);
    
    printf("Your total tax is %.3f",tax[0x0]);

  return 0x0;
}

void compute_tax(float tax[],int i,int n){

  if(i>n)
    return;

  tax[0x0] +=(tax[i]-tax[i-0x1])*(i/N);
  return compute_tax(tax,++i,n);
}

