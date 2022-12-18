#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

void insertionSort(int arr[], int n);
void bubbleSort(int arr[], int n);
void quickSort(int arr[], int low, int high);
float countInsertionSort(int arr[], int n);
float countBubbleSort(int arr[], int n);
float countQuickSort(int arr[],int n);
float countSequentialSearch(int arr[],int n,int angka);
float countBinarySearch(int arr[],int n,int angka);
int sequentialSearch(int arr[],int n,int angka);
int binarySearch(int arr[],int low,int high, int angka);
int partition (int arr[], int low, int high);
void printArray(int arr[], int n);
void seedArray(int arr[],int n);
void menu();
void menu2(int arr[],int n);
void reset();
double validasi();
void dupArray(int source[],int target[], int n);
void hapus_buffer();

int main(){
	printf("\t======= Kelompok 11 =======\n");
	printf("\tPROGRAM SORTING & SEARCHING\n");
	printf("\t===========================\n");
    menu();
    return 0;
}
void menu(){
    int pilihan;
    int cek;
    int n;
    
    printf("\n\t     Pilih Banyak Data    \n");
    printf("\t===========================\n");
    printf ("\t1. 1000\n");
    printf ("\t2. 16000\n");
    printf ("\t3. 64000\n");
    printf ("\t4. Keluar Program\n");
    printf ("\t===========================\n");
    printf ("\tMasukan Pilihan : \a");
    pilihan = validasi();
    system("cls");
    cek = pilihan;
    if (cek == pilihan){
        if (pilihan>3 || pilihan < 1){
                if (pilihan == 4){
                	printf ("\n\tTekan ENTER Untuk Keluar");
                        return;
                } else {
                    system("cls");
                    printf("Tidak Ada Pilihan!!!\n");
                    menu();
                }
        } else {
            switch ((int)pilihan)
            {
                case 1: 
                    n = 1000;
                    break;
                case 2: ;
                    n = 16000;
                    break;
                case 3: ;
                    n = 100000;
                    break;
            }
        }
        
        int arr[n];
        seedArray(arr,n);
        menu2(arr,n);
    } else {
        system("cls");
        printf("\tSalah Inputan!\n");
        menu();
    }
}

void menu2(int arr[],int n){
    float pilihan;
    int cek;
    float detik1,detik2,detik3;
    int angka;
    int arr2[n];
    int arr3[n];
    printf ("\n\t===========================\n");
    printf("\t        Pilih Metode     \n");
    printf ("\t===========================\n");
    printf ("\t1. Sorting (Insertion Sort, Bubble Sort, Quick Sort)\n");
    printf ("\t2. Searching (Sequential Search, Binary Search)\n");
    printf ("\t===========================\n");
    printf ("\tMasukan Pilihan : ");
    pilihan = validasi();
    printf ("\n\t===========================\n\n");
    system("cls");
    cek = pilihan;
    if (cek == pilihan){
        if (pilihan>2 || pilihan < 1){
                    system("cls");
                    printf("\tTidak Ada Pilihan!\n");
                    menu();
                
        } else {
            printf("\tArray %d data random sebelum di sorting :\n\n");
            printArray(arr,n);
            if(pilihan ==2){
                printf("\n\tMasukkan angka yang dicari : ");
                angka = validasi();
            }
            dupArray(arr,arr2,n);
            dupArray(arr,arr3,n);
            switch ((int)pilihan)
            {
                case 1:
                    detik1 = countInsertionSort(arr,n);
                    detik2 = countBubbleSort(arr2,n);
                    detik3 = countQuickSort(arr3,n);
                    break;
                case 2:
                    detik1 = countSequentialSearch(arr,n,angka);
                    detik2 = countBinarySearch(arr2,n,angka);
                    break;
            }
        }

        if(pilihan == 1){
            printf("\n\tArray %d data random sesudah di sorting :\n\n");
            printArray(arr2,n);
            printf ("\n\tWaktu Insertion Sort : %lf\n",detik1);
            printf("\tWaktu Bubble Sort : %lf",detik2);
            printf("\n\tWaktu Quick Sort : %lf\n",detik3);
        } else if(pilihan == 2) {
            printf("\n\tWaktu Sequential Search : %lf\n",detik1);
            printf ("\tWaktu Binary Search :%lf",detik2);
        }
        reset();
    } else {
        system("cls");
        printf("\tSalah Inputan!\n");
        menu();
    }
}

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void bubbleSort(int arr[], int n){
    int i, j,temp;
    for (i = 0; i < n-1; i++)      
         for (j = 0; j < n-i-1; j++) 
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
    }
}

