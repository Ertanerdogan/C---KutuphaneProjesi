#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;


struct kitap
{
    string ad;
    string yazarAd;
    string yazarSoyad;
    int sayfa;
};

struct insan
{
    string ad;
    string soyad;
    int id;
};



void menu();
void uyeSirala();
void uyeEkle();
void yedekle();
void guncelle();
void kitapSirala();
void kitapEkle();
void kitapYedekle();
void kitapGuncelle();                   
void kitapAra();                        
void uyeAra();
void anaMenu();                                         
void uyeGirisi();
void oduncVer();
void oduncListesi();
void iadeYedekle();                       
void iadeGuncelle();
void sifreYenile();
int sifreKontrol();
void uyeSifreGuncelle();
void uyeSifreYenile();
void kitapiste();
void kitapistekonayla();
void kitapistekonayla2();
void kayit_ol2(string,string,int,string);
void kayit_ol1();




int main()
{
   int secim;
   int istek = 1;
   int giris;
   int sonuc,tekrar;
   string yoneticiSifre,dogrulama;

   do{
        system("CLS");
        anaMenu(); 
        cout << "\nSeciminizi giriniz : ";                              
        cin >> giris;                                                   
        ifstream sifre;                                                 
        sifre.open("sifre.txt",ios::in);
        sifre >> dogrulama;
        sifre.close();
        switch(giris)
        {
            case 0 : cout << "Cikis yaptiniz !";  break;
        
            case 1 : 
                    cout << "Yonetici sifrenizi giriniz : ";
                    cin >> yoneticiSifre;
                    if(yoneticiSifre == dogrulama)
                    {
                        do
                        {    
                            menu();
                            cout << "\nSeciminizi giriniz : ";
                            cin >> secim;
    
                            switch(secim)
                            {                   
                                case 0 : cout << "Cikis yaptiniz ! "; break;
            
                                case 1 : do{ 
                                                system("CLS");
                                                uyeSirala();
                                                cout << "\nMenuye donmek icin 0'a basiniz  :  ";
                                                cin >> istek;
                                            }while(istek != 0);
                                            istek = 1;
                                            break;

                                case 2 : system("CLS");   
                                         uyeEkle();
                                         do{
                                                cout << "\n\nMenuye donmek icin 0'a basiniz  : ";
                                                cin >> istek;
                                            }while(istek != 0);
                                            istek = 1;
                                            break;     

                                case 3 : system("CLS");
                                         uyeSirala();
                                         yedekle();
                                         guncelle();
                                         break;      

                                case 4 : do{
                                                system("CLS");
                                                kitapSirala();
                                                cout << "\nMenuye donmek icin 0'a basiniz  :  ";
                                                cin >> istek;
                                            }while(istek != 0); 
                                            istek = 1;
                                            break;

                                case 5 : 
                                        system("CLS");
                                        kitapEkle();
                                        break;

                                case 6 : 
                                        system("CLS");
                                        kitapSirala();
                                        kitapYedekle();
                                        kitapGuncelle();
                                        break;

                                case 7 :  do{
                                                system("CLS");
                                                uyeAra();
                                                cout << "\nMenuye donmek icin 0'a basiniz  : ";
                                                cin >> istek;
                                            }while(istek != 0);
                                            istek = 1;
                                            break; 

                                case 8 :  do{
                                                system("CLS");
                                                kitapAra();
                                                cout << "\nMenuye donmek icin 0'a basiniz  : ";
                                                cin >> istek;
                                            }while(istek != 0);
                                            istek = 1;
                                            break;

                                case 9 :   system("CLS");
                                           uyeSirala();
                                           oduncVer();
                                           break;  

                                case 10 :  do{
                                                system("CLS");
                                                oduncListesi();
                                                cout << "\nMenuye donmek icin 0'a basiniz  : ";
                                                cin >> istek;
                                            }while(istek != 0);  
                                            istek = 1;
                                            break;   

                                case 11 : system("cls");
                                          kitapistekonayla();
                                          kitapistekonayla2();   
                                          do{
                                           cout << "\nMenuye donmek icin 0'a basiniz  : ";
                                           cin >> istek;
                                            }while(istek != 0);
                                           istek = 1;
                                           break;       

                                case 12 :  system("CLS");
                                           oduncListesi();
                                           iadeYedekle();
                                           iadeGuncelle();
                                           do{
                                           cout << "\nMenuye donmek icin 0'a basiniz  : ";
                                           cin >> istek;
                                           }while(istek != 0);
                                           istek = 1;
                                           break; 
     

                                case 13 :  system("CLS");
                                           sifreYenile();
                                           do
                                           {
                                                cout << "\nMenuye donmek icin 0'a basiniz  : ";
                                                cin >> istek;
                                           } while(istek != 0);
                                           istek = 1;
                                           break;
                                                                                   

                                default : break;              
                     
                                          
                            }
                        } while (secim != 0);
                    }
                    else 
                    {
                        cout << "Yanlis sifre";
                    }
                 break;

            case 2 : 
                     system("CLS");   
                     uyeSirala();
                     int kontrol,asd;
                     kontrol = sifreKontrol();
                     
                     if(kontrol == 1)
                     {
                        int istek1;
                        do{
                                uyeGirisi();
                                cout << "\nSeciminizi giriniz : ";
                                cin >> secim;

                                switch(secim)
                                {
                                    case 1 : do{
                                                system("CLS");
                                                uyeSirala();
                                                cout << "\n\nMenuye donmek icin 0'a basiniz  : ";
                                                cin >> istek1;
                                            }while(istek1 != 0);
                                            istek1 = 1;
                                            break;

                                    case 2 : do{
                                                system("CLS");
                                                kitapSirala();
                                                cout << "\n\nMenuye donmek icin 0'a basiniz : ";
                                                cin >> istek1;
                                            }while(istek1 != 0 );  
                                            istek1 = 1;
                                            break;

                                    case 3 :
                                                system("CLS");
                                                kitapiste();
                                                do{
                                                cout << "\n\nMenuye donmek icin 0'a basiniz : ";
                                                cin >> istek1;
                                                }while(istek1 != 0);      
                                            istek1 = 1;
                                        break;

                                    case 4 : do{
                                                system("CLS");
                                                kitapAra();
                                                cout << "\n\nMenuye donmek icin 0'a basiniz :  ";
                                                cin >> istek1;
                                            }while(istek1 != 0);
                                            istek1 = 1;
                                            break;

                                    case 5 : system("CLS");
                                             uyeSifreYenile();
                                             uyeSifreGuncelle();  
                                             break;       

                                    case 0 : cout << "Cikis yaptiniz ! "; break;

                                    default : break;
                                }
                          }while(secim != 0);
                          break;
                     }
                     break;
            case 3 :  
                    int donus;
                    do{
                        kayit_ol1();
                        cout << "\n\nMenuye donmek icin 0'a basiniz  : ";
                        cin >> donus;
                        }while(donus != 0);
                        donus = 1;
                        break;

        }
   
    }while(giris != 0);
}


