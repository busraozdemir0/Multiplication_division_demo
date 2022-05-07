#include <iostream>
using namespace std;

//Çarpma operatörü (*) kullanmadan çarpma iþlemini yapan fonksiyon
void Carpma(int n1, int n2)
{
	int cSonuc=0, k=0;
	while(k<n1)//Girilen ilk sayýnýn deðeri k deðerinden büyük olduðu sürece çalýþacak bir döngü kuruyoruz.
	{
		cSonuc+=n2;//Her döngü adýmýnda girilen ikinci sayýnýn deðerini carpim deðiþkeniyle toplayýp carpim deðiþkenine atýyoruz.
		k++;//k deðerini bir defa artýrýyoruz.
	}
	cout<<n1<<" * "<<n2<<" = "<<cSonuc<<endl;
}

//Bölme operatörü (/) kullanmadan bölme iþlemini yapan fonksiyon
void Bolme(int n1, int n2)
{
	int bSonuc=0, bKalan=0;
	if (n1==n2)//Eðer girilen deðerler birbirine eþitse sonucun 1 olduðunu ve kalanýn da 0 olacaðýný belirtir.
	{
		bSonuc=1;
		cout<<"Bolum= "<<bSonuc<<endl<<"Kalan= "<<bKalan<<endl;		
	}
	else if (n1>n2)//Girilen deðerlerden ilki diðerinden daha büyükse ona göre iþlem yapacak.
	{
		while (n1>0 & n1>=n2)//Ýlk deðer sýfýrdan büyük olduðu ve ilk deðerin ikinci deðerden büyük olduðu sürece dönecek olan bir döngü.
		{
			n1-=n2;//Her döngü adýmýnda ilk sayýdan ikincisini çýkaracak ve eðer ilk sayýnýn deðeri ikinci sayýnýn deðerinden küçük olduðunda döngü bitecek. Ve s1'in son deðeri kalan olacak.
		    bSonuc++;//Bir üst satýrda yapýlan çýkarma iþlemi kaç kez yapýlabilmiþse bölüm deðeri odur. Bu satýrda bölüm deðerini belirleyebilmek için bir nevi döngü adým sayýsýný sayýyoruz.		    
		}
		bKalan=n1;
		cout<<"Bolum= "<<bSonuc<<endl<<"Kalan= "<<bKalan<<endl; 
	}	
	else if (n2>n1)//Girilen deðerlerden ikincisi diðerinden daha büyükse ona göre iþlem yapacak.
	{
		while (n2>0 & n2>=n1)//Ýkinci deðer sýfýrdan büyük olduðu ve ikinci deðerin ilk deðerden büyük olduðu sürece dönecek olan bir döngü.
		{
		    n2-=n1;//Her döngü adýmýnda ikinci sayýdan ilkini çýkaracak ve eðer ikinci sayýnýn deðeri ilk sayýnýn deðerinden küçük olduðunda döngü bitecek. Ve s2'in son deðeri kalan olacak.
		    bSonuc++;//Bir üst satýrda yapýlan çýkarma iþlemi kaç kez yapýlabilmiþse bölüm deðeri odur. Bu satýrda bölüm deðerini belirleyebilmek için bir nevi döngü adým sayýsýný sayýyoruz.		   
		}
		bKalan=n2;
		cout<<"Bolum= "<<bSonuc<<endl<<"Kalan= "<<bKalan<<endl;
	}
}

int main()
{
	int number1, number2;
	cout<<"------Carpma operatoru (*) kullanmadan carpma islemini yapan program-----"<<endl<<endl<<"1. sayiyi giriniz: "; 
	cin>>number1;//1. sayýyý kullanýcýdan alýyoruz.
	cout<<"2. sayiyi giriniz: ";
	cin>>number2;//2. sayýyý kullanýcýdan alýyoruz.
	Carpma(number1,number2);//Çarpma iþlemini yapacak olan fonksiyonu çaðýrýyoruz.	
	int number3, number4;
	cout<<endl<<"------Bolme operatoru (/) kullanmadan bolme islemini yapan program-----"<<endl<<endl<<"1. sayiyi giriniz: "; 
	cin>>number3;
	cout<<"2. sayiyi giriniz: ";
	cin>>number4;
	Bolme(number3, number4);//Bölme iþlemini yapacak olan fonksiyonu çaðýrýyoruz.
	return 0;
}
