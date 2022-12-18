#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Tabung();
void Bola();
void LimasSegiempat();
void PrismaSegitiga();
void Kerucut();
void correct(int *var, char *prompt);

char ulang;

int main(){
	do{
	
		int pilihan;
		system ("cls");
		printf("\n\n\t\t\t===================================================================\n");
   		printf("\t\t\t|                           PRAKTIKUM ALPROG                      |\n");
    		printf("\t\t\t|                             KELOMPOK 11                         |\n");
		printf("\t\t\t===================================================================\n");
		printf("\t\t\t|     Program Menghitung Volume dan Luas Permukaan Bangun Ruang   |\n");
		printf("\t\t\t===================================================================\n");
		printf("\t\t\t| Silahkan Pilih Menu                                             |\n");
		printf("\t\t\t| 1. Tabung                                                       |\n");
		printf("\t\t\t| 2. Bola                                                         |\n");
		printf("\t\t\t| 3. Limas Segiempat                                              |\n");
		printf("\t\t\t| 4. Prisma Segitiga                                              |\n");
		printf("\t\t\t| 5. Kerucut                                                      |\n");
		printf("\t\t\t| 6. Keluar                                                       |\n");
		printf("\t\t\t===================================================================\n\n");
		correct(&pilihan,"\t\t\tMasukkan Pilihan Anda : ");
		
		if (pilihan==1){
			Tabung();
		}
		else if (pilihan==2){
			Bola();
		}
		else if (pilihan==3){
			LimasSegiempat();
		}
		else if (pilihan==4){
			PrismaSegitiga();
		}
		else if (pilihan==5){
			Kerucut();
		}
		else if (pilihan==6){
			system ("cls");
			printf ("\n\n\n\t\t\t\t\tSilahkan Tekan Enter Untuk Keluar ^.^\n\n\n");
			exit(0);
		}
		else{
			system ("cls");
			printf ("\n\n\t\t\t ANGKA TIDAK VALID, Anda Harus Memasukkan Pilihan Sesuai Menu");
		}
		printf ("\n\n\n\t\t\t >> Ingin Input Lagi? (y/n) : "); scanf ("%s", &ulang);
	}
	while (ulang=='Y' || ulang=='y');
		printf ("\n\n\t\t\t Terimakasih, tekan Enter untuk keluar ^.^ \n\n");
		
		return 0;
}

void Tabung(){
	float volume, luas, r, t;
	
	system("cls");
	printf("\t\t\t===================================================================\n");
	printf("\t\t\t|           Menghitung Volume dan Luas Permukaan Tabung           |\n");
	printf("\t\t\t===================================================================\n");
	printf ("\n\t\t\t Masukkan Nilai Jari-jari     : "); r=validasi();
	printf ("\n\t\t\t Masukkan Nilai Tinggi Tabung : "); t=validasi();

	
	volume = 3.14 * r * r * t;
	luas = 2 * 3.14 * r * (r + t);
	
	printf ("\n\n");
	printf ("\t\t\t Volume Tabung		=  %.2f\n", volume);
	printf ("\t\t\t Luas Permukaan Tabung	=  %.2f\n", luas);
}

void Bola(){
	float volume, luas, r;
	
	system("cls");
	printf ("\t\t\t===================================================================\n");
	printf ("\t\t\t|            Menghitung Volume dan Luas Permukaan Bola            |\n");
	printf ("\t\t\t===================================================================\n");
	printf ("\n\t\t\t Masukkan Nilai Jari-jari : "); r=validasi();
	
	
	volume = (4 * 3.14 * r * r * r) / 3;
	luas = 4 * 3.14 * (r * r);

	printf ("\n\n");
	printf ("\t\t\t Volume Bola		= %.2f\n", volume);
	printf ("\t\t\t Luas Permukaan Bola	= %.2f\n", luas);
}

void LimasSegiempat(){
	float volume, luas, s, t;
	
	system("cls");
	printf ("\t\t\t===================================================================\n");
	printf ("\t\t\t|         Menghitung Volume dan Luas Permukaan LimasSegiempat     |\n");
	printf ("\t\t\t===================================================================\n");
	printf ("\n\t\t\t Masukkan Nilai Sisi Alas     : "); s=validasi();
	printf ("\n\t\t\t Masukkan Nilai Tinggi Limas  : "); t=validasi();

	volume = s * s * t / 3;
	luas = (s * s ) + (4 * t);
	
	printf ("\n\n");
	printf ("\t\t\t Volume Limas Segiempat 	= %.2f\n", volume);
	printf ("\t\t\t Luas Permukaan Limas Segiempat = %.2f\n", luas);
}

void PrismaSegitiga(){	
	float volume, luas, a, t, tinggi, kll;
	
	system("cls");
	printf ("\t\t\t===================================================================\n");
	printf ("\t\t\t|        Menghitung Volume dan Luas Permukaan PrismaSegitiga      |\n");
	printf ("\t\t\t===================================================================\n");
	printf ("\n\t\t\t Masukkan Nilai Panjang Alas   : "); a=validasi();
	printf ("\n\t\t\t Masukkan Nilai Tinggi Alas    : "); t=validasi();
	printf ("\n\t\t\t Masukkan Nilai Tinggi Prisma  : "); tinggi=validasi();
	printf ("\n\t\t\t Masukkan Nilai Keliling       : "); kll=validasi();
	
	
	volume = (a * t / 2) * tinggi;
	luas = (2 * ( a * t / 2)) + (kll * tinggi);
	
	printf ("\n\n");
	printf ("\t\t\t Volume Prisma Segitiga 	= %.2f\n", volume);
	printf ("\t\t\t Luas Permukaan Prisma Segitiga	= %.2f\n", luas);
}

void Kerucut(){
	float volume, luas, r, t, s;
	
	system("cls");
	printf ("\t\t\t===================================================================\n");
	printf ("\t\t\t|             Menghitung Volume dan Luas Permukaan Kerucut        |\n");
	printf ("\t\t\t===================================================================\n");
	printf ("\n\t\t\t Masukkan Nilai Jari-jari Alas  : "); r=validasi();
	printf ("\n\t\t\t Masukkan Nilai Tinggi Kerucut  : "); t=validasi();
	printf ("\n\t\t\t Masukkan Nilai Garis Pelukis   : "); s=validasi();
	
	volume = 3.14 * r * r * t / 3;
	luas = 3.14 * r * (s+r);
	
	printf ("\n\n");
	printf ("\t\t\t Volume Kerucut		= %.2f\n", volume);
	printf ("\t\t\t Luas Permukaan Kerucut	= %.2f\n", luas);
}

int check(int *var){
	char buff[1024];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}

//Validasi Inputan Angka
void correct(int *var, char *prompt){
	while(1){
		printf(prompt);
		if(check(var))
			break;
		printf("\n\t\t\t Maaf, Hanya Menerima Input ANGKA\n");
		printf("\n");
	}
}

int validasi(){
	int angka;
    char karakter;
    scanf("%d%c", &angka, &karakter);
    if(karakter != '\n' || angka<0){
        printf("\n\n\t\t\t Maaf, Hanya Menerima Input ANGKA\n\n");
        printf("\n\t\t\t Masukkan Ulang Angka : ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}