void menu()
{
    system("CLS");
    cout << "\n\n   *   *   YONETICI EKRANI   *   *   " << endl;
    cout << "___________________________________" << endl << endl;
    cout << "1  - Uyeleri sirala" << endl;
    cout << "2  - Uye ekle" << endl;
    cout << "3  - Uye sil" << endl;
    cout << "4  - Kitaplari sirala" << endl;                                        
    cout << "5  - Kitap ekle" << endl;
    cout << "6  - Kitap sil" << endl;
    cout << "7  - Uye ara" << endl;
    cout << "8  - Kitap ara" << endl;
    cout << "9  - Uyeye kitap odunc ver" << endl;
    cout << "10 - Odunc Listesi" << endl;
    cout << "11 - Uyelerin kitap istekleri" << endl;
    cout << "12 - Kitap iade al" << endl;
    cout << "13 - Yonetici sifrenizi degistirin" << endl;
    cout << "0 - Ana menuye don" << endl;
}


void uyeSirala()
{
    ifstream kisiler;
    kisiler.open("kisiler.txt",ios::in);

    insan insan;

    int sayac = 0;

    cout << "UYELER" << endl;
    cout << "------------------";  
    while(kisiler >> insan.id >> insan.ad >> insan.soyad)            
    {                                                                
        cout << "\nUYENIN NUMARASI  : " << insan.id;                 
        cout << "\nADI              : " << insan.ad;                 
        cout << "\nSOYADI           : " << insan.soyad;              
        cout << "\n------------------";
        sayac++;
    }
    
    if(sayac == 0)
    {
        cout << "\nHenuz herhangi bir uyemiz yok ! " << endl;
    }
    
    sayac = 0;
    kisiler.close(); 
}


