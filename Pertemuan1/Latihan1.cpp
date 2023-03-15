#include <iostream>

using namespace std;

int main()
{
    float tgs,uas,uts;
    string sikap;
    cout<<"\t\tProgram Untuk\n\tMenghitung Nilai Akhir Mahasiswa"<<endl;
    cout<<"==============================================="<<endl;
    cout<<"Masukkan Nilai Tugas \t\t\t: ";cin>>tgs;
    cout<<"Masukkan Nilai UTS \t\t\t: ";cin>>uts;
    cout<<"Masukkan Nilai UAS \t\t\t: ";cin>>uas;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Masukkan Penilaian Kerapian(baik/buruk) : ";cin>>sikap;

    float na,a;
    if (sikap=="BURUK" || sikap=="buruk" || sikap=="Buruk")
    {
        a=0;
    }
    else if(sikap=="BAIK" || sikap=="baik" || sikap=="Baik")
    {
        a=1;
    }
    else
    {
    cout<<"==============================================="<<endl;
        cout<<"Nilai Kerapian Yang Anda Masukkan Salah\n";
        return 0;
    }

    na=a*((tgs*20/100)+(uts*30/100)+(uas*50/100));

    cout<<"==============================================="<<endl;
    cout<<"Nilai Akhir  = "<<na;
    char g;
    if(na<=20)
    {
        g='E';
    }
    else if(na<=40)
    {
        g='D';
    }
    else if(na<=60)
    {
        g='C';
    }
    else if(na<=80)
    {
        g='B';
    }
    else if(na<=100)
    {
        g='A';
    }
    cout<<"\nDengan Grade = "<<g;

  
}