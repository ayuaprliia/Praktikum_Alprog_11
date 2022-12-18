#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct mahasiswa{
    char nama[100];
    int nilai;
} Mahasiswa;

int getMahasiswa(Mahasiswa mahasiswa[]);
void bubbleSort(Mahasiswa mahasiswa[], int i);
void putToFile(Mahasiswa mahasiswa[], int i);

int main(){
    printf("================================================\n");
	printf("||    PROGRAM MENGHITUNG RANKING MAHASISWA    ||\n");
	printf("||               Kelompok 11                  ||\n");
	printf("================================================\n");
    FILE * fr;
    int count;
    int i;
    Mahasiswa *mahasiswa = malloc( sizeof(Mahasiswa) * (100) );
    fr = fopen("C:/Users/ASUS/OneDrive/Documents/asistenmahasiswa.txt","r");
    if(fr == NULL){
        printf("Data asistenin.txt belum ada!");
        return 0;
    }
    count = getMahasiswa(mahasiswa);
    printf("Data pada file asistenin.txt :\n");
    for( i = 0;i < count; i++)
        printf("%s %d\n",mahasiswa[i].nama,mahasiswa[i].nilai);
    bubbleSort(mahasiswa,count);
    putToFile(mahasiswa,count);
    printf("\nData hasil sorting :\n");
    for( i = 0;i < count; i++)
        printf("%s %d\n",mahasiswa[i].nama,mahasiswa[i].nilai);
    printf("\nData hasil sorting berhasil disimpan ke dalam file asistenout.txt!");
    return 0;
}

int getMahasiswa(Mahasiswa mahasiswa[]){
    int len = 0;
    FILE * fr;
    fr = fopen("C:/Users/ASUS/OneDrive/Documents/asistenmahasiswa.txt","r");
    Mahasiswa myMahasiswa;
    char nilai[5];
    while(fgets(myMahasiswa.nama,100,fr)){
            int stringLength = strlen(myMahasiswa.nama);
            myMahasiswa.nama[stringLength - 1] = '\0';
            fgets(nilai,5,fr);
            stringLength = strlen(nilai);
            nilai[stringLength - 1] = '\0';            
            myMahasiswa.nilai = atoi(nilai);
            mahasiswa[len] = myMahasiswa;
            len++;
        }
        fclose(fr);
    return len;
} 

void bubbleSort(Mahasiswa mahasiswa[], int n){
    int i, j;
    Mahasiswa temp;
    for (i = 0; i < n-1; i++)      
         for (j = 0; j < n-i-1; j++) 
            if (mahasiswa[j].nilai < mahasiswa[j+1].nilai){
                temp = mahasiswa[j];
                mahasiswa[j] = mahasiswa[j+1];
                mahasiswa[j+1] = temp;
    }
}

void putToFile(Mahasiswa mahasiswa[], int n){
	int i;
    FILE * fw;
    FILE * fa;
    fw = fopen("C:/Users/ASUS/OneDrive/Documents/asistenmahasiswa.txt","w");
    fa = fopen("C:/Users/ASUS/OneDrive/Documents/asistenout.txt","a+");
    char *hasil = malloc( sizeof(char) * (100) );
    fprintf(fw,"%s\n","Nilai Mata Kuliah Algoritma dan Pemrograman ");
    for ( i = 0; i < n-1; i++){
        sprintf(hasil,"%d. %s %d\n",i+1,mahasiswa[i].nama,mahasiswa[i].nilai);
        fprintf(fa,"%s",hasil);                 //print ke file
    }      
    fclose(fw);
    fclose(fa);
    return;
}