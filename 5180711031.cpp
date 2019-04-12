#include<iostream>
using namespace ::std;
struct nilai{
char nilai;
float uts,uas,tgs,abs;
}ni;
float hitung (float uts,float uas,float tgs,float abs) {
float hsl;
hsl= (uts*0.2)+(uas*0.3)+(tgs*0.35)+(abs*0.15);
if (hsl>81) {cout<<"Nilai A";}
else if (hsl>61) {cout<<"Nilai B";}
else if (hsl>41) {cout<<"Nilai C";}
else if (hsl>21) {cout<<"Nilai D";}
else if (hsl>0) {cout<<"Nilai E";}
cout<<"\nNilai Anda "<<hsl;
}

main (){
double uts,uas,tgs,abs;
cout<<"\n===============================================";
cout<<"masukan nilai UTS ";cin>>ni.uts;
cout<<"masukan nilai UAS ";cin>>ni.uas;
cout<<"masukan nilai Tugas ";cin>>ni.tgs;
cout<<"masukan nilai Absen ";cin>>ni.abs;
cout<<"\n===============================================";
hitung (ni.uts,ni.uas,ni.tgs,ni.abs);
}
