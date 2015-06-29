#include<stdio.h>

int main(){
	int n,rt;
	int frSt,toSt,coVal,tiVal;
	int h,i,ti[101][101]={0},co[101][101]={0};
	while (1) {
		//1stRecGet
		scanf("%d %d", &n, &rt);
		if(n==0 && rt==0)break;
		//root-format
		for(h=0;h<n+1;h++){
			for(i=0;i<n+1;i++){
				ti[h][i]=10000;co[h][i]=10000;
		}}
		//root-set1
		for(i=0;i<n;i++){
			scanf("%d %d %d %d", &frSt, &toSt,&coVal,&tiVal);
			co[frSt][toSt]=co[toSt][frSt]=coVal;
			ti[frSt][toSt]=ti[toSt][frSt]=tiVal;
		}
		//root-set2
		int j,k,l;
		for(j=1;j<rt+1;j++){for(k=1;k<rt+1;k++){for(l=1;l<rt+1;l++){
			if(co[j][l]>co[j][k]+co[k][l]){
				co[j][l]=co[j][k]+co[k][l];
				co[l][j]=co[j][k]+co[k][l];}
				// printf("cost:%d %d %d %d\n",j,k,l,co[j][l]);}
			if(ti[j][l]>ti[j][k]+ti[k][l]){
				ti[j][l]=ti[j][k]+ti[k][l];
				ti[l][j]=ti[j][k]+ti[k][l];}
		}}}
		// root-get
		int m;//,j;
		int stSt,glSt,chTyp;
		scanf("%d", &m);
		for(j=0;j<m;j++){
			scanf("%d %d %d", &stSt,&glSt,&chTyp);
			//minCost
			// if(chTyp==0)printf("minCost:%d\n", co[stSt][glSt]);
			if(chTyp==0)printf("%d\n", co[stSt][glSt]);
		  //minTime
			// if(chTyp==1)printf("minTime:%d\n", ti[stSt][glSt]);
			if(chTyp==1)printf("%d\n", ti[stSt][glSt]);
		}
	}
	return 0;
}
