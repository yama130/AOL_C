#include<stdio.h>
#include <math.h>

int main(){
  int n,a=0;
  long A[10000];
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    scanf("%ld", &A[i+1]);
    a=a+isPlime(A[i+1]);
  }

  printf("%d\n",a);
  return 0;
}
int isPlime(long a){
	int x;
  if(a==2){x=1;}
  else if(a==3){x=1;}
  else if(a==4){x=0;}
  else if(a==5){x=1;}
  else if(a%2==0){x=0;}
  else{

    for(int i=3;i<(int)sqrt((double)a);i++){
      if(a%i==0){
        x=0;
        printf("sq:%d %d\n",a%i,i);
      }else{x=0;}
    }
    x=0;
    }
	return x;
}
