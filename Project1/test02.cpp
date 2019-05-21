#include<stdio.h>
char YINYING = 'X';
char GAOLIANG = '-';
int t1[4] = { 1,0,1,0 };
int t2[4] = { 0,0,1,0 };
int t3[4] = { 1,0,0,0 };
int t4[4] = { 1,0,1,2 };
int t5[4] = { 0,0,1,2 };
int t6[4] = { 0,0,0,2 };
int t7[4] = { 1,2,2,2 };
int t8[4] = { 0,0,0,0 };

int main() {
	int maincodeH[870] = { 0 };  //横
	int maincodeH2[870] = { 0 }; 
	int maincodeS[870] = { 0 };  //竖
	void codeB(int A[]);
	void changeB(int A[], int B[], int C[]);
	void recodeB(int A[], int B[], int L, int H);
	void viewB(int A[], int L, int H);
	codeB(maincodeH);
	changeB(maincodeH, maincodeH2, t2);
	recodeB(maincodeH2,maincodeS,30,29);
	viewB(maincodeS, 30, 29);
	getchar();
	return 0;
}

//主架构
void codeB(int A[]) {
	int B[30][29] = { 0 };
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 29; j++) {
			if (j > i / 3 && j < 29 - i / 3) B[i][j] = 1;
			else continue;
		}
	}
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 29; j++) {
			A[i * 29 + j] = B[i][j];
		}
	}
}
//变形
void changeB(int A[],int B[],int C[]) {
	for (int i = 0; i < 870; i++) B[i] = A[i];
	if(C[0]==1){
		for (int i = 4; i < 12; i++) {
			for (int j = 0; j < 29; j++) {
				if(A[319 + j]) B[29 * i + j] = 2;
				else B[29 * i + j] = 0;
			}
		}
	}
	if (C[2] == 1) {
		for (int i = 19; i < 25; i++) {
			for (int j = 0; j < 29; j++) {
				if(A[696 + j]) B[29 * i + j] = 2;
				else B[29 * i + j] = 0;
			}
		}
	}
	if (C[2] == 2) {
		for (int i = 19; i < 25; i++) {
			for (int j = 0; j < 29; j++) {
				if(A[522 + j]) B[29 * i + j] = 2;
				else B[29 * i + j] = 0;
			}
		}
	}
	if (C[3] == 2) {
		for (int i = 25; i < 30; i++) {
			for (int j = 0; j < 29; j++) {
				if (A[696 + j]) B[29 * i + j] = 2;
				else B[29 * i + j] = 0;
			}
		}
	}
	if (C[1] == 2) {
		for (int i = 12; i < 30; i++) {
			for (int j = 0; j < 29; j++) {
				if (A[319 + j]) B[29 * i + j] = 2;
				else B[29 * i + j] = 0;
			}
		}
	}
}
//横竖重编码
void recodeB(int A[], int B[], int L, int H) {       //LH指B的长和高
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < L; j++) {
			B[i*L + j] = A[j*H + i];
		}
	}
}
//视图
void viewB(int A[], int L, int H) {               //L指横向
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < L; j++) {
			if (A[i*L + j] == 1) printf("%c",YINYING);
			if (A[i*L + j] == 2) printf("%c", GAOLIANG);
		}
		printf("\n");
	}
}
