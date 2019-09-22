#include<fstream.h>
#include<conio.h>
#include<process.h>

main()
{
clrscr();

  fstream f;
  int i,ctr=0;
  char a;
  char file_name[32][25]={"EGAVGA.BGI",
			  "TRIP.CHR",
			   "LITT.CHR",
			   "SANS.CHR",
			   "GOTH.CHR",
			   "SCRI.CHR",
			   "SIMP.CHR",
			   "TSCR.CHR",
			   "LCOM.CHR",
			   "EURO.CHR",
			   "BOLD.CHR",
			   "levels\\level00.dat",
			   "levels\\level01.dat",
			   "levels\\level02.dat",
			   "levels\\level03.dat",
			   "levels\\level04.dat",
			   "levels\\level05.dat",
			   "levels\\level06.dat",
			   "levels\\level07.dat",
			   "levels\\level08.dat",
			   "levels\\level09.dat",
			   "levels\\level10.dat",
			   "levels\\level11.dat",
			   "levels\\level12.dat",
			   "levels\\level13.dat",
			   "levels\\level14.dat",
			   "levels\\level15.dat",
			   "levels\\level16.dat",
			   "levels\\level17.dat",
			   "levels\\level18.dat",
			   "levels\\level19.dat",
			   "levels\\level20.dat", };

   gotoxy(1,1);
   cout<<"                   BattleShip - Pacific Warriors"<<endl;
   cout<<"                    Verifying Game Requirements "<<endl;
   cout<<"\nThe following files are under error state : ";
   cout<<"\n------------------------------------------------------------------------"<<endl;
   cout<<"    File Name                            Status";
   cout<<"\n------------------------------------------------------------------------"<<endl;
   int temp=0;
   for(i=0;i<32;i++)
   {
    f.open(file_name[i],ios::in);
     if(f==0)
     {
       if(i<=11)
	{ cout<<"    "<<file_name[i]<<"                             missing"<<endl; }
       else
	{ cout<<"    "<<file_name[i]<<"                   missing"<<endl; }
       ctr++;
       temp++;
     }
    f.close();


   if(temp>12)
   { cout<<"\n\n   Press any key to continue...."; getch(); temp=0; cout<<"\n\n";}

   }

   // comment
   if(ctr==0)
    { cout<<"\n\n	                   No Error Found!"; }
   else
    { cout<<"\n\n    Please Make sure that these file are present in the folder";
      cout<<"                                      or reinstall the game!";
    }
   cout<<"\n------------------------------------------------------------------------"<<endl;
   cout<<"\n                       Enter any Key to Exit !";


 getch();
 return 0;
}
