#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int validInt(int *var){
	char buff[1020];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
}
void reVldInt(int *var, char *prompt){
	while(1){
		printf(prompt);
		if(validInt(var)) {
			break;
		}
		printf("Input hanya boleh  berupa angka!! \n");
		printf("\n");
	}
}

void satu ();
void dua ();

int main () {
int pilih;

do {
system("cls");
printf("+================================+\n");
printf("|    ==Program Konversi Biner==  |\n");
printf("+================================+\n");

printf("|==> MENU PILIHAN <==  |\n");
printf("|======================|\n");
printf("| 1 . Desimal ke Biner |\n");
printf("| 2 . Biner ke Desimal |\n");
printf("|======================|\n \n");

reVldInt(&pilih, "Input pilihan anda (1/2)  : ");
fflush(stdin);

if (pilih==1){
		satu();
	}
else if (pilih==2){
		dua();
	}
else{
		printf("Input yang anda masukkan salah, Input hanya angka 1/2 ");
	}

printf ("\nApakah anda ingin mengulang kembali? (Y/T): "); scanf (" %c", &pilih);
} while (pilih == 'y' || pilih == 'Y');
 if (pilih== 'T' || pilih == 't'){
    printf("\n=============================================\n");
 	printf("   Terima kasih telah menggunakan program ini    ");
 	printf("\n=============================================\n");
 }

return 0;

}

void satu ()

{
int bil,hasil=0,i=0;
reVldInt(&bil, "Masukkan Bilangan Desimal : ");
fflush(stdin);

while(bil>0){
hasil+=bil%2*(int)pow(10,i);
bil/=2;
i++;

}
printf("Bilangan Binernya Adalah  : %d\n \n",hasil);
}	


void dua ()
{
int biner,desimal,dua;
dua=1;
desimal=0;
reVldInt(&biner, "Masukkan Bilangan Biner   : ");
fflush(stdin);

do{
desimal+=(biner%2)*dua;
dua*=2;
biner/=10;

}while (biner);
printf("Bilangan Desimalnya adalah: %d\n \n",desimal);

}


