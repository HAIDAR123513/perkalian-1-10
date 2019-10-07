#include <iostream>
using namespace std;

int main(){
	menu:
	system("cls");
	 float a;
	 char izin;
	cout<<"perkalian 1-10\n";
	cout<<"Oleh Haidar Guhardy Muhammad\n\n";
	cout<<"masukkan angka 1-10\n";
	cout<<"= ";
	cin>> a;
	if(a<1 || a>10){
		cout<<"nomor input anda tak tersedia\n";
		goto menu;
	}
	else if (a>=1 &&a<=10){
	cout<<"maka...\n";
	cout<<a<<" x "<<1<<" = "<<a*1<<endl;
	cout<<a<<" x "<<2<<" = "<<a*2<<endl;
	cout<<a<<" x "<<3<<" = "<<a*3<<endl;
	cout<<a<<" x "<<4<<" = "<<a*4<<endl;
	cout<<a<<" x "<<5<<" = "<<a*5<<endl;
	cout<<a<<" x "<<6<<" = "<<a*6<<endl;
	cout<<a<<" x "<<7<<" = "<<a*7<<endl;
	cout<<a<<" x "<<8<<" = "<<a*8<<endl;
	cout<<a<<" x "<<9<<" = "<<a*9<<endl;
	cout<<a<<" x "<<10<<" = "<<a*10<<endl;
	cout<<"\n\n";
	cout<<"apakah anda ingin melihat hasil perkalian lainnya?\n";
	cout<<"y/t? "; cin>> izin;}
	if (izin=='y'){
		goto menu;
	}
	else {
		cout<<"TERIMA KASIH :)\n\n";
		system("pause");
		return 0;
	}
	
	
	
	return 0;
	
	
}

