int Sifra,ostatak;
int brojac=0;
int temp=0;
cout<<"unesi prirodan broj"<<endl;
Do
{
cin>>sifra;
}
while(sifra<=0)

do
{
ostatak=sifra%10;    //dobivas ostatak to jest jedinicu 
sifra=sifra/10;   //brises broj sa desne strane

if(ostatak%2==0)  //ako je ostatak 0 to je parana 
{
ostatak=5
}
temp=temp+ostatak*pow(10,brojac);  
brojac++;
}
while(sifra!=0)

cout <<temp<<endl;
recimo broj  1234567 
1. korak     temp=0+7*10^0     =>     0+7*1 =7
2.korak     temp=7+5*10^1       =>    7+50 =57
3.korak     temp=57+5*10^2    =>57+500=557
itd
