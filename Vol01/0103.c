#include<stdio.h>
int main(){
  int n;
  int inning;
  char events[8];
  int hit,out,pnt;
  scanf("%d", &inning);
  // printf("inning:%d\n",inning);
  n=0;hit=0;out=0;pnt=0;
  while(n!=inning){
    scanf("%s", &events);
    // printf("events:%s\n",events);
    if(strcmp(events,"HIT")==0){
      hit+=1;
      if(hit==4){pnt+=1;hit=3;}
      // printf("hit:%d\n",hit);
    }else if(strcmp(events,"HOMERUN")==0){
      pnt+=1+hit;hit=0;
      // printf("point:%d\n",pnt);
    }else if(strcmp(events,"OUT")==0){
      out+=1;
      // printf("out:%d\n",out);
      if(out==3){
        out=0;hit=0;
        n+=1;
        printf("%d\n", pnt);
        pnt=0;
      }
    }
  }
  return 0;
}
