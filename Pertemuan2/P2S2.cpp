#include <iostream>
using namespace std;

int main() 
  
  //nilai 1, nilai 2, nilai 3, nilai 4
  
  {
  int i, na;
  int nilai[4]={80,90,85,95};
  string nama="Muhamad Subhan Rizki Afiat"; 
  string npm="212310020";
  
  cout<<"Nama      : "<<nama<<endl;
  cout<<"NPM       : "<<npm<<endl; 
    
  for(int i=0; i<4; i++){
    if(i==0){
      cout<<"Presensi  : "<<nilai[i]<<endl;
      nilai[i]=nilai[i]*0.1;
    }
    else if(i==1){
      cout<<"Praktikum : "<<nilai[i]<<endl;
      nilai[i]=nilai[i]*0.2;
    }
    else if(i==2){
      cout<<"UTS       : "<<nilai[i]<<endl;
      nilai[i]=nilai[i]*0.3;
    }else if(i==3){
       cout<<"UAS       : "<<nilai[i]<<endl;
      nilai[i]=nilai[i]*0.4;
    }
  }
  
  na=nilai[0];
  for(int i=0; i<4; i++){
    na=na+nilai[i];
  }
  cout<<"Nilai AKhir : "<<na<<endl;
}