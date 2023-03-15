#include <iostream>

using namespace std;

int main()
{
     int pilihan, uang;
     int roti = 200000;
     int bakso = 500000;
 
     cout << "MENU" << endl;
     cout << "1. Roti Rp 200000";
     cout << "2. Bakso Rp 500000";
 
     cout << "Masukkan Pilihan : ";
     cin >>pilihan;
 
     cout << "Masukkan Uang : ";
     cin >>uang;
 
  
 
     switch(pilihan)
     {
          case 1:
               if(uang >= roti)
               {
                    cout << "Selamat Anda Berhasil Membeli Roti";
               }
               else
               {
                    cout << "Uang Anda Kurang, Anak Kos Ya ?";
               }
          break;
   
          case 2:
               if(uang >= bakso)
               {
                    cout << "Selamat Anda Berhasil Membeli Bakso";
               }
               else
               {
                    cout << "Uang Anda Kurang, Anak Kos Ya ?";
               }
          break;
  
          default:
               cout << "Error";  
     }
 
     return 0;
}