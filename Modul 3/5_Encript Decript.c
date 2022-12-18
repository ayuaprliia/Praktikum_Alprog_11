#include <stdio.h>
#include <stdlib.h>

int enkripsi();
int dekripsi();
void header();
void reinpt();
void rangeVldIntMenu();
void rangeVldIntKey();
void rangeVldIntReinp();


int main(){

	int input;
	header();
	printf("\n\t\t\tPilihlah operasi yang ingin dijalankan:  \n");
	printf("\t\t\t1. Enkripsi                         \n");
	printf("\t\t\t2. Dekripsi                        \n");
	printf("\t\t\t3. Keluar                           \n");
	rangeVldIntMenu(&input, "\n\t\t\tInput pilihan anda : ");

	header();
	switch(input){
        case 1:
            enkripsi();
        	break;
        case 2:
            dekripsi();
            break;
        case 3:
            exit(0);
    }
    reinpt();
	return(0);
}


int enkripsi(){
	char s[100];
	int i, key;
	printf("\n\t\t\tMasukkan text yang akan di enkripsi : ");
	gets(s);
	rangeVldIntKey(&key, "\n\t\t\tMasukkan jumlah pergeseran : ");

	for(i = 0; s[i] != '\0'; ++i){
		if(s[i] >= 'A' && s[i] <= 'Z') {
        	s[i] = s[i] + 32;
      	}

		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] = s[i] + key;
			if(s[i] > 'z'){
				s[i] = s[i] - 26;
			}
			s[i] = s[i] -32;
		}
	}

	printf("\n\t\t\tHasil Enkripsi : %s", s);
	return 0;
}

int dekripsi(){
	char s[100];
	int i, key;
	printf("\n\t\t\tMasukkan Pesan yang akan di dekripsi: ");
	gets(s);
	rangeVldIntKey(&key, "\n\t\t\tMasukkan jumlah pergeseran : ");

	for(i = 0; s[i] != '\0'; ++i){
		if(s[i] >= 'a' && s[i] <= 'z') {
        	s[i] = s[i] - 32;
      	}

		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] = s[i] - key;
			if(s[i] < 'A'){
				s[i] = s[i] + 26;
			}
			s[i] = s[i] +32;
		}
	}

	printf("\n\t\t\tHasil Dekripsi : %s", s);
	return 0;
}

void header(){
    system("cls");
    printf("\n\t\t\t\t========================================="        );
    printf("\n\t\t\t\t     Program Enkripsi dan Dekripsi"              );
    printf("\n\t\t\t\t========================================="        );
}

void reinpt(){
    int pilih;
    int n;
    printf("\n\n\t\t\t================================================\n");
    printf("\n\t\t\tApakah anda ingin mengulang ?");
    printf("\n\t\t\t1. Kembali ke Menu\n");
    printf("\t\t\t2. Keluar Dari Program\n");
    rangeVldIntReinp(&pilih, "\n\t\t\tInput Pilihan = ");
    if(pilih == 1){
        system("cls");
        main();
    }else if(pilih == 2){
    	system("cls");
        exit(0);
    }
}

int validInt(int *var){
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

void reVldInt(int *var, char *kalimat){
	while(1){
		printf(kalimat);
		if(validInt(var))
			break;
		printf("\t\t\tInput salah! Masukkan Angka.\n");
	}
}

void rangeVldIntMenu(int *var, char *kalimat){
	while(1){
		reVldInt(var, kalimat);
		if(*var >=0 && *var <=3)
			break;
		printf("\t\t\tInput salah! Hanya Pilih 1, 2 atau 3.\n");
	}
}

void rangeVldIntKey(int *var, char *kalimat){
	while(1){
		reVldInt(var, kalimat);
		if(*var >0)
			break;
		printf("\t\t\tInput salah! Masukkan angka lebih dari 0\n");
	}
}

void rangeVldIntReinp(int *var, char *kalimat){
	while(1){
		reVldInt(var, kalimat);
		if(*var == 1 || *var == 2)
			break;
		printf("\t\t\tInput salah! Hanya Pilih 1 atau 2.\n");
	}
}
