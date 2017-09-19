
#include<iomanip>
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
void display(void);

int main(int argc,char **argv)
{
unsigned short int pk;
unsigned char p;
ifstream a;
 p=15;
   pk=p;
   cout<<hex<<pk<<" ";
if (argc>1)
{
   a.open(*(argv+1));
   while(a)
   {
   p=a.get();
   pk=p;
   cout<<hex<<pk<<" ";
   }
}
else 
{
cout<<"\t\nNo arguments given :\n\n";
cout<<"\tsyntax :  tohex <file-name.extention>\n\n";
cout<<"\tex :      tohex boot.bin\n";
}
	getch();
	return 0;
}
