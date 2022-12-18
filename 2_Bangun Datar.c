#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Segitiga_Sembarang();
void Belah_Ketupat();
void Jajar_Genjang();
void Trapesium();
void Lingkaran();
void correct(int *var, char *prompt);

char ulang;

int main(){
	do{
	
		int pilihan;
		system ("cls");
		printf ("\t\t ================== Kelompok 11 ==================\n");
		printf ("\t\t Program Menghitung Keliling dan Luas Bangun Datar\n");
		printf ("\t\t =================================================\n\n");
		printf ("\t\t 1. Segitiga Sembarang \n");
		printf ("\t\t 2. Belah Ketupat\n");
		printf ("\t\t 3. Jajar Genjang\n");
		printf ("\t\t 4. Trapesium\n");
		printf ("\t\t 5. Lingkaran\n");
		printf ("\t\t 0. Keluar\n\n");
		printf ("\t\t =================================================\n");
		correct(&pilihan,"\t\t Pilih bangun datar yang ingin dihitung : ");
		
		if (pilihan==1){
			Segitiga_Sembarang();
		}
		else if (pilihan==2){
			Belah_Ketupat();
		}
		else if (pilihan==3){
			Jajar_Genjang();
		}
		else if (pilihan==4){
			Trapesium();
		}
		else if (pilihan==5){
			Lingkaran();
		}
		else if (pilihan==0){
			system ("cls");
			printf ("\n\t\t\t\t\t Ingin Keluar Program \n");
			printf ("\n\t\t\t\t\t ==== Tekan Enter ==== \n");
			exit(0);
		}
		else{
			system ("cls");
			printf ("\n\t\t ANGKA TIDAK VALID, Masukkan ulang! (1-5)");
		}
		printf ("\n\t\t -> Apakah Ingin Menghitung Ulang? (y/t) : "); scanf ("%s", &ulang);
	}
	while (ulang=='Y' || ulang=='y');
		printf ("\n\n\n\t\t\t ====== TERIMAKASIH ====== \n");
		printf ("\t\t\t Tekan Enter Untuk Keluar \n");
		
		return 0;
}

void Segitiga_Sembarang(){
	float s1, s2, s3, sp, kll, luas;
	
	system("cls");
	printf ("\t\t Menghitung Keliling dan Luas Segitiga Sembarang\n\n");
	printf ("\n\t\t Masukkan Panjang Sisi 1 : "); s1=validasi();
	printf ("\n\t\t Masukkan Panjang Sisi 2 : "); s2=validasi();
	printf ("\n\t\t Masukkan Panjang Sisi 3 : "); s3=validasi();

	
	kll = s1 + s2 + s3;
	sp = (s1 + s2 + s3) / 2;
	luas = sqrt (sp * (sp - s1) * (sp - s2) * (sp - s3));
	
	printf ("\n\n");
	printf ("\t\t Kelilingnya adalah : %f\n", kll);
	printf ("\t\t Luasnya adalah : %.2f\n", luas);
}

void Belah_Ketupat(){
	float sm, d1, d2, kll, luas;
	
	system("cls");
	printf ("\n\t\t Menghitung Keliling dan Luas Belah Ketupat\n\n");
	printf ("\n\t\t Masukkan Panjang Diagonal 1 : "); d1=validasi();
	printf ("\n\t\t Masukkan Panjang Diagonal 2 : "); d2=validasi();
	printf ("\n\t\t Masukkan Panjang Sisi Miring : "); sm=validasi();

	
	kll = 4*sm;
	luas = (d1*d2)/2;
	
	printf ("\n\n");
	printf ("\t\t Kelilingnya adalah : %f\n", kll);
	printf ("\t\t Luasnya adalah : %.2f\n", luas);
}

void Jajar_Genjang(){
	float s_miring, alas, tinggi, kll, luas;
	
	system("cls");
	printf ("\n\t\t Menghitung Keliling dan Luas Jajar Genjang\n\n");
	printf ("\n\t\t Masukkan Panjang Sisi Miring : "); s_miring=validasi();
	printf ("\n\t\t Masukkan Panjang Alas : "); alas=validasi();
	printf ("\n\t\t Masukkan Tinggi : "); tinggi=validasi();

	kll = 2*(alas+tinggi);
	luas = alas * tinggi;
	
	printf ("\n\n");
	printf ("\t\t Kelilingnya adalah : %f\n", kll);
	printf ("\t\t Luasnya adalah : %.2f\n", luas);
}

void Trapesium(){
	float atas, bawah, sm1, sm2, tinggi, kll, luas;
	
	system("cls");
	printf ("\n\t\t Menghitung Keliling dan Luas Trapesium\n\n");
	printf ("\n\t\t Masukkan Panjang Sisi Atas : "); atas=validasi();
	printf ("\n\t\t Masukkan Panjang Sisi Bawah : "); bawah=validasi();
	printf ("\n\t\t Masukkan Panjang Sisi Miring 1 : "); sm1=validasi();
	printf ("\n\t\t Masukkan Panjang Sisi Miring 2 : "); sm2=validasi();
	printf ("\n\t\t Masukkan Tinggi : "); tinggi=validasi();

	
	kll = atas + bawah + sm1 + sm2;
	luas = (atas + bawah) * tinggi /2;
	
	printf ("\n\n");
	printf ("\t\t Kelilingnya adalah : %f\n", kll);
	printf ("\t\t Luasnya adalah : %.2f\n", luas);
}

void Lingkaran(){
	float r, phi=3.14, luas, kll;
	
	system("cls");
	printf ("\t\t Menghitung Keliling dan Luas Lingkaran\n\n");
	printf ("\n\t\t Masukkan Panjang Jari-Jari : "); r=validasi();
	
	kll = 2 * phi * r;
	luas = phi * r * r;
	
	printf ("\n\n");
	printf ("\t\t Kelilingnya adalah : %.2f\n", kll);
	printf ("\t\t Luasnya adalah : %.2f\n", luas);
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

void correct(int *var, char *prompt){
	while(1){
		printf(prompt);
		if(check(var))
			break;
		printf("\t\t Hanya ANGKA Yang Diterima!\n");
		printf("\n");
	}
}

int validasi(){
	int angka;
    char karakter;
    scanf("%d%c", &angka, &karakter);
    if(karakter != '\n' || angka<0){
        printf("\t\t\t Hanya ANGKA Yang Diterima!\n\n");
        printf("\n\t\t Tolong Masukkan ulang Angka : ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}
