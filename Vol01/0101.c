#include<stdio.h>
#include<string.h>
int main(){
  int n,i;
  char str1[1028];
  char *str2;
  scanf("%d\n", &n);
  for(i=0;i<n;i++){
    gets(str1);
    while ((str2 = strstr(str1, "Hoshino")) != NULL){
      strncpy(strstr(str1,"Hoshino"),"Hoshina",7);
    }
    printf("%s\n", str1);
  }
    return 0;
}
