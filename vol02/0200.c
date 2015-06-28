#include<stdio.h>
int main(){
	int n,rt;
	int frSt,toSt,coVal,tiVal;
	int i,ti[100][100]={10000},co[100][100]={10000};
	scanf("%d %d", &n, &rt);
	for(i=0;i<n;i++){
		scanf("%d %d %d %d", &frSt, &toSt,&coVal,&tiVal);
		co[frSt][toSt]=co[toSt][frSt]=coVal;
		ti[frSt][toSt]=ti[toSt][frSt]=tiVal;
	}
	int j,k,l;
	for(j=1;j<rt+1;j++){
		for(k=1;k<rt+1;k++){
			for(l=1;l<rt+1;l++){
				if(co[j][l]>co[j][k]+co[k][l]){
					co[j][l]=co[j][k]+co[k][l];
					co[l][j]=co[j][k]+co[k][l];
					printf("cost:%d %d %d %d\n",j,k,l,co[j][l]);
				}
				if(ti[j][l]>ti[j][k]+ti[k][l]){
					ti[j][l]=ti[j][k]+ti[k][l];
					ti[l][j]=ti[j][k]+ti[k][l];}
			}
		}
	}

	int m;
	int stSt,glSt,chTyp;
	//int j;
	scanf("%d", &m);
	while(1){
		for(j=0;j<m;j++){
			scanf("%d %d %d", &stSt,&glSt,&chTyp);
			//minCost
			if(chTyp==0){
				printf("minCost:%d\n", co[stSt][glSt]);
			}
			if(chTyp==1){
				printf("minTime:%d\n", ti[stSt][glSt]);
			}
			break;
		}
	}
	return 0;
}
