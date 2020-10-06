//A simple bank management system with graphics in c++ 

#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<process.h>
#include<string.h>
#include<fstream.h>
void display();
void page1();
void page2();
void updated();
void del();
void detail();
void exit();
int ano,choice;
class account
{
int  accountno;
char name[15];
char fname[15];
char phno[15];
char address[15];
float amount;
public:
void read()
{
gotoxy(40,8);
gets(name);
gotoxy(40,11);
gets(fname);
gotoxy(40,14);
gets(phno);
gotoxy(40,17);
gets(address);
gotoxy(40,20);
cin>>accountno;
gotoxy(40,23);
cin>>amount;
}
void showdata()
{
gotoxy(20,15);
cout<<"NAME IS:";
gotoxy(40,15);
cout<<name;
gotoxy(20,17);
cout<<"FATHER'S NAME IS:";
gotoxy(40,17);
cout<<fname;
gotoxy(20,19);
cout<<"PHONE NUMBER IS:";
gotoxy(40,19);
cout<<phno;
gotoxy(20,21);
cout<<"ADDRESS IS:";
gotoxy(40,21);
cout<<address;
gotoxy(20,23);
cout<<"ACCOUNT NUMBER IS:";
gotoxy(40,23);
cout<<accountno;
gotoxy(20,25);
cout<<"AMOUNT IS:";
gotoxy(40,25);
cout<<amount;
}
int aano()
{
return accountno;
}
};
void newpage();
void newpage()
{
int choice;
cleardevice();
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
line(15,10,622,10);
line(15,10,15,466);
line(15,466,622,466);
line(622,466,622,10);
line(25,20,611,20);
line(25,20,25,455);
line(25,455,611,455);
line(611,455,611,20);
setbkcolor(CYAN);
setcolor(BLUE);
settextstyle(3,0,4);
setcolor(RED);
outtextxy(155,50,"CHOOSE ANY OPTION...");
settextstyle(1,0,4);
setcolor(BLUE);
outtextxy(150,100,"1.ADD NEW ACCOUNT");
outtextxy(150,150,"2.UPDATE ACCOUNT");
outtextxy(150,200,"3.DELETE ACCOUNT");
outtextxy(150,250,"4.DETAIL OF ACCOUNT");
outtextxy(150,300,"5.EXIT");
cin>>choice;
switch(choice)
{
case 1:
cleardevice();
page1();
getch();
break;
case 2:
cleardevice();
page2();
getch();
break;
case 3:
cleardevice();
del();
getch();
break;
case 4:
cleardevice();
detail();
getch();
break;
case 5:
cleardevice();
 exit();
break;
};
}
void login()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
char *username,*password;
line(15,10,622,10);
line(15,10,15,466);
line(15,466,622,466);
line(622,466,622,10);
line(25,20,611,20);
line(25,20,25,455);
line(25,455,611,455);
line(611,455,611,20);
settextstyle(4,0,4);
outtextxy(135,30,"Banking Management System");
setcolor(3);
settextstyle(3,0,4);
outtextxy(225,100,"Login Page");
settextstyle(3,0,1);
rectangle(270,170,420,195);
outtextxy(150,170,"USERNAME");
settextstyle(3,0,1);
rectangle(270,220,420,245);
outtextxy(150,220,"PASSWORD");
setcolor(7);
settextstyle(3,0,3);
rectangle(220,295,396,335);
gotoxy(35,12);
gets(username);
int i;
for(i=0;i<8;i++)
{
gotoxy(35+i,15);
password[i]=getch();
cout<<"*";
}
password[i]='\0';
if((strcmpi(username,"username")==0)&&(strcmpi(password,"password")==0))
{
while(!kbhit())
{
setcolor(BLUE);
outtextxy(250,300,"continue");
delay(80);
setcolor(CYAN);
outtextxy(250,300,"continue");
delay(200);
}
newpage();
}
else
{
while(!kbhit())
{
setcolor(BLUE);
outtextxy(250,300,"incorrect");
delay(80);
setcolor(CYAN);
outtextxy(250,300,"incorrect");
delay(200);
}
}
getch();
}
void page1()
{
cleardevice();
account a;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
setbkcolor(CYAN);
setcolor(BLUE);
settextstyle(3,0,4);
setcolor(RED);
rectangle(50,30,590,450);
outtextxy(155,50,"ADD NEW ACCOUNT:");
settextstyle(1,0,1);
setcolor(BLUE);
outtextxy(150,106,"NAME:");
outtextxy(150,152,"FATHER'S NAME:");
outtextxy(150,202,"PHONE NO.:");
outtextxy(150,250,"ADDRESS:");
outtextxy(150,300,"ACCOUNT NO.:");
outtextxy(150,348,"TOTAL AMOUNT:");
fstream f;
f.open("best.dat",ios::app|ios::binary);
a.read();
f.write((char *)&a,sizeof(a));
f.close();
newpage();
getch();
}
void page2()
{
cleardevice();
account a;
char choice;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
setbkcolor(CYAN);
setcolor(BLUE);
settextstyle(3,0,4);
setcolor(RED);
rectangle(50,30,590,450);
outtextxy(200,30,"UPDATE ACCOUNT");
settextstyle(1,0,1);
setcolor(BLUE);
outtextxy(150,140,"ACCOUNT NO.:");
display();
fstream f,f1;
f.close();
getch();
}
void del()
{
cleardevice();
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
setbkcolor(CYAN);
setcolor(BLUE);
settextstyle(3,0,4);
setcolor(RED);
rectangle(50,30,590,450);
outtextxy(185,50,"DELETE ACCOUNT");
settextstyle(1,0,1);
setcolor(BLUE);
outtextxy(110,140,"Enter account whose you want to delete..");
outtextxy(155,190,"ACCOUNT NO:");
fstream f,f1;
account a;
gotoxy(40,13);
cin>>ano;
f.open("best.dat",ios::in|ios::binary);
f1.open("rmu.dat",ios::out|ios::binary);
f.read((char *)&a,sizeof(a));
do
{
if(ano==a.aano())
{
a.showdata();
gotoxy(20,27);
cout<<"Do you want to delete it";
char ch;
gotoxy(50,27);
cin>>ch;
if(ch=='y'|| ch=='Y')
{
}
else
{
f1.write((char *)&a,sizeof(a));
}
}
else
{
f1.write((char *)&a,sizeof(a));
}
f.read((char *)&a,sizeof(a));
}while(f);
f.close();
f1.close();
remove("best.dat");
rename("rmu.dat","best.dat");
f.close();
getch();
newpage();
}
void detail()
{
cleardevice();
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
setbkcolor(CYAN);
setcolor(BLUE);
settextstyle(3,0,4);
setcolor(RED);
rectangle(50,30,590,450);
outtextxy(185,50,"DETAIL OF ACCOUNT");
setcolor(BLUE);
settextstyle(3,0,1);
outtextxy(110,140,"Enter account whose detail you want:");
outtextxy(155,190,"ACCOUNT NO:");
rectangle(290,190,450,220);
account a;
fstream f;
f.open("best.dat",ios::in|ios::binary);
gotoxy(40,13);
cin>>ano;
int f1=0;
f.read((char *)&a,sizeof(a));
do
{
if(ano==a.aano())
{
a.showdata();
f1=1;
}
f.read((char *)&a,sizeof(a));
}while(f);
f.close();
if(f1==0)
{
gotoxy(25,20);
setcolor(RED);
settextstyle(3,0,2);
outtextxy(175,300,"**RECORD DOES NOT EXIST**");
}
getch();
newpage();
}
void exit()
{
 cleardevice();
exit(0);
}
void display()
{
account a;
fstream f,f1;
gotoxy(40,10);
cin>>ano;

f.open("best.dat",ios::in|ios::binary);
f.read((char *)&a,sizeof(a));
do
{
if(ano==a.aano())
{
a.showdata();
}
f.read((char *)&a,sizeof(a));
}while(f);
gotoxy(20,27);
cout<<"Do you want to modify it";
char ch;
gotoxy(50,27);
cin>>ch;
if(ch=='y'|| ch=='Y')
{
updated();
getch();
newpage();
}
f.close();

getch();
}
void updated()
{
cleardevice();
clrscr();
account a;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
setbkcolor(CYAN);
setcolor(BLUE);
settextstyle(3,0,4);
setcolor(RED);
rectangle(50,30,590,450);
outtextxy(123,30,"PLEASE FILL UPDATE FORM");
settextstyle(1,0,1);
setcolor(BLUE);
outtextxy(150,106,"NAME:");
outtextxy(150,152,"FATHER'S NAME:");
outtextxy(150,202,"PHONE NO.:");
outtextxy(150,250,"ADDRESS:");
outtextxy(150,300,"ACCOUNT NO.:");
outtextxy(150,350,"TOTAL AMOUNT:");
fstream f,f1;
f.open("best.dat",ios::in|ios::binary);
f1.open("rmu.dat",ios::out|ios::binary);
f.read((char *)&a,sizeof(a));
do
{
if(ano==a.aano())
{
a.read();
f1.write((char *)&a,sizeof(a));
}
else
{
f1.write((char *)&a,sizeof(a));
}
f.read((char *)&a,sizeof(a));
}while(f);
remove("best.dat");
rename("rmu.dat","best.dat");
f1.close();
f.close();
}
void main()
{
clrscr();
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\\tc\\BGI");
//display();
login();
page1();
page2();
del();
detail();
exit();
getch();
}
