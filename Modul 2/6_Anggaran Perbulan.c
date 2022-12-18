#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int bunga2 (float p, float b, float t){
	int a; //bunga
	int k; //angsuran pokok
	int n; //angsuran perbulan
	a=p*(b/100)/12;
	k=p/t;
	n=a+k;
	return a;
}
int ap1 (float p, float b, float t){
	int a; //bunga
	int k; //angsuran pokok
	int n; //angsuran perbulan
	a=p*(b/100)/12;
	k=p/t;
	n=a+k;
	return k;
}
int ab1 (float p, float b, float t){
	int a; //bunga
	int k; //angsuran pokok
	int n; //angsuran perbulan
	a=p*(b/100)/12;
	k=p/t;
	n=a+k;
	return n;
}
int bunga3 (float p, float b, float t, int i){
	int a; //bunga
	int k; //angsuran pokok
	int n; //angsuran perbulan
	a=(p-((i-1)*k))*(b/100)/12;
	k=p/t;
	n=a+k;
	return a;
}
int ap2 (float p, float b, float t, int i){
	int a; //bunga
	int k; //angsuran pokok
	int n; //angsuran perbulan
	a=(p-((i-1)*k))*(b/100)/12;
	k=p/t;
	n=a+k;
	return k;
}
int ab2 (float p, float b, float t, int i){
	int a; //bunga
	int k; //angsuran pokok
	int n; //angsuran perbulan
	a=(p-((i-1)*k))*(b/100)/12;
	k=p/t;
	n=a+k;
	return n;
}
int tb (float p, float b, float t, int i){
	int a; //bunga
	int k; //angsuran pokok
	int n; //angsuran perbulan
	int o; //total bunga
	int s; //total angsuran
	a=(p-((i-1)*k))*(b/100)/12;
	k=p/t;
	n=a+k;
	o=a*t;
	s=n*t;
	return o;
}
int ta (float p, float b, float t, int i){
	int a; //bunga
	int k; //angsuran pokok
	int n; //angsuran perbulan
	int o; //total bunga
	int s; //total angsuran
	a=(p-((i-1)*k))*(b/100)/12;
	k=p/t;
	n=a+k;
	o=a*t;
	s=n*t;
	return s;
}

int main(){
float p, b, t, bunga, ap, ab, i, total_b, total_a;
char ulang;

	do{
	
	printf ("\n\n\t ======= Kelompok 11 =======\n");
	printf ("\t PROGRAM MENGHITUNG ANGSURAN\n");
	printf ("\t ===========================\n");
	printf ("\t Masukan Pokok Pinjaman (Rp) :"); p=validasi();
	printf ("\n\t Masukan Besar Bunga (%%) :"); b=validasi1();
	printf ("\n\t Masukan Lama Pinjaman (Bulan) :"); t=validasi2();
	printf ("\t ============================\n");
	system("cls");
	printf ("\n\t Bulan \t\t Bunga \t\t\t Angsuran Pokok \t Angsuran Perbulan\n");
	printf ("\t =================================================================================");
	
	bunga=bunga2(p, b, t);
	ap=ap1(p, b, t);//angsuran pokok
	ab=ab1(p, b, t);//angsuran perbulan
	printf ("\n\t l \t\t Rp. %.2f \t\t Rp. %.2f \t\t Rp. %.2f \t\t",bunga,ap,ab);
	
	for (i=2; i<=t; i++){
		bunga=bunga3(p, b, t, i);
		ap=ap2(p, b, t, i);
		ab=ab2(p, b, t, i);
		printf ("\n\t %.0f \t\t Rp. %.2f \t\t Rp. %.2f \t\t Rp. %.2f \t\t",i,bunga,ap,ab);
	}
	printf ("\n\t =================================================================================\n");
	
	total_b=tb(p, t, b, i); //Total Bunga
	total_a=ta(p, t, b, i); //Total Angsuran
	printf ("\t Total Bunga : Rp. %.2f\n",total_b);
	printf ("\t Total Angsuran : Rp. %.2f",total_a);
	printf ("\n\t =================================================================================\n");
	
	printf ("\n\t Apakah Ingin Menghitung Ulang? (y/t) : "); scanf ("%s", &ulang);
	}
	while (ulang=='Y' || ulang=='y');
		printf ("\n\n\n\t\t\t ====== TERIMAKASIH ====== \n");
		printf ("\t\t\t Tekan Enter Untuk Keluar \n");
	
return 0;
}

int validasi(){
	int angka;
    char karakter;
    scanf("%d%c", &angka, &karakter);
    if(karakter != '\n' || angka<0){
        printf("\t\t Hanya ANGKA Yang Diterima!\n");
        printf("\t Masukan Ulang Pokok Pinjaman : ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}
int validasi1(){
	int angka;
    char karakter;
    scanf("%d%c", &angka, &karakter);
    if(karakter != '\n' || angka<0){
        printf("\t\t Hanya ANGKA Yang Diterima!\n");
        printf("\t Masukan Ulang Besar Bunga : ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}
int validasi2(){
	int angka;
    char karakter;
    scanf("%d%c", &angka, &karakter);
    if(karakter != '\n' || angka<0){
        printf("\t\t Hanya ANGKA Yang Diterima!\n");
        printf("\t Masukan Ulang Lama Pinjaman : ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}
