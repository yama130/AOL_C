#include<stdio.h>
int main(){
  int n,i,j;
  int id, tanka,count;
  int NO[100],ID[100], URI[100];
  scanf("%d", &n);
  while(n!=0){
    for(i=0;i<n;i++){
      scanf("%d %d %d", &id,&tanka,&count);
      NO[i]=n;ID[i]=id;URI[i]=tanka*count;
    }
    scanf("%d", &n);NO[]
  }
  for(j=0;j<n;j++){
    printf("%d %d\n",ID[j],URI[j]);
  }

  return 0;
}
