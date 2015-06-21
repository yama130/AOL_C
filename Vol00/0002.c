#include<stdio.h>
int main(){
  int a,b,i=0,j=0;
  int ds[200];
  while(scanf("%d %d", &a,&b)!=-1){
    ds[i]=0;
    //if(a+b==0)break;
    if(((a+b)/1000000)!=0)ds[i]=ds[i]+1;
    if(((a+b)/100000)!=0)ds[i]=ds[i]+1;
    if(((a+b)/10000)!=0)ds[i]=ds[i]+1;
    if(((a+b)/1000)!=0)ds[i]=ds[i]+1;
    if(((a+b)/100)!=0)ds[i]=ds[i]+1;
    if(((a+b)/10)!=0)ds[i]=ds[i]+1;
    if(((a+b)/1)!=0)ds[i]=ds[i]+1;
    // printf("aa:%d\n",ds[0]);
    i++;
  }
  for(j=0;j<i;j++){
    printf("%d\n",ds[j]);
  }
  return 0;
}
