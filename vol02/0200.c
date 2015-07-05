#include <stdio.h>
#define min(x, y) ((x) < (y) ? (x) : (y))
#define INF 1e8

int main(){
	int i,j,k,l;
	int n,rt,m;
	int frSt,toSt,coVal,tiVal;
	int val[2][101][101];
	int stSt,glSt,chTyp;
	while (1) {
		//1stRecGet
		scanf("%d %d", &n, &rt);
		if(n==0 && rt==0)break;
		//root-format
		for(i=0;i<=rt;i++){
			for(j=0;j<=rt;j++){
				val[0][i][j]=INF;val[1][i][j]=INF;
		}}
		//root-set1
		for(i=0;i<n;i++){
			scanf("%d %d %d %d", &frSt, &toSt,&coVal,&tiVal);
			val[0][frSt][toSt]=val[0][toSt][frSt]=coVal;
			val[1][frSt][toSt]=val[1][toSt][frSt]=tiVal;
		}
		//root-set2
		for(j=0;j<=rt;j++){
			for(k=0;k<=rt;k++){
				for(l=0;l<=rt;l++){
					val[0][k][l]=min(val[0][k][l],val[0][k][j]+val[0][j][l]);
					val[1][k][l]=min(val[1][k][l],val[1][k][j]+val[1][j][l]);
		}}}

		// root-get
		scanf("%d", &m);
		for(j=0;j<m;j++){
			scanf("%d %d %d", &stSt,&glSt,&chTyp);
			//minCost:0,minTime:1
			printf("%d\n", val[chTyp][stSt][glSt]);
		}
	}
	return 0;
}
