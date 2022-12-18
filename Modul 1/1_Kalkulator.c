#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>



int main() {
int pilih;

 int menu ();
 system("cls");
    printf("\n");
    printf("    |===========================================================|\n");
    printf("    |----------------------  KELOMPOK 11  ----------------------|\n");
    printf("    |               {PROGRAM KALKULATOR SEDERHANA}             	|\n");
    printf("    |===========================================================|\n");
    printf("    |   |  [1]. Penjumlahan  |                                  |\n");
    printf("    |   |  [2]. Pengurangan  |                                  |\n");
    printf("    |   |  [3]. Perkalian    |                                  |\n");
    printf("    |   |  [4]. Pembagian    |                                  |\n");
    printf("    |	|  [5]. Modulus      |                                  |\n");		
    printf("    |   |  [6]. keluar       |                                  |\n");
    printf("    |===========================================================|\n");
    printf("     Masukkan pilihan operator [1][2][3][4][5][6]  : "); pilih = validasi ();
    
    switch (pilih){
    case 1:
    	pertambahan();
    	break;

    case 2:
    	pengurangan();
    	break;
	
	case 3:
		perkalian();
		break;
	
	case 4:
		pembagian();
		break ;
	
	case 5:
		modulus();
		break;
	 
	case 6:
		keluar();
		
	default:
			printf("\n\n    |==========================================================|\n");
			printf("    |                                                          |\n");
			printf("    |                  OPERATOR TIDAK TERSEDIA                 |\n");
			printf("    |                                                          |\n");
			printf("    |==========================================================|\n");
	}
}
		



