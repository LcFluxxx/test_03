
#include<stdio.h>
#include"data.h"/*
int mains() {
	void partA(int A[], int t);
	void recode(int A[], char B[], int l, int h);
	int partside[870] = {0};           //A part size
	char v[870];                 //pixl:29*90
	for (int i = 0; i < 870; i++) v[i] = ' ';

	partA(partside, 1);
	recode(partside, v, 30, 29);
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 29; j++) {
			printf("%c",v[j+30*i]);
		}
		printf("\n");
	}
	
	*/
	/*for (int i = 1; i < 20; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d", j);
		}
	}
	printf("\n");
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d", j);
			printf("XXXXXXXXX");
		}
	}
	*/
	/*
	for (int i = 1; i < 90; i++) {
		for (int j = 1; j < i/3+1; j++) {
			t[(i - 1) * 29 + j - 1] = 'X';
		}
	}*/
	/*
	for (int i = 0; i < 10; i++) {
		for (int q = 0; q < 10; q++) {
			for (int w = 0; w < 10; w++){
				for (int e = 0; e < 10; e++) {
					for (int r = 0; r < 10; r++) {
						for (int t = 0; t < 10; t++) {
							for (int y = 0; y < 10; y++){ 
								for (int u = 0; u < 10; u++) {
									for (int o = 0; o < 10; o++) {
										for (int p = 0; p < 10; p++) {
											printf("%d%d%d%d%d%d%d%d%d%d\n",i,q,w,e,r,t,y,u,o,p);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}*/
	/*
	for (int i = 0; i < 89; i++) {
		for (int j = 0; j < 29; j++) {
			printf("%c", t[i*29+j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 89; i++) {
		for (int j = 0; j < 29; j++) {
			s[] t[i * 29 + j]);
		}
	}
	for (int i = 0; i < 89; i++) {
		for (int j = 0; j < 29; j++) {
			printf("%c", t[i * 29 + j]);
		}
		printf("\n");
	}*/
	getchar();
	return 0;
}

void partA(int A[],int t) {  //t类型
	void parta(int A[], int part, int t);
	int part1[116] = { 0 }, part2[232] = { 0 }, part3[203] = { 0 }, part4[174] = { 0 }, part5[145] = { 0 }, part6[319] = { 0 }, part7[754] = { 0 };
	switch (t) {
		case 1: {
			parta(part1, 1, 0);
			parta(part2, 2, 1);
			parta(part3, 3, 0);
			parta(part4, 4, 1);
			parta(part5, 5, 0);
		}break;
		case 2: {
			parta(part1, 1, 0);
			parta(part2, 2, 0);
			parta(part3, 3, 0);
			parta(part4, 4, 1);
			parta(part5, 5, 0);
		}break;
		case 3: {
			parta(part1, 1, 0);
			parta(part2, 2, 1);
			parta(part3, 3, 0);
			parta(part4, 4, 0);
			parta(part5, 5, 0);
		}break;
		case 4: {
			parta(part1, 1, 0);
			parta(part2, 2, 0);
			parta(part3, 3, 0);
			parta(part4, 4, 0);
			parta(part5, 5, 2);
		}break;
		case 5: {
			parta(part1, 1, 0);
			parta(part2, 2, 0);
			parta(part3, 3, 0);
			parta(part4, 4, 0);
			parta(part5, 5, 0);
		}break;
		case 6: {
			parta(part1, 1, 0);
			parta(part2, 2, 0);
			parta(part7, 7, 2);
		}break; 
		case 7: {
			parta(part1, 1, 0);
			parta(part2, 2, 1);
			parta(part3, 3, 0);
			parta(part6, 6, 2);
		}break;
		case 8: {
			parta(part1, 1, 0);
			parta(part2, 2, 0);
			parta(part3, 3, 0);
			parta(part6, 6, 2);
		}break;
	}
	if (t < 6) {
		for (int i = 0; i < 116; i++) A[i] = part1[i];
		for (int i = 0; i < 232; i++) A[i+116] = part2[i];
		for (int i = 0; i < 203; i++) A[i+348] = part3[i];
		for (int i = 0; i < 174; i++) A[i+551] = part4[i];
		for (int i = 0; i < 145; i++) A[i+725] = part5[i];
	}
	else {
		if (t < 7) {
			for (int i = 0; i < 116; i++) A[i] = part1[i];
			for (int i = 0; i < 232; i++) A[i+116] = part2[i];
			for (int i = 0; i < 754; i++) A[i+348] = part7[i];
		}
		else {
			for (int i = 0; i < 116; i++) A[i] = part1[i];
			for (int i = 0; i < 232; i++) A[i+116] = part2[i];
			for (int i = 0; i < 203; i++) A[i+348] = part3[i];
			for (int i = 0; i < 319; i++) A[i+551] = part6[i];
		}
	}
}

void parta(int A[], int part,int t) {    //t类型 s类型2 
	int start, end;
	switch (part) {
		case 1:start = 1, end = 4; break;
		case 2:start = 5, end = 12; break;
		case 3:start = 13, end = 19; break;
		case 4:start = 20, end = 25; break;
		case 5:start = 26, end = 30; break;
		case 6: start = 20, end = 30; break;
		case 7: start = 5, end = 30; break;
	}
	if (t = 1) {
		int size = 1000;
		for (int i = 0; i < 29; i++) {
			for (int j = 0; j <= i*3; j++) {
				if (end == j) {
					size = i;
					break;
				}
				else {
					continue;
				}
			}
			if (size == i) break;
		}
		for (int i = 0; i < (end - start + 1); i++) {
			for (int j = 0; j < 29; j++) {
				if (j > size - 1 && j < 28 - size) {
					A[i * 29 + j+1] = 2;
				}
			}
		}
	}
	else {
		if (t = 2) {
			int size = 1000;
			for (int i = 0; i < 29; i++) {
				for (int j = 0; j <= i*3; j++) {
					if (start == j) {
						size = i;
						break;
					}
					else {
						continue;
					}
				}
				if (size == i) break;
			}
			for (int i = 0; i < (end - start + 1); i++) {
				for (int j = 0; j < 29; j++) {
					if (j > size - 1 && j < 28 - size) {
						A[i * 29 + j+1] = 2;
					}
				}
			}
		}
		else {
			for (int i = 0; i < 29; i++) {
				for (int j = 0; j < i*3; j++) {
					if (j<end + 1 && j>start - 2) A[i * 29 + j + 1] = 1;
					else continue;
				}
			}
		}
	}
}

void recode(int A[], char B[], int l, int h) {      //指A长和高
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < h; j++) {
			if (A[i*h+j] == 1) {
				B[j*l+i] = '|';
			}
			else {
				if (A[i*h + j] == 2) {
					B[j*l + i] = '-';
				}
				else {
					B[j*l + i] = ' ';
				}
			}
		}
	}
}
