#include<stdio.h>
#include <math.h>

main(){
  int i,n,m=0;
  long A[10000];
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%ld", &A[i+1]);
    m=m+isPlime(A[i+1]);
  }

  printf("%d\n",m);
  return 0;
}
int isPlime(long n){
  int i=3;
  if(n==2)return 1;
  else if(n<2 || (n%2)==0)return 0;
  else{
    while(i<=(int)sqrt((long)n)){
      if((n%i)==0)return 0;
      i= i+2;
      }}
     return 1;

}
