#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int panjangsisi, pilihan;

//penggunaan struct
struct kubusstruct {
	int panjang;
	int luaspermukaan;
	int volume;
}data1;

//penggunaan union
union kubusunion{
	int panjang;
	int luaspermukaan;
	int volume;
}data2;

int input(){
	char cek;
	
	if (cek=scanf("%d%c", &pilihan, &cek)!=2 || pilihan<1){
		fflush (stdin);
		printf("\n\t\tHanya ANGKA Yang Diterima!");
		printf("\n\t\tMasukan Ulang Pilihan : ");
		return input ();
	}
	else{
		return panjangsisi;
	}
}

int inputsisi(){
	char cek;
	
	if (cek=scanf("%d%c", &panjangsisi, &cek)!=2 || panjangsisi<0){
		fflush(stdin);
		printf("\n\t\tHanya ANGKA Yang Diterima!");
		printf("\n\t\tMasukan Ulang Sisi : ");
		return inputsisi();
	}
	else {
		return panjangsisi;
	}
}

void kubus(){
	
	printf("\t\tMasukan sisi : ");
	inputsisi();
	printf("\n");
	
	data1.panjang = panjangsisi;
	data1.luaspermukaan = 6*panjangsisi*panjangsisi;
	data1.volume = panjangsisi*panjangsisi*panjangsisi;

	data2.panjang = panjangsisi;
	data2.luaspermukaan = 6*panjangsisi*panjangsisi;
	data2.volume = panjangsisi*panjangsisi*panjangsisi;
	
	//hasil perhitungan struct
	printf("\t\tPanjang Sisi : %d\n", data1.panjang);
	printf("\t\tLuas Permukaan : %d\n", data1.luaspermukaan);
	printf("\t\tVolume : %d\n", data1.volume);
	printf("\t\tUkuran Memory Pada Kubus Struct : %d\n\n", sizeof(data1));
	printf("\t\t=====================================\n\n");
	//hasil perhitungan union
	printf("\t\tPanjang Sisi : %d\n", data2.panjang);
	printf("\t\tLuas Permukaan : %d\n", data2.luaspermukaan);
	printf("\t\tVolume : %d\n", data2.volume);
	printf("\t\tUkuruan Memory Pada Kubus Union : %d\n\n", sizeof(data2));
}

int main(){
	char ulang;
	
	do{
	printf("\t\t===================Kelompok 11===================\n");
	printf("\t\tPROGRAM PERHITUNGAN KUBUS DENGAN STRUCT DAN UNION\n");
	printf("\t\t=================================================\n");
	printf("\t\t 1. Kubus Struct dan Union\n");
	printf("\t\t 2. Keluar Program\n");
	printf("\t\t=================================================\n");
	printf("\n\t\tMasukan Pilihan : ");
	input();
	
	if(pilihan == 1){
		system("cls");
		kubus();
	}
	else if(pilihan == 2){
		printf ("\n\n\n\t\t\t ====== TERIMAKASIH ====== \n");
		printf ("\t\t\t Tekan Enter Untuk Keluar \n");
		exit(1);
	}
	else{
		system("cls");
		printf("\t\tMASUKAN ANGKA YANG BENAR !\n");
		main();
	}
	printf ("\n\t\tApakah Ingin Mengulang Program? (Y/T) : "); scanf ("%s", &ulang);
	system("cls");
	}
	while (ulang=='Y' || ulang=='y');
		printf ("\n\n\n\t\t\t ====== TERIMAKASIH ====== \n");
		printf ("\t\t\t Tekan Enter Untuk Keluar \n");
		
	return 0;
}
