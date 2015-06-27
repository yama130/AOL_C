#include<stdio.h>
int main(){
  int n,i,j;
  long cel[11][11],ttl[11];
  scanf("%ld\n", &n);
  while (n != 0){
    for(i=0;i<n;i++){
      cel[i][n]=0;
      for(j=0;j<n;j++){
        scanf("%ld", &cel[i][j]);
      }
      for(j=0;j<n;j++){
        printf("%ld ", cel[i][j]);
        cel[i][n]+=cel[i][j];
        ttl[j]+=cel[i][j];
      }
      printf("%ld\n", cel[i][n]);
    }
    //total
    for(i=0;i<n;i++){
      printf("%ld ", ttl[i]);
      ttl[n]+=ttl[i];
    }
    printf("%ld\n", ttl[n]);
    scanf("%ld", &n);
  }
  return 0;
}
