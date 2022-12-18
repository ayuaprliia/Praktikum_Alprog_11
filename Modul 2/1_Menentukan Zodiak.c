#include <stdio.h>
#include <string.h>

int zodiak();
int lanjut();
int ulang();

int main(){
	system("cls");
	printf("\n\t==================================================================");
	printf("\n\t||                   PROGRAM PENENTU ZODIAK                     ||");
	printf("\n\t||--------------------K E L O M P O K  11-----------------------||");
	printf("\n\t||--------------------------------------------------------------||");
	printf("\n\t||  NO |      NIM       |                   NAMA                ||");
	printf("\n\t||--------------------------------------------------------------||");
	printf("\n\t|| [1] |   2205551021   | Ni Made Nadya Dewindra Wirata         ||");
	printf("\n\t|| [2] |   2205551030   | Komang Ayu Agung Arya Aprilia         ||");
	printf("\n\t|| [3] |   2205551111   | I Made Indra Udayana Wiguna           ||");
	printf("\n\t|| [4] |   2205551118   | Fransiskus Xaverius Dolle             ||");
	printf("\n\t|| [5] |   2205551140   | Ida  Ayu Dyah Diwya Paramita          ||");
	printf("\n\t|| [6] |   2205551149   | Laksmi Putri Kusuma                   ||");
	printf("\n\t==================================================================");

	lanjut();
	zodiak();
	
	return 0;
}

