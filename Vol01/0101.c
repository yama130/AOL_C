#include<stdio.h>
#include<string.h>
int main(){
  int n,i;
  char str[1000][1028];
  scanf("%d\n", &n);
  for(i=0;i<n;i++){
    fgets(str[i],sizeof(str[i]),stdin);
    //scanf("%s\n", &str[i]);
    if(strstr(str[i],"Hoshino")!=0){
      strncpy(strstr(str[i],"Hoshino"),"Hoshina",7);
    }
  }
  //printf("start\n");
  for(i=0;i<n;i++){
    printf("%s", str[i]);
  }
    return 0;
}
