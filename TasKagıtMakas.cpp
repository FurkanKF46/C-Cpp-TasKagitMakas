#include<iostream>
#include <string>
#include <cstdlib>
#include<time.h>
//Furkan KOCA 221030910028
using namespace std;
int win=0;
string girilen;
string bilgisayar;

void oyna() {
	int atama;
	srand(time(0));
	atama= rand() %3+1;
	if(atama==1)
	bilgisayar="Makas";
	else if(atama==2)
	bilgisayar="Tas";
	else if(atama==3)
	bilgisayar="Kagit";
	
	
}
void denetleme()  {
	 if(girilen=="makas") {
	 	cout<<bilgisayar<<" gosterir"<<endl;
		if(bilgisayar=="Tas") 
			cout<<"Hahah Budur."<<endl;
			else if(bilgisayar=="Makas") 
			cout<<"Berabere Bir daha."<<endl;
			else if(bilgisayar=="Kagit") {
				cout<<"Yaa kaybettimm.."<<endl;
				win=1;
			}
	}
	else  if(girilen=="tas") {
		cout<<bilgisayar<<" gosterir"<<endl;
		if(bilgisayar=="Tas") 
			cout<<"Beraber mi bir daha.."<<endl;
			else if(bilgisayar=="Makas") 
			cout<<"hahaha Basitti.."<<endl;
			else if(bilgisayar=="Kagit") {
				cout<<"Yaa kaybettimm.."<<endl;
				win=1;
			}
	}
	else  if(girilen=="kagit") {
		cout<<bilgisayar<<" gosterir"<<endl;
		if(bilgisayar=="Tas") {
			cout<<"Saymam ki saymam ki"<<endl;
			win=1;
		}
			else if(bilgisayar=="Makas") 
			cout<<"Kolaysýn yaa"<<endl;
			else if(bilgisayar=="Kagit") 
			cout<<"offff bir daha"<<endl;
	}
	else
	cout<<"Dogru yazdigina emin misin? Haydi bir daha"<<endl;
}


int main () {
	cout<<"Gel tas kagýt makas oynayalim hadi"<<endl;
	while(win<1) {
			cout<<"3..2..1.."<<endl;
		cin>>girilen;
		oyna();
		denetleme();
	}
	cout<<"Eglendimm...";
	return 0;
	
}