void uyeEkle()
{
    string isim,soyisim,uyeSifre;
    int numara,sayac = 0;
    insan insan;

    cout << "Lutfen eklemek istediginiz uyenin adini giriniz : ";         
    cin >> isim; 
    cout << "Lutfen eklemek istediginiz uyenin soyadini giriniz : ";
    cin >> soyisim;
    cout << "Lutfen eklemek istediginiz uyenin numarasini giriniz : ";
    cin >> numara;
    cout << "Lutfen uyeye sifre belirleyiniz : ";
    cin >> uyeSifre;

    ofstream kisiler;
    kisiler.open("kisiler.txt",ios::app);
    ifstream okuyucu;                                     
    okuyucu.open("kisiler.txt",ios::in);                  
    ofstream uyesifre;
    uyesifre.open("uyesifre.txt",ios::app);

    while(okuyucu >> insan.id >> insan.ad >> insan.soyad)
    {
        if(numara == insan.id)
        {
            sayac++;
        }
    }

    if(sayac == 0)
    {
        kisiler << endl << numara << " " << isim << " " << soyisim << endl;    
        uyesifre << endl << numara << " " << uyeSifre << endl;                 
    }
    if(sayac > 0)
    {
        cout << "\nBu uye numarasi zaten kullaniliyor";           
    }
    sayac = 0;
    kisiler.close();
    okuyucu.close();
    uyesifre.close();
}


