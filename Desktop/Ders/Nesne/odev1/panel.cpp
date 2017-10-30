#include "panel.h"
#include <iostream>
#include <string>
const int MAX=11;
using namespace std;
panel::panel(){
	cout<<"Kutuphane otomasyonuna hoşgeldiniz!"<<endl;
	girisYap();
}

char panel::girisYap(){
	cout<<"Kutuphane imkanlarından faydalanabilmek için giriş yapmalısınız: "<<endl<<"Kullanici Adi :"<<endl;
	cin>>kullaniciAdi;
	cout<<endl<<"Sifre :"<<endl;
	cin>>sifre;
	kontrolEt(kullaniciAdi,sifre);
}

void panel::kontrolEt(string kullaniciAdi, string sifre){
  bool sorgu;
  string kullanicilar[10] = {"hakanaksoy","a123"};
  for(int i=0;i<MAX-1;++i){
	for(int j=0;j<MAX-1;++j){
	  sorgu=kullanicilar[i][j].find(kullaniciAdi) != string::npos;
	  if(sorgu==1){
		  cout<<"Giriş yapıldı.\t"<<kullanicilar[i][j]<<endl;
	  }
	}
  }
}
