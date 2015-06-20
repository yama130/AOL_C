#include<stdio.h>
int main(){
  int x , y,a,b,min,gch;
  scanf("%d %d", &x, &y);
  while (1) {
    a=minCh(x,y);
    b=gcdCh(x,y);
    // printf("%d\n",a);
    // printf("%d\n",b);

    if(a==b || b==0){
      break;
    }else{x=a;y=b;}
  }

  printf("%d\n",a);
  return 0;
}
int minCh(int a,int b){
	int x;
	if(a>b){x=b;}else{x=a;}
	return x;
}
int gcdCh(int a,int b){
	int x;
	if(a>b){x=a%b;}else{x=b%a;}
	return x;
}
