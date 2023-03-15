#include <iostream>
#include <string>
using namespace std;
struct buah{
 string Nama1;
 string Warna1;
 string Bijinya1;
 string Harga1;
  string Nama2;
 string Warna2;
 string Bijinya2;
 string Harga2; 
  string Nama3;
 string Warna3;
 string Bijinya3;
 string Harga3;
  
 string Nama4;
 string Warna4;
 string Bijinya4;
 string Harga4;
};
int main(){
//urutan buah :nanas jeruk semangka pisang
//urutan warna :kuning oren hijau&merah kuning
//urutan biji:tidak ada ada tidak
//urutan harga: 9000 8000 10000 5000
 buah mhs;
 mhs.Nama1="Nanas";
 mhs.Warna1="kuning";
 mhs.Bijinya1="Tidak";
 mhs.Harga1="9000\n";
 
 mhs.Nama2="jeruk";
 mhs.Warna2="oren";
 mhs.Bijinya2="ada";
 mhs.Harga2="8000\n";
 
 mhs.Nama3="semangka";
 mhs.Warna3="Hijau & merah";
 mhs.Bijinya3="ada";
 mhs.Harga3="10000\n";
 
 mhs.Nama4="pisang";
 mhs.Warna4="kuning";
 mhs.Bijinya4="tidak";
 mhs.Harga4="5000\n";
 
 cout<<"DATA BUAH"<<endl;
 cout<<"--------------------"<<endl;
 cout<<"Nama : "<<mhs.Nama1<<endl;
 cout<<"Warna : "<<mhs.Warna1<<endl;
 cout<<"Bijinya : "<<mhs.Bijinya1<<endl;
 cout<<"Harga : "<<mhs.Harga1<<endl;
 
 cout<<"Nama : "<<mhs.Nama2<<endl;
 cout<<"Warna : "<<mhs.Warna2<<endl;
 cout<<"Bijinya : "<<mhs.Bijinya2<<endl;
 cout<<"Harga : "<<mhs.Harga2<<endl;
 
 cout<<"Nama : "<<mhs.Nama3<<endl;
 cout<<"Warna : "<<mhs.Warna3<<endl;
 cout<<"Bijinya : "<<mhs.Bijinya3<<endl;
 cout<<"Harga : "<<mhs.Harga3<<endl;
 
 cout<<"Nama : "<<mhs.Nama4<<endl;
 cout<<"Warna : "<<mhs.Warna4<<endl;
 cout<<"Bijinya : "<<mhs.Bijinya4<<endl;
 cout<<"Harga : "<<mhs.Harga4<<endl;
    
 return 0;
}