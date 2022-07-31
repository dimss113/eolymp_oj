// link : https://www.eolymp.com/en/problems/458

#include <cstdio>
char A[101][101], B[101][101];
char res[4];

int main(){
	int kolom, baris, i, j;
	scanf("%d %d", &kolom, &baris);
	for (i=0; i<baris; i++)scanf("%s", A[i]);
	for (i=0; i<baris; i++)scanf("%s", B[i]);
	scanf("%s", res);
	for(i=0;i<baris;i++){
		for (j=0;j<kolom;j++){
			if (A[i][j]=='0'&&B[i][j]=='0')printf("%c", res[0]);
			if (A[i][j]=='0'&&B[i][j]=='1')printf("%c", res[1]);
			if (A[i][j]=='1'&&B[i][j]=='0')printf("%c", res[2]);
			if (A[i][j]=='1'&&B[i][j]=='1')printf("%c", res[3]);
		}
		puts(" ");
	}
	return 0;
}