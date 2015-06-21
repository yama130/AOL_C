#include<stdio.h>
int main(){
  int i,tmp=0;
  int m1=0,m2=0,m3=0;
  for(i=0;i<10;i++){
    scanf("%d\n", &tmp);
    if(m1<tmp){m3=m2;m2=m1;m1=tmp;
    }else if(m2<tmp){m3=m2;m2=tmp;
    }else if(m3<tmp){m3=tmp;}
  }
  printf("%d\n",m1);
  printf("%d\n",m2);
  printf("%d\n",m3);
  return 0;
}