int pertambahan(){
int x, y, hasil;
char ulang;
 system("cls");
	printf("  |-------------------------------------------------------|\n");
 	printf("  |                                                       |\n");
	printf("  |               P E R T A M B A H A N                   |\n");
	printf("  |                                                       |\n");
	printf("  |-------------------------------------------------------|\n");
    printf("   Masukkan bilangan pertama : "); x = validasi ();
    printf("\n   Masukkan bilangan kedua   : "); y= validasi ();
    
    hasil=x+y;
    
	printf("\n   -------------------------------- +\n");
    printf("   Hasil                    : %.d\n",hasil);
    
    lanjut();
    
	printf("\n\n|============================================================|\n");
	printf("|                                                            |\n");
	printf("|                          U L A N G                         |\n");
	printf("|------------------------------------------------------------|\n");
	printf("|                                                            |\n");
	printf("|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("|                                                            |\n");
	printf("|                             (Y/T)                          |\n");
	printf("|                                                            |\n");
	printf("|============================================================|\n\n");
	printf(" MASUKKAN PIIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n|==========================================================|\n");
			printf("|                                                          |\n");
			printf("|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("|                                                          |\n");
			printf("|                 T E R I M A   K A S I H                  |\n");
			printf("|                                                          |\n");
			printf("|==========================================================|\n");
		exit;   
	}else {
		exit;
	}

}


int pengurangan (){
int x, y, hasil;
char ulang;
 system("cls");
	printf("  |-------------------------------------------------------|\n");
 	printf("  |                                                       |\n");
	printf("  |                P E N G U R A N G A N                  |\n");
	printf("  |                                                       |\n");
	printf("  |-------------------------------------------------------|\n");
    printf("   Masukkan bilangan pertama : "); x = validasi ();
    printf("\n   Masukkan bilangan kedua   : "); y = validasi ();
    
    hasil=x-y;
    
	printf("\n   -------------------------------- -\n");
    printf("   Hasil                    : %.d\n",hasil);
    
    lanjut();
    
	printf("\n\n|============================================================|\n");
	printf("|                                                            |\n");
	printf("|                          U L A N G                         |\n");
	printf("|------------------------------------------------------------|\n");
	printf("|                                                            |\n");
	printf("|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("|                                                            |\n");
	printf("|                             (Y/T)                          |\n");
	printf("|                                                            |\n");
	printf("|============================================================|\n\n");
	printf(" MASUKKAN PIIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n|==========================================================|\n");
			printf("|                                                          |\n");
			printf("|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("|                                                          |\n");
			printf("|                 T E R I M A   K A S I H                  |\n");
			printf("|                                                          |\n");
			printf("|==========================================================|\n");
		exit;   
	}else {
		exit;
	}
	
	return 0;
}


int perkalian (){
int x, y, hasil;
char ulang;
 system("cls");
	printf("  |-------------------------------------------------------|\n");
 	printf("  |                                                       |\n");
	printf("  |                  P E R K A L I A N                    |\n");
	printf("  |                                                       |\n");
	printf("  |-------------------------------------------------------|\n");
    printf("   Masukkan bilangan pertama : "); x = validasi ();
    printf("\n   Masukkan bilangan kedua   : "); y = validasi ();
    
    hasil=x*y;
    
	printf("\n   -------------------------------- x\n");
    printf("   Hasil                    : %.d\n",hasil);
    
    lanjut();
    
	printf("\n\n|============================================================|\n");
	printf("|                                                            |\n");
	printf("|                          U L A N G                         |\n");
	printf("|------------------------------------------------------------|\n");
	printf("|                                                            |\n");
	printf("|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("|                                                            |\n");
	printf("|                             (Y/T)                          |\n");
	printf("|                                                            |\n");
	printf("|============================================================|\n\n");
	printf(" MASUKKAN PIIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n|==========================================================|\n");
			printf("|                                                          |\n");
			printf("|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("|                                                          |\n");
			printf("|                 T E R I M A   K A S I H                  |\n");
			printf("|                                                          |\n");
			printf("|==========================================================|\n");
		exit;   
	}else {
		exit;
	}
	
	return 0;
}

int pembagian(){
int x, y, hasil;
char ulang;
 system("cls");
	printf("  |-------------------------------------------------------|\n");
 	printf("  |                                                       |\n");
	printf("  |                    P E M B A G I A N                  |\n");
	printf("  |                                                       |\n");
	printf("  |-------------------------------------------------------|\n");
    printf("   Masukkan bilangan pertama : "); x = validasi ();
    printf("\n   Masukkan bilangan kedua   : "); y= validasi ();
    
    hasil=x/y;
    
	printf("\n   -------------------------------- /\n");
    printf("   Hasil                    : %.d\n",hasil);
    
    lanjut();
    
	printf("\n\n|============================================================|\n");
	printf("|                                                            |\n");
	printf("|                          U L A N G                         |\n");
	printf("|------------------------------------------------------------|\n");
	printf("|                                                            |\n");
	printf("|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("|                                                            |\n");
	printf("|                             (Y/T)                          |\n");
	printf("|                                                            |\n");
	printf("|============================================================|\n\n");
	printf(" MASUKKAN PIIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n|==========================================================|\n");
			printf("|                                                          |\n");
			printf("|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("|                                                          |\n");
			printf("|                 T E R I M A   K A S I H                  |\n");
			printf("|                                                          |\n");
			printf("|==========================================================|\n");
		exit;   
	}else {
		exit;
	}
	
	return 0;
}

int modulus(){
int x, y, hasil;
char ulang;
 system("cls");
	printf("  |-------------------------------------------------------|\n");
 	printf("  |                                                       |\n");
	printf("  |                      M O D U L U S                    |\n");
	printf("  |                                                       |\n");
	printf("  |-------------------------------------------------------|\n");
    printf("   Masukkan bilangan pertama : "); x= validasi ();
    printf("\n   Masukkan bilangan kedua   : "); y = validasi ();
    
    hasil=x%y;
    
	printf("\n   -------------------------------- %\n");
    printf("   Hasil                    : %.d\n",hasil);
    
    lanjut();
    
	printf("\n\n|============================================================|\n");
	printf("|                                                            |\n");
	printf("|                          U L A N G                         |\n");
	printf("|------------------------------------------------------------|\n");
	printf("|                                                            |\n");
	printf("|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("|                                                            |\n");
	printf("|                             (Y/T)                          |\n");
	printf("|                                                            |\n");
	printf("|============================================================|\n\n");
	printf(" MASUKKAN PIIHAN ANDA	: ");
    scanf("%s",&ulang);
    
    if (ulang== 'Y' || ulang == 'y'){
    	main();
	}else if (ulang == 'T' ||ulang == 't'){
			printf("\n\n|==========================================================|\n");
			printf("|                                                          |\n");
			printf("|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("|                                                          |\n");
			printf("|                 T E R I M A   K A S I H                  |\n");
			printf("|                                                          |\n");
			printf("|==========================================================|\n");
		exit;   
	}else {
		exit;
	}
	
	return 0;
}

int keluar(){

system ("cls");
printf("\n\n\n    |============================================================|\n");
printf("    |                                                            |\n");
printf("    |                       K E L U A R                          |\n");
printf("    |------------------------------------------------------------|\n");
printf("    |                                                            |\n");
printf("    |            TEKAN ENTER UNTUK KELUAR DARI PROGRAM           |\n");
printf("    |                                                            |\n");
printf("    |------------------------------------------------------------|\n");
printf("    |                   T E R I M A  K A S I H                   |\n");
printf("    |============================================================|\n\n");

exit(0);

}

int lanjut(){
    printf("\n klik enter untuk ke halaman berikutnya...");
    getchar();
    system("cls");
}

void correct(int *var, char *prompt);
  
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

//Validasi Inputan Bilangan
void correct(int *var, char *prompt){
	while(1){
		printf(prompt);
		if(check(var))
			break;
		printf("\n\n   INPUT HANYA BERUPA BILANGAN!\n");
		printf("\n");
	}
}

int validasi(){
	int angka;
    char karakter;
    scanf("%d%c", &angka, &karakter);
    if(karakter != '\n' || angka<0){
        printf("\n\n   INPUT HANYA BERUPA BILANGAN!\n\n");
        printf("   Masukkan ulang Bilangan : ");
        fflush(stdin);
        validasi();
    }
	else{
        return angka;
    }
}
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	

	

   






