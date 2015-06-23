#include<stdio.h>
int main(){
	int n, m, i, j, k;
	int id, tanka, count;
	//int ID[4000],URI[4000];
	int R_ID[4000];
	m = 0;
	scanf("%d", &n);
	while (n != 0){
		//get count
		int ID[4000] = {};
		int URI[4000] = {};
		//get dataset
		for (i = 0; i<n; i++){
			scanf("%d %d %d", &id, &tanka, &count);
			j = 0;
			while (id != 0){
				if (ID[j] == 0){
					ID[j] = id; URI[j] = tanka*count;
					break;
				}
				else if (ID[j] == id){
					URI[j] = URI[j] + tanka*count;
					break;
				}
				else j++;
			}
		}
		//dataset chk
		R_ID[m] = -1;
		for (i = 0; i<n; i++){
			if (URI[i] >= 1000000){ R_ID[m] = ID[i]; m++; }
		}
		if (R_ID[m] == -1){ m++; }
		//get count
		scanf("%d", &n);
	}
	//k=0;
	//while(ID[k]!=0){
	// printf("%d %d\n",ID[k],URI[k]);
	// k++;
	//}
	k = 0;
	while (R_ID[k] != 0){
		if (R_ID[k] == -1){ printf("NA\n"); }
		else{ printf("%d\n", R_ID[k]); }
		k++;
	}

	return 0;
}