void yedekle()
{
    string uyeSifre;                   
    int numara;                        
    kitap kitap1;                      
    insan insan;

    cout << "\n\nSilmek istediginiz uyenin numarasini giriniz : "; 
    cin >> numara;

    ifstream kisiler;
    kisiler.open("kisiler.txt",ios::in);

    ofstream gecici;                              
    gecici.open("gecici.txt",ios::out);          
                                                
    ifstream odunc;
    odunc.open("odunc.txt",ios::in);

    ofstream oduncgecici;
    oduncgecici.open("oduncgecici.txt",ios::out);

    ifstream uyesifre;
    uyesifre.open("uyesifre.txt",ios::in);
    
    ofstream uyesifregecici;
    uyesifregecici.open("uyesifregecici.txt",ios::out);

    ifstream kitapiste;
    kitapiste.open("kitapiste.txt",ios::in);

    ofstream kitapistegecici;
    kitapistegecici.open("kitapistegecici.txt",ios::out);

    while(kisiler >> insan.id >> insan.ad >> insan.soyad)
    {
        if(numara == insan.id)   
        {
            continue;
        }
        gecici << insan.id << " " << insan.ad << " " << insan.soyad << " " << uyeSifre << endl;
    }

    while(odunc >> insan.id >> insan.ad >> insan.soyad >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
    {
        if(numara == insan.id)           
        {
            continue;
        }
        oduncgecici << insan.id << " " << insan.ad << " " << insan.soyad << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
    }

    while(uyesifre >> insan.id >> uyeSifre)      
    {
        if(numara == insan.id)
        {
            continue;
        }
        uyesifregecici << insan.id << " " << uyeSifre << endl;
    }

    while(kitapiste >> insan.id >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
    {
        if(numara == insan.id)     
        {
            continue;
        }
        kitapistegecici << insan.id << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
    }

    kisiler.close();         
    gecici.close();
    odunc.close();                    
    oduncgecici.close();
    uyesifregecici.close();
    uyesifre.close();
    kitapiste.close();
    kitapistegecici.close();
}


void guncelle()
{
    string uyeSifre;
    int sayac = 0;                     
    kitap kitap1;                       
    insan insan;

    ifstream gecici;
    gecici.open("gecici.txt",ios::in);

    ofstream kisiler;
    kisiler.open("kisiler.txt",ios::out);

    ifstream oduncgecici;
    oduncgecici.open("oduncgecici.txt",ios::in);

    ofstream odunc;
    odunc.open("odunc.txt",ios::out);

    ifstream uyesifregecici;
    uyesifregecici.open("uyesifregecici.txt",ios::in);

    ofstream uyesifre;
    uyesifre.open("uyesifre.txt",ios::out);

    ifstream kitapistegecici;
    kitapistegecici.open("kitapistegecici.txt",ios::in);

    ofstream kitapiste;
    kitapiste.open("kitapiste.txt",ios::out);


    while(gecici >> insan.id >> insan.ad >> insan.soyad)   
    {
        kisiler << insan.id << " " << insan.ad << " " << insan.soyad << " " << uyeSifre <<  endl;
    }

    while(oduncgecici >> insan.id >> insan.ad >> insan.soyad >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad) 
    {
        odunc << insan.id << " " << insan.ad << " " << insan.soyad << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
    }

    while(uyesifregecici >> insan.id >> uyeSifre)     
    {
        uyesifre << insan.id << " " << uyeSifre << endl;
    }
    
    while(kitapistegecici >> insan.id >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)     
    {
        kitapiste << insan.id << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
    }

    kisiler.close();
    gecici.close();
    odunc.close();
    oduncgecici.close();
    uyesifregecici.close();
    uyesifre.close();
    kitapiste.close();
    kitapistegecici.close();
}


void kitapSirala()
{             
    kitap kitap1;                
    int sayac = 0;

    ifstream kitap;
    kitap.open("kitap.txt",ios::in);

    cout << "KITAPLAR" << endl;
    cout << "----------------------------" << endl;

    while(kitap  >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad >> kitap1.sayfa)
    {
        cout << "KITAP AD             : " << kitap1.ad << endl;
        cout << "YAZAR AD             : " << kitap1.yazarAd << endl;
        cout << "YAZAR SOYAD          : " << kitap1.yazarSoyad << endl;
        cout << "KITABIN SAYFA SAYISI : " << kitap1.sayfa << endl;
        cout << "----------------------------" << endl << endl;
        sayac++;
    }
    
    if(sayac == 0)      
    {
        cout << "\nHenuz herhangi bir kitabimiz yok !" << endl;
    }

    sayac = 0;
    kitap.close();
}


void kitapEkle()
{
    kitap kitap1;

    ofstream kitap;                          
    kitap.open("kitap.txt",ios::app);

    cout << "Eklemek istediginiz kitabin adi : ";
    cin >> kitap1.ad;
    cout << "Yazarin adi : ";
    cin >> kitap1.yazarAd;
    cout << "Yazarin soyadi : ";
    cin >> kitap1.yazarSoyad;
    cout << "Kitabin sayfa sayisi : ";
    cin >> kitap1.sayfa;
    
    kitap << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << " " << kitap1.sayfa << endl;
    kitap.close();
} 


void kitapYedekle()
{
    kitap kitap1;
    insan insan;
    string kitapIsim;

    ifstream kitap;
    kitap.open("kitap.txt",ios::in);              
                                                   
    ofstream kitapgecici;                         
    kitapgecici.open("kitapgecici.txt",ios::out);

    ifstream odunc;
    odunc.open("odunc.txt",ios::in);

    ofstream oduncgecici;
    oduncgecici.open("oduncgecici.txt",ios::out);

    ifstream kitapiste;
    kitapiste.open("kitapiste.txt",ios::in);

    ofstream kitapistegecici;
    kitapistegecici.open("kitapistegecici.txt",ios::out);

    cout << "Silmek istediginiz kitabin adi : ";
    cin >> kitapIsim;

    while(kitap >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad >> kitap1.sayfa)
    {
        if(kitapIsim == kitap1.ad)
        {
            continue;
        }

        kitapgecici << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << " " << kitap1.sayfa << endl;
    } 

    while(odunc >> insan.id >> insan.ad >> insan.soyad >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
    {
        if(kitapIsim == kitap1.ad)          
        { 
            continue;
        }
        oduncgecici << insan.id << " " << insan.ad << " " << insan.soyad << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
    }

    while(kitapiste >> insan.id >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
    {
        if(kitapIsim == kitap1.ad)      
        {
            continue;
        }
        kitapistegecici << insan.id << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
    }

    
    kitap.close();
    kitapgecici.close();
    odunc.close();
    oduncgecici.close();
    kitapiste.close();
    kitapistegecici.close();
}


void kitapGuncelle()
{
    kitap kitap1;
    insan insan;

    ifstream kitapgecici;
    kitapgecici.open("kitapgecici.txt",ios::in);

    ofstream kitap;
    kitap.open("kitap.txt",ios::out);                    

    ifstream oduncgecici;
    oduncgecici.open("oduncgecici.txt",ios::in);

    ofstream odunc;
    odunc.open("odunc.txt",ios::out);

    ifstream kitapistegecici;
    kitapistegecici.open("kitapistegecici.txt",ios::in);

    ofstream kitapiste;
    kitapiste.open("kitapiste.txt",ios::out);

    while(kitapgecici >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad >> kitap1.sayfa)
    {
        kitap << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << " " << kitap1.sayfa << endl;
    }

    while(oduncgecici >> insan.id >> insan.ad >> insan.soyad >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
    {
        odunc << insan.id << " " << insan.ad << " " << insan.soyad << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
    }
    
    while(kitapistegecici >> insan.id >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
    {
        kitapiste << insan.id << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
    }

    kitap.close();
    kitapgecici.close();
    odunc.close();
    oduncgecici.close();
    kitapiste.close();
    kitapistegecici.close();
}


void kitapAra()
{
    kitap kitap1;

    ifstream kitap;
    kitap.open("kitap.txt",ios::in);

    string kitapIsim;
    int sayac = 0;

    cout << "Gormek istediginiz kitabin adi : ";          
    cin >> kitapIsim;

    while(kitap >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad >> kitap1.sayfa)
    {
        if(kitapIsim == kitap1.ad)
        {
            cout << "KITAP AD             : " << kitap1.ad << endl;
            cout << "YAZAR AD             : " << kitap1.yazarAd << endl;
            cout << "YAZAR SOYAD          : " << kitap1.yazarSoyad << endl;
            cout << "KITABIN SAYFA SAYISI : " << kitap1.sayfa << endl;
            sayac++;
        }
    }
    if(sayac == 0)   
    {
        cout << "Aradiginiz kitap bulunamamistir ! ";
    }
    sayac = 0;
    kitap.close();
}


void uyeAra()
{
    ifstream kisiler;
    kisiler.open("kisiler.txt",ios::in);

    ifstream uyesifre;
    uyesifre.open("uyesifre.txt",ios::in);    

    string isim,uyeSifre;
    int sayac = 0,uyeNumara;
    insan insan;

    cout << "Gormek istediginiz uyenin adi : ";
    cin >> isim;

    while(kisiler >> insan.id >> insan.ad >> insan.soyad)
    {
        while(uyesifre >> uyeNumara >> uyeSifre)
        {
            if(insan.id == uyeNumara)
            {
                break;
            }
        }
        if(isim == insan.ad)
        {
                
            cout << "\nUYENIN NUMARASI : " << insan.id << endl;
            cout << "ADI             : " << insan.ad << endl;
            cout << "SOYADI          : " << insan.soyad << endl;
            cout << "SIFRESI         : " << uyeSifre << endl;
            cout << "---------------------------" << endl;
            sayac++;
        }
    }
     
    if(sayac == 0)          
    {
        cout << "Aradiginiz uye bulunamamistir ! ";
    }
    sayac = 0;
    kisiler.close();
    uyesifre.close();
}


void anaMenu()
{
    cout << " ###      ANA MENU      ### " << endl;
    cout << "_____________________________\n" << endl;
    cout << "1 - Yonetici girisi" << endl;                       
    cout << "2 - Uye girisi" << endl;
    cout << "3 - Kayit ol" << endl;
    cout << "0 - Cikis yap" << endl;
}

void uyeGirisi()
{
    system("CLS");
    cout << "   *   *  UYE EKRANI  *   *" << endl;
    cout <<"_____________________________\n" << endl;
    cout << "1 - Uyeleri goster" << endl;
    cout << "2 - Kitaplari goster" << endl;                    
    cout << "3 - Kitap talebi gonder" << endl;
    cout << "4 - Kitap ara" << endl;
    cout << "5 - Sifreni degistir" << endl;
    cout << "0 - Ana menuye don" << endl;
}


void oduncVer()
{
    kitap kitap1;
    insan insan;

    ifstream kitap;
    kitap.open("kitap.txt",ios::in);                
                                                    
    ifstream kisiler;
    kisiler.open("kisiler.txt",ios::in);           

    ofstream odunc;
    odunc.open("odunc.txt",ios::app);

    string kitapIsim;
    int numara,sayac = 0;

    cout << "\n\nKitap odunc almak isteyen uyenin numarasi : ";
    cin >> numara;

    while(kisiler >> insan.id >> insan.ad >> insan.soyad)
    {
        if(numara == insan.id)
        {
            cout << "Almak istedigi kitabin adi : ";
            cin >> kitapIsim;

            while(kitap >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad >> kitap1.sayfa)
            {
                if(kitapIsim == kitap1.ad)
                {
                    odunc << insan.id << " " << insan.ad << " " << insan.soyad << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << " " << kitap1.sayfa << endl;
                }
                else
                {
                    cout << "Aradiginiz kitap bulunamamistir ! " << endl;
                }
            }
        }    
    } 
    kitap.close();
    kisiler.close();
    odunc.close();
}     


void oduncListesi()
{
    ifstream odunc;
    odunc.open("odunc.txt",ios::in);                   
    
    kitap kitap1;
    insan insan;
    int sayac = 0;

    cout << " // ODUNC LISTESI // " << endl;
    cout << "________________________\n" << endl;

    while(odunc >> insan.id >> insan.ad >> insan.soyad >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
    {
        cout << "\nUYENIN NUMARASI   : " << insan.id << endl;
        cout << "UYENIN ADI        : " << insan.ad << endl;
        cout << "UYENIN SOYADI     : " << insan.soyad << endl;
        cout << "KITABIN ADI       : " << kitap1.ad << endl;
        cout << "YAZARIN ADI       : " << kitap1.yazarAd << endl;
        cout << "YAZARIN SOYADI    : " << kitap1.yazarSoyad << endl;
        cout << "-------------------------------" << endl;
        sayac++;
    }
    if(sayac == 0)     
    {
        cout << "Hicbir uye kitap odunc almadi !" << endl;
    }
    sayac = 0;
    odunc.close();
}


void iadeYedekle()
{
    ifstream odunc;
    odunc.open("odunc.txt",ios::in);

    ofstream oduncgecici;
    oduncgecici.open("oduncgecici.txt",ios::out);     
                                                      
    kitap kitap1;
    insan insan;
    string kitapIsim;
    int numara,sayac = 0;
    
    while(odunc >> insan.id >> insan.ad >> insan.soyad >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
    {
        sayac++;
    }
    
    if(sayac > 0)
    {
        cout << "Iade etmek isteyen uyenin numarasi  : ";
        cin >> numara;
        cout << "Iade etmek istedigi kitabin adi  : ";
        cin >> kitapIsim;

        while(odunc >> insan.id >> insan.ad >> insan.soyad >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
        {
            if(numara == insan.id && kitapIsim == kitap1.ad)
            {
                continue;
            }
            oduncgecici << insan.id << " " << insan.ad << " " << insan.soyad << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad;
        }
    }
    sayac=0;
    oduncgecici.close();
    odunc.close();
}  


void iadeGuncelle()
{
    ifstream oduncgecici;
    oduncgecici.open("oduncgecici.txt",ios::in);   

    ofstream odunc;
    odunc.open("odunc.txt",ios::out);

    kitap kitap1;
    insan insan;

    while(oduncgecici >> insan.id >> insan.ad >> insan.soyad >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
    {
        odunc << insan.id << " " << insan.ad << " " << insan.soyad << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
    }
    odunc.close();
    oduncgecici.close();
}

void sifreYenile()
{
    ofstream sifre;
    sifre.open("sifre.txt",ios::out);

    string pass;

    cout << "Lutfen yeni sifrenizi giriniz : ";          
    cin >> pass;

    sifre << pass;
    cout << "\nSifreniz basariyla degistirildi !" << endl;
    
    sifre.close();
}

int sifreKontrol()
{
    ifstream kisiler;
    kisiler.open("kisiler.txt",ios::in);

    ifstream uyesifre;
    uyesifre.open("uyesifre.txt",ios::in);                   

    string pass,sifre;
    int numara,sayac = 0;
    insan insan;

    cout << "\n\nLutfen uye numaranizi giriniz : ";
    cin >> numara;
    cout << "Lutfen sifrenizi giriniz : ";
    cin >> sifre;

    while(kisiler >> insan.id >> insan.ad >> insan.soyad)
    {
        while(uyesifre >> insan.id >> pass)
        {
            if(numara == insan.id)
            {
                if(sifre == pass)
                {
                    sayac++;
                }
            }
        }
    }

    if(sayac > 0)
    {
        return 1;
    }
    if(sayac == 0)
    {
        return 0;
    }
    sayac = 0;
    kisiler.close();
    uyesifre.close();

}

void uyeSifreYenile()
{
    ifstream uyesifre;
    uyesifre.open("uyesifre.txt",ios::in);

    ofstream uyesifregecici;
    uyesifregecici.open("uyesifregecici.txt",ios::out);       

    string uyeSifre,yeniSifre,pass;
    int numara,uyeNumara;

    cout << "Uye numarani gir :";
    cin >> numara;

    cout << "Yeni sifreni gir : ";
    cin >> yeniSifre;

    cout << "Eski sifreni gir : ";
    cin >> pass;

    while(uyesifre >> uyeNumara >> uyeSifre)
    {
        if(numara == uyeNumara)
        {
            if(pass == uyeSifre)
            {
                uyesifregecici << numara << " " << yeniSifre << endl;
            }
        }
        else if(numara != uyeNumara || pass != uyeSifre)
        {
            uyesifregecici << uyeNumara << " " << uyeSifre << endl;
        }
    }

    uyesifre.close();
    uyesifregecici.close();
}

void uyeSifreGuncelle()
{
    ifstream uyesifregecici;
    uyesifregecici.open("uyesifregecici.txt",ios::in);       

    ofstream uyesifre;
    uyesifre.open("uyesifre.txt",ios::out);
    
    string uyeSifre;
    int uyeNumara;

    while(uyesifregecici >> uyeNumara >> uyeSifre)
    {
        uyesifre << uyeNumara << " " << uyeSifre << endl;
    }

    uyesifre.close();
    uyesifregecici.close();
}

void kitapiste()
{
    int uyeNumara,numara,sayac=0;
    string kitapIsim,yazarAd,yazarSoyad,sifre,uyeSifre;
    kitap kitap1;

    ifstream kitap;
    kitap.open("kitap.txt",ios::in);

    ofstream kitapiste;
    kitapiste.open("kitapiste.txt",ios::app);

    ifstream uyesifre;
    uyesifre.open("uyesifre.txt",ios::in);


    cout << "Uye numaranizi giriniz : ";               
    cin >> numara;
    cout << "Sifrenizi giriniz : ";
    cin >> sifre;

    while(uyesifre >> uyeNumara >> uyeSifre)
    {
        if(numara == uyeNumara)
        {
            if(sifre == uyeSifre)
            {
                sayac++;
            }
        }
    }

    if(sayac > 0)
    {
        system("cls");
        kitapSirala();
        cout << endl << "Odunc almak istediginiz kitabin adi : ";
        cin >> kitapIsim;
        cout << "Yazarin adi : ";
        cin >> yazarAd;
        cout << "Yazarin soyadi : ";
        cin >> yazarSoyad;

        while(kitap >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad >> kitap1.sayfa)
        {
        
            if(kitapIsim == kitap1.ad)
            {
                if(yazarAd == kitap1.yazarAd)
                {
                    if(yazarSoyad == kitap1.yazarSoyad)
                    {
                        kitapiste << numara << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
                        cout << "\n\nKitap isteginiz yoneticiye gonderildi. Lutfen onaylanmasini bekleyiniz !";
                    }  
                }
            }
        }
    }
    else if(sayac == 0)
    {
        system("cls");
        cout << "Sifreniz veya uye numaraniz uyuşmadi !";
    }
    sayac = 0;
    uyesifre.close();
    kitap.close();
    kitapiste.close();
}

void kitapistekonayla()
{
    kitap kitap1;
    insan insan;
    string kitapIsim,yazarAd,yazarSoyad,isim,soyisim,isim1,soyisim1;           
    int uyeNumara,numara,sayac=0,id;

    ifstream kitapiste;
    kitapiste.open("kitapiste.txt",ios::in);
    
    ifstream kitapiste1;
    kitapiste1.open("kitapiste.txt",ios::in);

    ofstream odunc;
    odunc.open("odunc.txt",ios::app);

    ifstream kisiler;
    kisiler.open("kisiler.txt",ios::in);

    ifstream kitap;
    kitap.open("kitap.txt",ios::in);

    ofstream kitapistegecici;
    kitapistegecici.open("kitapistegecici.txt",ios::out);

    system("cls");
    while(kitapiste >> uyeNumara >> kitapIsim >> yazarAd >> yazarSoyad)
    {
        cout << "UYENIN NUMARASI  : " << uyeNumara << endl;
        cout << "KITABIN ADI      : " << kitapIsim << endl;
        cout << "YAZARIN ADI      : " << yazarAd << endl;
        cout << "YAZARIN SOYADI   : " << yazarSoyad << endl;
        cout << "-----------------------" << endl;
        sayac++;
    }

    if(sayac > 0)
    {
        cout << endl << endl << "Istegini onaylamak istediginiz uyenin numarasi : ";
        cin >> numara;
        
        while(kisiler >> id >> isim >> soyisim)
        {
            if(numara == id)
            {
                isim1 = isim;
                soyisim1 = soyisim;
            }
        }

        while(kitapiste1 >> insan.id >> kitap1.ad >> kitap1.yazarAd >> kitap1.yazarSoyad)
        {
            if(numara == insan.id)
            {
                odunc << insan.id << " " << isim1 << " " << soyisim1 << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
            }       
            else
            {
                kitapistegecici << insan.id << " " << kitap1.ad << " " << kitap1.yazarAd << " " << kitap1.yazarSoyad << endl;
             }
        }
       
        kitap.close();
        kisiler.close();
        kitapiste.close();
        kitapistegecici.close();
        odunc.close();
        kitapiste1.close();
    }
}

void kitapistekonayla2()
{
    ifstream kitapistegecici;
    kitapistegecici.open("kitapistegecici.txt",ios::in);

    ofstream kitapiste;
    kitapiste.open("kitapiste.txt",ios::out);
    
    int uyeNumara;
    string kitapIsim,yazarAd,yazarSoyad;
    
    while(kitapistegecici >> uyeNumara >> kitapIsim >> yazarAd >> yazarSoyad)
    {
        kitapiste << uyeNumara << " " << kitapIsim << " " <<  yazarAd << " " << yazarSoyad << endl;
    }
    kitapiste.close();
    kitapistegecici.close();
}

void kayit_ol2(string ad,string soyad,int id,string sifre)
{

    ofstream kisiler;
    kisiler.open("kisiler.txt",ios::app);
    ofstream uyesifre;
    uyesifre.open("uyesifre.txt",ios::app);
    kisiler << id << " " << ad << " " << soyad << endl;
    uyesifre << id << " " << sifre << endl;
    kisiler.close();
    uyesifre.close();

}

void kayit_ol1()
{
    ifstream kisiler;
    kisiler.open("kisiler.txt",ios::in);

    insan insan1;
    string isim,soyisim,sifre;
    int num;
    int sayac = 0;
    cout << "Isminiz : ";
    cin >> insan1.ad;
    cout << "Soyisminiz : ";
    cin >> insan1.soyad;
    do
    {
        sayac = 0;
        cout << "Numaranizi giriniz : ";
        cin >> insan1.id;
        while(kisiler >> num >> isim >> soyisim)
        {
            if(num == insan1.id)
            {
                sayac++;
            }
        }
    } while(sayac != 0);
    cout << "Sifrenizi giriniz : ";
    cin >> sifre;
    kisiler.close();
    kayit_ol2(insan1.ad,insan1.soyad,insan1.id,sifre);
    
}