int zodiak(){
	int tanggal, bulan;
	char nama[50];
	printf("\n\t==============================================================");
	printf("\n\t||       MENENTUKAN ZODIAK BERDASARKAN TANGGAL LAHIR        ||");
	printf("\n\t``````````````````````````````````````````````````````````````");
	printf("\n\t||               S E L A M A T  D A T A N G                 ||");
	printf("\n\t==============================================================");
	printf("\n\t  MASUKKAN NAMA ANDA                        : ");
	scanf("%s", nama);
	printf("\n\t  MASUKKAN TANGGAL LAHIR ANDA               : ");
		while (scanf("%d", &tanggal)==0 || tanggal < 1 || tanggal > 31){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t   Mohon inputkan tanggal yang benar!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t   MASUKKAN TANGGAL LAHIR ANDA          :");
        while(tanggal=getchar() != '\n');
    }
	printf("\n\t  MASUKKAN BULAN LAHIR ANDA (BERUPA ANGKA)  : ");
		while (scanf("%d", &bulan)==0 || bulan < 1 || bulan > 12){
		printf("\n\t----------------------------------------------\n");
        printf("\n\t   input hanya berupa angka (1-12)!\n");
        printf("\n\t----------------------------------------------\n");
        printf("\n\t   MASUKKAN BULAN LAHIR ANDA            :");
		while(bulan=getchar() != '\n');
	}
	printf("\n\t==============================================================");
	
		system ("cls");
		
		if (tanggal >=21 && tanggal<=31 && bulan==3 || tanggal >=1 && tanggal <20 && bulan==4  ){
		printf("\n\t==============================================================================");
		printf("\n\t||                               A R I E S                                  ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah ARIES                                                   ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak aries cenderung memiliki karakter yang energik, suka     ");
		printf("\n\t berkompetisi, dan memiliki rasa sosial yang tinggi. Kelebihan dari zodiak    ");
		printf("\n\t ini adalah memiliki sifat yang berani, gigih, optimis, jujur, dan semangat   ");
		printf("\n\t Namun, kelemahannya adalah mudah marah, tidak sabaran, dan agresif.          ");
		printf("\n\t==============================================================================");
		lanjut();
		ulang ();
	
		}else if(tanggal >=20 && tanggal <31 && bulan==4 || tanggal>=1 && tanggal <21 && bulan==5){
		printf("\n\t==============================================================================");
		printf("\n\t||                           T A U R U S                                   ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah TAURUS                                                 ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak taurus biasanya suka bekerja keras dan bisa diandalkan.  ");
		printf("\n\t Kelebihan dari orang yang berzodiak taurus adalah sabar, praktis, berbakti,  ");
		printf("\n\t bertanggung jawab, dan stabil. Namun, kelemahan dari zodiak ini adalah       ");
		printf("\n\t memiliki sifat keras kepala, posesif, dan tanpa kompromi.                    ");
		printf("\n\t==============================================================================");
		lanjut();
		ulang();
	
		}else if (tanggal>=21 && tanggal <=31 && bulan==5 || tanggal>=1 && tanggal <21 && bulan==6){
		printf("\n\t==============================================================================");
		printf("\n\t||                               G E M I N I                                ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah GEMINI                                                 ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak gemini cenderung ekspresif, cerdas, dan mudah bergaul.   ");
		printf("\n\t kekuatan dari orang berzodiak gemini adalah memiliki sifat lembut, penuh     ");
		printf("\n\t kasih sayang, mudah beradaptasi, dan mudah belajar. Kelemahannya adalah      ");
		printf("\n\t mudah gugup, tidak konsisten, dan ragu-ragu.                                 ");
		printf("\n\t==============================================================================");
		lanjut();		
		ulang();
	
		}else if (tanggal >=21 && tanggal<31 && bulan==6 || tanggal>=1 && tanggal <23 && bulan==7){
		printf("\n\t==============================================================================");
		printf("\n\t||                            C A N C E R                                   ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah CANCER                                                 ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak cancer biasanya memiliki sifat yang perasa dan sensitif. ");
		printf("\n\t Mereka dikenal sebagai pribadi yang peduli dengan keluarga. Kelebihan dari   ");
		printf("\n\t orang berzodiak cancer adalah ulet, imajinatif, setia, dan empatik. Namun,   ");
		printf("\n\t kelemahan dari zodiak ini adalah moody, pesimistik, dan manipulatif          ");
		printf("\n\t==============================================================================");
		lanjut();
		ulang();
		
		}else if (tanggal>=23 && tanggal <=31 && bulan==7 || tanggal>=1 && tanggal <23 && bulan==8){
		printf("\n\t==============================================================================");
		printf("\n\t||                                  L E O                                  ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah LEO                                                    ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak leo biasanya memiliki jiwa kepemimpinan yang cukup tinggi");
		printf("\n\t dan mereka juga memiliki sifat yang dominan dibanding orang lain. Kelebihan  ");
		printf("\n\t dari orang berzodiak leo adalah memiliki sifat setia, kreatif, ramah, kreatif");
		printf("\n\t dan inovatif. Kelemahannya adalah egois, sombong, malas, dan keras kepala.   ");
		printf("\n\t==============================================================================");
		lanjut();	
		ulang();
	
		}else if(tanggal>=23 && tanggal <=31 && bulan ==8 || tanggal>=1 && tanggal<23 && bulan==9){
		printf("\n\t==============================================================================");
		printf("\n\t||                               V I R G O                                  ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah VIRGO                                                  ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak virgo dikenal sebahai pribadi yang mendetail dan teliti. ");
		printf("\n\t Mereka juga dikenal sebagai pribdi yang agak tertutup dengan hati yang lembut.");
		printf("\n\t Kelebihan dari zodiak ini adalah loyal, berpikir kritis, dan pekerja keras.   ");
		printf("\n\t Kelemahannya adalah pemalu, terlalu kritis pada diri sendiri dan orang lain.  ");
		printf("\n\t===============================================================================");
		lanjut();	
		ulang();
	
		}else if(tanggal>=23 && tanggal <31 && bulan ==9 || tanggal>=1 && tanggal<23 && bulan==10){
		printf("\n\t==============================================================================");
		printf("\n\t||                                L I B R A                                 ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah LIBRA                                                  ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak libra biasanya bersifat adil, benci sendirian, dan cinta ");
		printf("\n\t kedamaian. Mereka cenderung menghindari konflik. Kelebihan dari zodiak ini   ");
		printf("\n\t adalah memiliki sifat kooperatif, ramah, berjiwa sosial, dan adil. Kelemahan ");
		printf("\n\t yang dimiliki zodiak ini adalah tidak tegas dan pendendam.                   ");
		printf("\n\t==============================================================================");
		lanjut();	
		ulang();
	
		}else if(tanggal>=23 && tanggal <=31 && bulan==10 || tanggal>=1 && tanggal<22 && bulan==11){
		printf("\n\t==============================================================================");
		printf("\n\t||                            S C O R P I O                                 ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah SCORPIO                                                ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak scorpio memiliki karakter yang tegas, bersemangat, dan   ");
		printf("\n\t memiliki banyak akal serta tidak takut tantangan. Kelebihan dari zodiak ini  ");
		printf("\n\t adalah memiliki banyak akal, pemberani, tegas, dan dapat menjadi teman sejati");
		printf("\n\t Namun, kelemahannya adalah tidak percayaan, cemburuan, dan tertutup.         ");
		printf("\n\t==============================================================================");
		lanjut();	
		ulang();
	
		}else if (tanggal>=22 && tanggal <31 && bulan==11 || tanggal>=1 && tanggal<22 && bulan==12){
		printf("\n\t==============================================================================");
		printf("\n\t||                         S A G I T A R I U S                              ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah SAGITARIUS                                             ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak sagitarius biasanya memiliki sifat terbuka, sangat suka  ");
		printf("\n\t berpetualang, optimis, dan semangat menjalani keseharian. Kelebihan zodiak   ");
		printf("\n\t ini adalah memiliki sifat dermawan, idelaistis, dan humoris. Kelemahannya    ");
		printf("\n\t adalah sangat tidak sabaran, berbuat tanpa berpikir panjang.                 ");
		printf("\n\t==============================================================================");
		lanjut();	
		ulang();
	
		}else if(tanggal>=22 && tanggal <=31 && bulan==12 || tanggal>=1 && tanggal<20 && bulan==1){
		printf("\n\t==============================================================================");
		printf("\n\t||                            C A P R I C O R N                             ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah CAPRICORN                                              ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak capricorn biasanya sangat bertanggug jawab, serius, dan  ");
		printf("\n\t bisa mengendalikan diri dengan baik. Kelebihan dari zodiak ini adalah punya  ");
		printf("\n\t sifat yang realistis, disiplin, dan bertanggung jawab. Kelemahan zodiak ini  ");
		printf("\n\t adalah tidak mudah memaafkan, suka merendahkan orang lain, dan pesimistis.   ");
		printf("\n\t==============================================================================");
		lanjut();	
		ulang();
	
		}else if(tanggal>=20 && tanggal <=31 && bulan==1 || tanggal>=1 && tanggal<19 && bulan==2){
		printf("\n\t==============================================================================");
		printf("\n\t||                             A Q U A R I U S                              ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah AQUARIUS                                               ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak aquarius biasanya merasa dirinya paling istimewa, punya  ");
		printf("\n\t sifat energik, suka kebebasan, dan suka mengekspresikan perasaannya. Orang   ");
		printf("\n\t dengan zodiak ini memiliki kelebihan yaitu mandiri dan memiliki rasa sosial  ");
		printf("\n\t yang tinggi. kelemahannya adalah emosional, tempramen, dan suka menyendiri.  ");
		printf("\n\t==============================================================================");
		lanjut();	
		ulang();
	
		}else if(tanggal>=19 && tanggal <30 && bulan==2 || tanggal>=1 && tanggal <21 && bulan==3){
		printf("\n\t==============================================================================");
		printf("\n\t||                                P I S C E S                               ||");
		printf("\n\t||--------------------------------------------------------------------------||");
		printf("\n\t                               HALO : %s",nama                                 );
		printf("\n\t  tanggal lahir anda : %d", tanggal                                            );
		printf("\n\t  bulan lahir anda   : %d", bulan                                              );
		printf("\n\n\t  zodiak anda adalah PISCES                                                 ");
		printf("\n\t------------------------------------------------------------------------------");
		printf("\n\t SEPUTAR ZODIAK ANDA  :");
		printf("\n\t Orang dengan zodiak pisces biasanya ramah, suka tampil berbeda dari yang lain");
		printf("\n\t dan suka membantu. Kelebihan orang dengan zodiak ini adalah penuh kasih, suka");
		printf("\n\t bermusik, artistik, intuitif, dan bijaksana. Kelemahannya adalah mudah takut ");
		printf("\n\t dengan sesuatu, mudah lari dari kenyataan, dan mudah ditipu.                 ");
		printf("\n\t==============================================================================");
		lanjut();	
		ulang();
	
		}
	return 0;
}

	
int lanjut (){
	printf("\n\n\t KLIK ENTER UNTUK LANJUT.......");
    getch();
    system ("cls");
}

int ulang(){
	
	int pilih;
	printf("\t|============================================================|\n");
	printf("\t|                          U L A N G                         |\n");
	printf("\t|------------------------------------------------------------|\n");
	printf("\t|                  APAKAH ANDA INGIN MENGULANG?              |\n");
	printf("\t|                             (Y/T)                          |\n");
	printf("\t|============================================================|\n\n");
	printf("\t MASUKKAN PILIHAN ANDA	      : ");
	scanf("%s", &pilih);
	if (pilih== 'Y' || pilih == 'y'){
    	main();
	}else if (pilih == 'T' ||pilih == 't'){
			printf("\n\n\t|==========================================================|\n");
			printf("\t|                                                          |\n");
			printf("\t|           TEKAN ENTER UNTUK KELUAR DARI PROGRAM          |\n");
			printf("\t|                                                          |\n");
			printf("\t|                 T E R I M A   K A S I H                  |\n");
			printf("\t|                                                          |\n");
			printf("\t|==========================================================|\n");
	}else{
		printf("\n\t input hanya berupa Y/T!");
		lanjut();
		ulang();
	}
	
}


