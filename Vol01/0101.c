#include<stdio.h>
#include<string.h>
int main(){
  int n,i;
  char str[1000];
  scanf("%d\n", &n);
  for(i=0;i<n;i++){
    gets(str);
    while (strstr(str, "Hoshino")!=NULL)
      strncpy(strstr(str,"Hoshino"),"Hoshina",7);
    printf("%s\n", str);
  }
    return 0;
}