int sequentialSearch(int arr[],int n,int angka){
	int i;
    for(i = 0; i < n ; i++){
        if(arr [i] == angka){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[],int low,int high, int angka){
    bool inArray;
    if (high >= low)
    {
        int mid = low + (high - low)/2;
        if (arr[mid] == angka)  
            return mid;
        if (arr[mid] > angka) 
            return binarySearch(arr, low, mid-1, angka);
        return binarySearch(arr, mid+1, high, angka);
   }
   return -1;
}
void quickSort(int arr[], int low, int high){
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

float countInsertionSort(int arr[],int n){
    clock_t start = clock();
    insertionSort(arr,n);
    clock_t end = clock();
    float detik = (float)(end - start) / CLOCKS_PER_SEC;
    return detik;
}

float countBubbleSort(int arr[],int n){
    clock_t start = clock();
    bubbleSort(arr,n);
    clock_t end = clock();
    float detik = (float)(end - start) / CLOCKS_PER_SEC;
    return detik;
}

float countQuickSort(int arr[],int n){
    clock_t start = clock();
    quickSort(arr,0,n-1);
    clock_t end = clock();
    float detik = (float)(end - start) / CLOCKS_PER_SEC;
    return detik;
}

float countSequentialSearch(int arr[],int n,int angka){
    int inArray;
    clock_t start = clock();
    inArray = sequentialSearch(arr,n,angka);
    clock_t end = clock();
    float detik = (float)(end - start) / CLOCKS_PER_SEC;
    if(inArray == -1){
        printf("\tSequential Search : Angka %d tidak terdapat di array\n",angka); 
    } else {
        printf("\tSequential Search : Angka %d berada di array di indeks ke %d",angka,inArray);    
    }
    return detik;
}

float countBinarySearch(int arr[],int n,int angka){
    int inArray;
    quickSort(arr,0,n-1);
    clock_t start = clock();
    inArray = binarySearch(arr,0,n-1,angka);
    clock_t end = clock();
    float detik = (float)(end - start) / CLOCKS_PER_SEC;
    if(inArray == -1){
        printf("\tBinary Search : Angka %d tidak terdapat di array\n",angka);  
    } else {
        printf("\n\tBinary Search : Angka %d berada di aray di indeks ke %d\n",angka,inArray);    
    }
    return detik;
}

void seedArray(int arr[],int n){
	int i;
    srand(0);
    for (i = 0; i < n ; i++)
        arr[i] = rand();
}

int partition (int arr[], int low, int high){
    int pivot = arr[high];    
    int temp;
    int i = (low - 1);  
	int j;
    for (j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;    
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void printArray(int arr[], int n){
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}

double validasi(){
    double angka;
    char karakter;
    if (scanf("%lf%c",&angka,&karakter)!= 2 || angka<=0 || karakter != '\n' || karakter == ','){
        hapus_buffer();
        printf("\n\t\t Hanya ANGKA Yang Diterima!\n");
        printf("\t Masukan Ulang Angka : ");
        return validasi();
    } else {
        return angka;
    }
}

void dupArray(int source[],int target[], int n){
	int i;
    for(i = 0; i < n ; i++)
        target[i] = source[i];
}

void hapus_buffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) ; 
}

void reset(){
    int valid_reset;
    char parameter[1];
    printf("\n\n\tApakah Ingin Menghitung Ulang?(Y/T) : ");
    gets(parameter);
    if (!(strcmp(parameter,"Y")) || !(strcmp(parameter,"y"))){
        system("cls");
        menu();
    } else if (!(strcmp(parameter,"T")) || !(strcmp(parameter,"t"))){
    	printf ("\n\n\t        TERIMAKASIH");
    	printf ("\n\tTekan ENTER Untuk Keluar Program");
        return;
    } else {
        system("cls");
        printf("\tSalah Inputan! Hanya Huruf Y / T \a");
        reset();
    }
}

