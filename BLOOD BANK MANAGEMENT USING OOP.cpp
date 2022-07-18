#include<conio.h>
#include<iostream.h>
#include<string.h>
class patient
{
Public:
int patient_id;
char patient_name[20];
char patient_bloodgroup[20];
char patient_disease[20];
char quantity[20];
int patient_bedno;
char patient_gender[10];
long patient_phno;
};
class hospital
{
Public:
int hospital_id;
char hospital_add[200];
char hospital_name[20];
};
class bloodgroup: protected patient, protected hospital
{
Public:
int I;
char bg[5];
char bg1[5];
char bg2[5];
char bg3[5];
char bg4[5];
char bg5[5];
Char bg6[5];
struct data
{
int stock;
}s1[8];
void display()
{
s1[0].stock=2;
s1[1].stock=1;
s1[2].stock=5;
s1[3].stock=5;
s1[4].stock=6;
s1[5].stock=7;
s1[6].stock=8;
s1[7].stock=9;
char bg[5]=”O+”;
char bg1[5]=”O- ”;
char bg2[5]=”A+ ”;
char bg3[5]=”A- ”;
char bg4[5]=”B+”;
char bg5[5]=”B-”;
char bg6[5]=”AB+ ”;
char bg7[5]=”AB-- ”;
PROGRAM CODE:
cout<<”BLOOD GROUP DETAILS\n”;
cout<<”blood group name\t stock\n”;
cout<<bg<<”\t\t\t”<<s1[0].stock”\n”;
cout<<bg1<<”\t\t\t”<<s1[1].stock<<”\n”;
cout<<bg2<<”\t\t\t”<<s1[2].stock<<”\n”;
cout<<bg3<<”\t\t\t”<<s1[3].stock<<”\n”;
cout<<bg4<<”\t\t\t”<<s1[4].stock<<”\n”;
cout<<bg5<<”\t\t\t”<<s1[5].stock<<”\n”;
cout<<bg6<<”\t\t\t”<<s1[6].stock<<”\n”;
cout<<bg7<<”\t\t\t”<<s1[7].stock<<”\n”;
}
Void getdata1()
{
cout<<”\ENTER PATIENT DETAILS\n”;
cout<<”\npatient_id:”;
cin>>patient_id;
cout<<”\npatient_name:”;
cin>>patient_name;
cout<<”\npatient_bloodgroup:”;
cin>>patient_bloodgroup;
cout<<”\npatient_disease:”;
cin>>patient_disease;
cout<<”\nquantity:”;
cin>>quanity;
cout<<”\npatient_bedno:”;
cin>>patient_bedno;
cout<<”\npatient_gender:”;
cin>>patient_gender;
cout<<”\npatient_phno:”;
cin>>patient_phno;
}
Void display1()
{
cout<<”\n_____PATIENT DETAILS______\n”;
cout<<”\npatient_id:\t”<<patient_id
<<”\npatient_name\t”<<patient_name
<<”\npatient_blo odgroup\t”<<patient_bloodgroup
<<’\npatient _disease\t”<<patient_disease
<<”\nno.of _blood required\t”<<quantity
<<”\npatient_bedno\t”<<patient_bedno
<<”\npatient_gender\t”<<patient_gen de
r<<”\npatient phnNo\t”<<patient_phno<<”\n”;
}
Void getdata2()
{
cout<<”\nENTER HOSPITAL DETAILS\n”;
cout<<”hospital_id:”;
cin>>hospital_id;
cout>>”\nhospital_name:”;
cin>>hospital_name;
cout<<”\nhospital_address:”;
cin>>hospital_add;
}
Void display2()
{
cout <<”\nHOSPITAL DETAILS\n”;
cout<<”hospital_id:”
<<”\nhospital_name:”<<hospital_name
<<”\nhospital_address:”<<hospital_add;
}
};
void main()
{
clrscr();
bloodgroup bl;
int ch,ans;
char username[20];
long password; time;
cout<<”\nUSERNAME: ”;
cin>>username;
cout<<”\nPASSWORD:”;
cin>>password;
if
(password==123 && strcmp(username,”admin”)==0)
{
do
{
cout<<”\nENTER YOUR CHOICE\n
1. ENTER PATIENT DETAILS\n
2. .ENTER HOSPITAL DETAILS\n
3. DISPLAY BLOOD GROUP DETAILS\n
4. DISPLAY PATIENT DETAILS\n
5. DISPLAY HOSPITAL DETAILS\n
6. DISPLAY ALL DATA”
cin>>ch;
switch(ch)
{
case 1:
b1.getdata1();
break;
case 2:
b1.getdata2()
break;
case 3:
b1.display()
break;
case 4:
b1.display1()
break”
case 5:
b1.display2()
break;
case 6:
b1.display();
b1.display1(
b1.display2();
break;
default:
cout<<”\nINVALID CHOICE”;
}
cout<<”\nDO YOU WANT TO CONTINUE,IF YES ENTER 1”;
cin>>ans;
}while(ans==1);
}
else
{
cout<<”\nINVALID PASSWORD OR USERNAME”;
}
getch();
}
