#include <iostream>
using namespace std;

int angka1(int a){
  if(a <= 1){
    cout<<a;
    return a;
  }else {
    cout<<""<<a<<" x ";
    return a * angka1(a-1);
  }
}

int angka2(int a){
  if(a<=1){
    cout<<a;
    return a;
  }else{
    cout<<""<<a<<" x ";
    return a * angka2(a-1);
  }
}

int main(){
  int bil1, bil2,hasil1,hasil2, jmlh;
  cout<<"Masukkan Angka : ";
  cin>>bil1;
  cout<<"Masukkan Angka : ";
  cin>>bil2;

  cout<<bil1<<"! adalah ";
  hasil1 = angka1(bil1);
  cout<<" = "<<hasil1<<endl;

  cout<<bil2<<"! adalah ";
  hasil2 = angka2(bil2);
  cout<<" = "<<hasil2<<endl;

  jmlh=hasil1 + hasil2;
  cout<<"Jumlah Faktorial = "<<jmlh<<endl;
}