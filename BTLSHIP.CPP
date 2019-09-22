#include<fstream.h>
#include<graphics.h>
#include<conio.h>
#include<process.h>
#include<string.h>
#include<stdio.h>
#include<SHIP\data.h>

struct l_file_content          // structure for file content
{ char a,b; };

struct ship                     // structure for enemy ship
{ int x,y;

  ship()
  { x=-1; y=-1; }
};

struct file_score               // Structure for high score
{ char name[10];
  int acc;
};
//---------------------------------------------------------------------

void convert_level_to_path(int lno,char *l_path)
{
  int l_temp;
  if(lno==10)                                         // level 10
  { l_path[12]=49; }
 else
 if(lno>10 && lno<20)                                // level 11 - 19
  { l_path[12]=49;
    l_temp=lno;
    l_temp=l_temp-10; l_path[13]=l_temp+48;
  }
 else
 if(lno==20)                                         // level 20
  { l_path[12]=50; }
 else                                                // level 1 - 9
  { l_path[13]=lno+48; }

}
//----------------------------------------------------------------

void display_hit_ship(ship *f,ship *us,int lm)
{
 int a;
 int x1,x2,x3,x4; int y1,y2,y3,y4;
 int x0=30,y0=85;

 //---------------- 2 POINT SHIP ---------------------------
   int chk2_1=0,chk2_2=0;
   int axis_2;
   x1=x2=y1=y2=0;

   for(a=0;a<=lm;a++)                             // check 1 coordinate
   { if( us[a].x==f[0].x && us[a].y==f[0].y)
      { chk2_1=1; break; }
     else
      { chk2_1=0; }
   }
   for(a=0;a<=lm;a++)                             // check 2 coordinate
   { if( us[a].x==f[1].x && us[a].y==f[1].y)
      { chk2_2=1; break; }
     else
      { chk2_2=0; }
   }

   if(chk2_1==1 && chk2_2==1)
   {
    x1=f[0].x; y1=f[0].y;
    x2=f[1].x; y2=f[1].y;

   // convert to graphic coordinates
    x1=x0+x1*30;
    y1=y0+y1*25;
    x2=x0+x2*30;
    y2=y0+y2*25;

   if(x1==x2)
    { axis_2=1; }   // along y
   else
    { axis_2=0; }   // along x


   setfillstyle(1,WHITE);
   switch(axis_2)
   {
   case 0 : fillellipse(x1+30,y1+12,25,6); // x axis
	    break;
   case 1 : fillellipse(x1+15,y1+25,8,20);
	    break;
  }//end of switch
 }// end of if

//---------------- 3 (1) POINT SHIP ---------------------------
   int chk31_1=0,chk31_2=0,chk31_3=0;
   x1=x2=x3=y1=y2=y3=0;
   x0=30,y0=85;
   int axis_31;

   for(a=0;a<=lm;a++)                             // check 1 coordinate
   { if( us[a].x==f[2].x && us[a].y==f[2].y)
      { chk31_1=1; break; }
     else
      { chk31_1=0; }
   }
   for(a=0;a<=lm;a++)                             // check 2 coordinate
   { if( us[a].x==f[3].x && us[a].y==f[3].y)
      { chk31_2=1; break; }
     else
      { chk31_2=0; }
   }
   for(a=0;a<=lm;a++)                             // check 3 coordinate
   { if( us[a].x==f[4].x && us[a].y==f[4].y)
      { chk31_3=1; break; }
     else
      { chk31_3=0; }
   }

   if(chk31_1==1 && chk31_2==1 && chk31_3==1)
   {
    x2=f[3].x; y2=f[3].y;
    x3=f[4].x; y3=f[4].y;

    // convert to graphic coordinates
    x2=x0+x2*30;
    y2=y0+y2*25;
    x3=x0+x3*30;
    y3=y0+y3*25;

   if(x2==x3)
    { axis_31=1; }   // along y
   else
    { axis_31=0; }   // along x


   setfillstyle(1,WHITE);
   switch(axis_31)
   {
   case 0 : fillellipse(x2+15,y2+12,40,6); // along x axis
	    break;
   case 1 : fillellipse(x2+15,y2+12,8,31); // along y axis
	    break;
  }//end of switch
 }// end of if

//---------------- 3 (2) POINT SHIP ---------------------------
   int chk32_1=0,chk32_2=0,chk32_3=0;
   x1=x2=x3=y1=y2=y3=0;
   x0=30,y0=85;
   int axis_32;

   for(a=0;a<=lm;a++)                             // check 1 coordinate
   { if( us[a].x==f[5].x && us[a].y==f[5].y)
      { chk32_1=1; break; }
     else
      { chk32_1=0; }
   }
   for(a=0;a<=lm;a++)                             // check 2 coordinate
   { if( us[a].x==f[6].x && us[a].y==f[6].y)
      { chk32_2=1; break; }
     else
      { chk32_2=0; }
   }
   for(a=0;a<=lm;a++)                             // check 3 coordinate
   { if( us[a].x==f[7].x && us[a].y==f[7].y)
      { chk32_3=1; break; }
     else
      { chk32_3=0; }
   }

   if(chk32_1==1 && chk32_2==1 && chk32_3==1)
   {
    x2=f[6].x; y2=f[6].y;
    x3=f[7].x; y3=f[7].y;

    // convert to graphic coordinates
    x2=x0+x2*30;
    y2=y0+y2*25;
    x3=x0+x3*30;
    y3=y0+y3*25;

   if(x2==x3)
    { axis_32=1; }   // along y
   else
    { axis_32=0; }   // along x


   setfillstyle(1,WHITE);
   switch(axis_32)
   {
   case 0 : fillellipse(x2+15,y2+12,40,6); // along x axis
	    break;
   case 1 : fillellipse(x2+15,y2+12,8,31); // along y axis
	    break;
  }//end of switch
 }// end of if

//---------------- 4 POINT SHIP ---------------------------
   int chk4_1=0,chk4_2=0,chk4_3=0,chk4_4=0;

   x1=x2=x3=x4=y1=y2=y3=y4=0;
   x0=30,y0=85;
   int axis_4;

   for(a=0;a<=lm;a++)                             // check 1 coordinate
   { if( us[a].x==f[8].x && us[a].y==f[8].y)
      { chk4_1=1; break; }
     else
      { chk4_1=0; }
   }
   for(a=0;a<=lm;a++)                             // check 2 coordinate
   { if( us[a].x==f[9].x && us[a].y==f[9].y)
      { chk4_2=1; break; }
     else
      { chk4_2=0; }
   }
   for(a=0;a<=lm;a++)                             // check 3 coordinate
   { if( us[a].x==f[10].x && us[a].y==f[10].y)
      { chk4_3=1; break; }
     else
      { chk4_3=0; }
   }
   for(a=0;a<=lm;a++)                             // check 4 coordinate
   { if( us[a].x==f[11].x && us[a].y==f[11].y)
      { chk4_4=1; break; }
     else
      { chk4_4=0; }
   }

   if(chk4_1==1 && chk4_2==1 && chk4_3==1 && chk4_4==1)
   {
    x2=f[9].x; y2=f[9].y;
    x3=f[10].x; y3=f[10].y;

    // convert to graphic coordinates
    x2=x0+x2*30;
    y2=y0+y2*25;
    x3=x0+x3*30;
    y3=y0+y3*25;

   if(x2==x3)
    { axis_4=1; }   // along y
   else
    { axis_4=0; }   // along x


   setfillstyle(1,WHITE);
   switch(axis_4)
   {
   case 0 : fillellipse(x2+30,y2+12,50,6); // along x axis
	    break;
   case 1 : fillellipse(x3+15,y3,8,40); // along y axis
	    break;
  }//end of switch
 }// end of if

//---------------- 5 POINT SHIP ---------------------------
   int chk5_1=0,chk5_2=0,chk5_3=0,chk5_4=0,chk5_5=0;
   x1=x2=x3=x4=y1=y2=y3=y4=0;
   x0=30,y0=85;
   int axis_5;

   for(a=0;a<=lm;a++)                             // check 1 coordinate
   { if( us[a].x==f[12].x && us[a].y==f[12].y)
      { chk5_1=1; break; }
     else
      { chk5_1=0; }
   }
   for(a=0;a<=lm;a++)                             // check 2 coordinate
   { if( us[a].x==f[13].x && us[a].y==f[13].y)
      { chk5_2=1; break; }
     else
      { chk5_2=0; }
   }
   for(a=0;a<=lm;a++)                             // check 3 coordinate
   { if( us[a].x==f[14].x && us[a].y==f[14].y)
      { chk5_3=1; break; }
     else
      { chk5_3=0; }
   }
   for(a=0;a<=lm;a++)                             // check 4 coordinate
   { if( us[a].x==f[15].x && us[a].y==f[15].y)
      { chk5_4=1; break; }
     else
      { chk5_4=0; }
   }
   for(a=0;a<=lm;a++)                             // check 5 coordinate
   { if( us[a].x==f[16].x && us[a].y==f[16].y)
      { chk5_5=1; break; }
     else
      { chk5_5=0; }
   }

   if(chk5_1==1 && chk5_2==1 && chk5_3==1 && chk5_4==1 && chk5_5==1)
   {
    x3=f[14].x; y3=f[14].y;
    x4=f[15].x; y4=f[15].y;

    // convert to graphic coordinates
    x3=x0+x3*30;
    y3=y0+y3*25;
    x4=x0+x4*30;
    y4=y0+y4*25;

   if(x3==x4)
    { axis_5=1; }   // along y
   else
    { axis_5=0; }   // along x


   setfillstyle(1,2);
   switch(axis_5)
   {
   case 0 : fillellipse(x3+15,y3+12,65,6); // along x axis
	    break;
   case 1 : fillellipse(x3+15,y3+12,8,53); // along y axis

	    break;
  }//end of switch
 }// end of if

}
//--------------------------------------------------------------------
//--------------------------------------------------------------------


main()
{
clrscr();
 /*------------------- initialising graphic system ----------------*/
 int gdriver=EGA,gmode=EGAHI,gr_chk;
 initgraph(&gdriver,&gmode,"");
 gr_chk=graphresult();

 /*----------------- graphics check ------------------------------*/
   system_chk(gr_chk);

 /*------------------------ Game Key Check --------------------------*/
   // search for file

   int chk_f=0;
   fstream file_chk;
   file_chk.open("C:\\WINDOWS\\pass.dat",ios::in);
   if(!file_chk)
   { chk_f=1; }
   file_chk.close();

   if(chk_f==1)
   {
    char init='0';                                    // make file
    file_chk.open("C:\\WINDOWS\\pass.dat",ios::out);
    file_chk.seekp(0,ios::beg);
    file_chk.write((char *)&init,1);
    file_chk.seekp(0,ios::beg);
    file_chk.close();
   }
  //----------------------------------------------------------

   int p=0;
   const char pass[8]={"75199108"};
   char filep[8];
   fstream file_pass;

   file_pass.open("C:\\WINDOWS\\pass.dat",ios::in);      // get for old pass
   p=0;
   file_pass.seekg(0,ios::beg);
   while(!file_pass.eof())
   {
    file_pass.seekg(p,ios::beg);
    file_pass.read((char *)&filep[p],1);
    p++;
   }
   file_pass.close();


     //-------------------  checking the key in file --------------------
   int flag1=0,flag2=0;
   for(p=0;p<8;p++)
   { if(filep[p]==pass[p])
      { flag1=1; }
     else
      { flag1=0; break; }
   }

     //--------------------------- get pass if wrong---------------------
   char pin[8];
   if(flag1==0)
   {
     cleardevice();
     pass_enter();          // get new pass if wrong
     gotoxy(30,17);
     for(p=0;p<8;p++)
     { pin[p]=getche();
       cout<<pin[p];
     }
     gotoxy(1,1);

     for(p=0;p<8;p++)        // check new pass
     { if(pin[p]==pass[p])
	{ flag2=1; }
       else
	{ flag2=0; break; }
     }

     if(flag2==1)
     {
      file_pass.open("C:\\WINDOWS\\pass.dat",ios::out);   // save new pass
      p=0;
      while(p<8)
      {
       file_pass.seekp(p,ios::beg);
       file_pass.write((char *)&pin[p],1);
       p++;
      }
      file_pass.close();
      cleardevice();
      loading_key();
      delay(200);
      cleardevice();
     }
     else
     { cleardevice();
       box();
       setcolor(WHITE);
       outtextxy(200,129, "Activation Failed...");
       setcolor(EGA_RED);
       outtextxy(240,145, "ERROR! Invalid Key");
       setcolor(0);
       outtextxy(200,165, "Please Restart the Game and");
       outtextxy(200,175, "enter correct serial number.");
       game_sounds(-1);
       getch();
       exit(0);
     }
     setcolor(WHITE);
}
       //------------------- end of checking


 /*----------------------------- start ------------------------------------*/

 int choice;
 int EX;
 int ch_mode=0;

 loading_game();
 do
 {
 choice=0;
 ch_mode=0;
 choice=option_screen();
 switch(choice)
 {
  case 1 : cleardevice();            		  // PLAY
	   setbkcolor(0);
	   {
	    ch_mode=0;
	    ch_mode=mode_select();

	    char PATH[19]={"levels\\level00.dat"};
	    int GAME_LEVEL;
	    fstream f_l;
	    l_file_content lvl[17];
	    ship enemy[17];
	    ship user[50];

	    int l,i;


	      //----------------------------- MISISON mode---------------------------

	      if(ch_mode==1)
	      {
		cleardevice();
		int mission;
		mission=play_mission();	          // load mission
		GAME_LEVEL=mission;
		convert_level_to_path(mission,PATH);   // convert

		cout<<"mission : "<<mission;
		cout<<"\nFINAL PATH : "<<PATH;

	      }

	      //----------------------------- arcade mode---------------------------

	      if(ch_mode==2)
	      {
		cleardevice();

		 for(i=0;i<17;i++)                   //reset
		 {  enemy[i].x=0;  enemy[i].y=0;  }

		int a_level;
		int al_chk;

		a_level=play_arcade();
		cout<<"Level : "<<a_level;
		GAME_LEVEL=a_level;

		al_chk=level_file_chk(a_level);  // check level file

		if(al_chk==0)
		 { error_box();  game_sounds(-1); getch(); exit(0); }

		convert_level_to_path(a_level,PATH);   // convert

		cout<<"\nFINAL PATH : "<<PATH;

	      }


	      //----------------------------- training mode---------------------------

	      if(ch_mode==3)
	      {
		cleardevice();

		 for(i=0;i<17;i++)                      //reset
		 {  enemy[i].x=0;  enemy[i].y=0;  }

		int r_level;
		int rl_chk;

		r_level=level_randomize();               // randomize level
		cout<<"Level : "<<r_level;
		GAME_LEVEL=r_level;

		rl_chk=level_file_chk(r_level);          // check level file

		if(rl_chk==0)
		 { error_box();  game_sounds(-1); getch(); exit(0); }

		convert_level_to_path(r_level,PATH);      // convert

		cout<<"\nFINAL PATH : "<<PATH;


		}
		//--------------------------------------------------------------


	     if(ch_mode!=4)              //if not back
	     {
	       cleardevice();
		  //-------------- extract_level -------------
		     l=0;
		     f_l.open(PATH,ios::in);
		     l=0; i=0;
		     while(!f_l.eof())
		     {
		      f_l.seekg(i,ios::beg);
		      f_l.read((char *)&lvl[l],2);
		      i=i+2;
		      l++;
		     }
		     f_l.close();


			     //  convertion
		     for(i=0;i<17;i++)
		     {
		      enemy[i].x=lvl[i].a-48;
		      enemy[i].y=lvl[i].b-48;
		     }

		//--------------- LOADING ------------------------
	       cleardevice();
	       loading_main_game(ch_mode,GAME_LEVEL);
	       tutorial();

		//--------------- PLAY GAME ------------------------


	       char usr_x,usr_y;
	       int temp_x,temp_y;

	       int usr_chk=0;
	       int AMMO=0;
	       int WIN=0;
	       int HITS=0;
	       int SHOOTS=0;
	       int ACCURACY=1;
	       int j,ux_temp,limit;

	       if(GAME_LEVEL>=0 && GAME_LEVEL<=5)
		{ AMMO=50; }
	       else
	       if(GAME_LEVEL>=6 && GAME_LEVEL<=10)
		{ AMMO=45; }
	       else
	       if(GAME_LEVEL>=11 && GAME_LEVEL<=15)
		{ AMMO=40; }
	       else
	       if(GAME_LEVEL>=16 && GAME_LEVEL<=20)
		{ AMMO=34; }

	       limit=AMMO;

	       ship user[50];
	       for(j=0;j<17;j++)
	       { user[j].x=-1;  user[j].y=-1; }

	       game_board(GAME_LEVEL);
	       for(i=0;i<limit;i++)            // loop for no of shots
	       {
		 //----------- display ammo ------------------
		 setcolor(WHITE);
		 setfillstyle(1,0);
		 bar(540,150,570,170);
		 rectangle(540,150,570,170);
		 gotoxy(69,12); cout<<AMMO;

		do
		{
		 //------------ erase coordinates --------------

		 board_comment(6);

		 setfillstyle(1,0);
		 bar(425,150,465,170);
		 setcolor(WHITE);
		 rectangle(425,150,465,170);

		 bar(425,173,465,193);
		 rectangle(425,173,465,193);

		 // ------------- get and display entry --------------
		 gotoxy(55,12); usr_x=getch(); cout<<usr_x;
		 gotoxy(55,14); usr_y=getch(); cout<<usr_y;
		 ux_temp=usr_x;

		 if( (usr_x>=48 && usr_x<=57)&&(usr_y>=48 && usr_y<=57) )
		  { usr_chk=1;}
		 else
		 if(usr_x=='e'||usr_x=='E'|| usr_x==27 || usr_y==27)
		  {
		    board_comment(-2);  // exit
		    usr_chk=0;
		  }
		 else
		  {
		    if(usr_x==8 || usr_y==8)  // Backspace
		     { board_comment(-3); delay(1500); usr_chk=0; }
		    else
		    { board_comment(-1);    //wront entry
		      usr_chk=0;
		      delay(1500);
		    }
		  }

		   // ------ check for repeated entry ------

		  temp_x=usr_x-48;
		  temp_y=usr_y-48;

		  for(j=0;j<50;j++)
		  {
		   if((temp_x==user[j].x)&&(temp_y==user[j].y))
		    { usr_chk=0; board_comment(7); delay(1500); }
		  }

		}while(usr_chk==0);




	       //----------- processing.........  -----------------
	       board_comment(5);
	       delay(1500);

	       temp_x=usr_x-48;
	       temp_y=usr_y-48;

	       user[i].x=temp_x; user[i].y=temp_y;

	       // ------------ comparing hits
	       int hit_chk=0;
	       for(j=0;j<17;j++)
	       {
		if((temp_x==enemy[j].x)&&(temp_y==enemy[j].y))
		 { shots(temp_x,temp_y,1);
		   board_comment(1); delay(2000);
		   hit_chk=1;
		   display_hit_ship(enemy,user,SHOOTS);
		   HITS++;
		   break;
		 }
		else
		 { shots(temp_x,temp_y,0);
		   hit_chk=0;
		 }
	       }

	       //------------ Game Status
	       setfillstyle(1,0);
	       bar(370,235,410,255);
	       setcolor(WHITE);
	       rectangle(370,235,410,255);
	       gotoxy(48,18); cout<<HITS;
	       //Progress Bar
	       setfillstyle(1,4);
	       bar(511,239,511+(HITS*7),250);

	       if(hit_chk==0)
	       {  board_comment(0); delay(2000); }

	       AMMO--;
	       SHOOTS++;

	       // GAME OVER CHECK
		  if(HITS==17)
		  { WIN=1; break; }
	       }// end of for lop till 50

	       //------------------- end of game--------------------
	       //------------------- Display Results ---------------

	       game_over(WIN);

	       ACCURACY=(HITS*100)/SHOOTS;

	       gotoxy(50,13);  cout<<limit;
	       gotoxy(50,14);  cout<<SHOOTS;
	       gotoxy(50,15);  cout<<HITS;
	       gotoxy(50,16);  cout<<(SHOOTS-HITS);
	       gotoxy(43,19);  cout<<ACCURACY<<" %";

	       settextstyle(0,0,1);
	       setcolor(WHITE);
	       outtextxy(200,171,"Total AMMO :");
	       outtextxy(200,186,"Shoots Taken :");
	       outtextxy(200,201,"No. of Hits :");
	       outtextxy(200,216,"No. of Fake Shoots :");
	       outtextxy(230,256,"ACCURACY : ");

	       if( (ch_mode==1)&&(WIN==1)&&(GAME_LEVEL!=20) )
	       { settextstyle(0,0,2);
		 setcolor(4);
		 outtextxy(150,290,"Next Level Unlocked !");
	       }

	       setcolor(15);
	       line(0,247,640,247);
	       line(0,270,640,270);

	       getch();
	       //------------------ end of results
			  // save game
	       if( (ch_mode==1)&&(WIN==1)&&(GAME_LEVEL!=20) )
	       { saving_game_mission(GAME_LEVEL); }

			// end of game
	       if( (ch_mode==1)&&(WIN==1)&&(GAME_LEVEL==20) )
	       {
		 cleardevice();
		 setbkcolor(0);

		  // Ship Graphics
		  // right guns
		  int G1_R[]={ 395,82 , 450,65, 453,70 , 395,97 };
		  int G2_R[]={ 410,100 , 470,82, 473,87 , 410,115 };
		  setfillstyle(1,8);
		  setcolor(WHITE);
		  fillpoly(4,G1_R);
		  fillpoly(4,G2_R);

		   // Left guns
		  int G1_L[]={ 265,82 , 210,65, 207,70 , 265,97 };
		  int G2_L[]={ 250,100 , 190,82, 187,87 , 250,115 };
		  setfillstyle(1,8);
		  setcolor(WHITE);
		  fillpoly(4,G1_L);
		  fillpoly(4,G2_L);

		   // tower
		  setfillstyle(1,8);         // antenna 1
		  setcolor(0);
		  bar(328,3,331,105);
		  bar(310,10,350,12);

		  bar(299,15,301,105);       // antenna 2
		  bar(288,20,312,21);

		  setfillstyle(1,8);         // main tower
		  setcolor(WHITE);
		  bar(310,40,350,105);
		  rectangle(310,40,350,105);

		  setfillstyle(1,WHITE);
		  setcolor(8);
		  fillellipse(330,52,7,7);


		   // floor 3
		  setfillstyle(1,8);
		  setcolor(WHITE);
		  bar(290,65,370,105);
		  rectangle(290,65,370,105);

		   // floor 2
		  setfillstyle(1,7);
		  setcolor(WHITE);
		  bar(265,75,395,105);
		  rectangle(265,75,395,105);

		  setfillstyle(1,0);
		  setcolor(7);
		  bar(280,82,380,88);
		  line(300,82,300,88);
		  line(320,82,320,88);
		  line(340,82,340,88);
		  line(360,82,360,88);


		   // floor 1
		  setfillstyle(1,8);
		  setcolor(WHITE);
		  bar(250,95,410,140);
		  rectangle(250,95,410,140);

		   // ship base
		  int ship_base[]={330,105 , 435,130 , 405,200 , 255,200 , 225,130 };
		  setfillstyle(1,6);
		  setcolor(WHITE);
		  fillpoly(5,ship_base);
		  setcolor(WHITE);
		  line(330,100,330,200);

		   // fence
		  setcolor(WHITE);
		  line(330,100,225,125); line(330,100,435,125);
		  line(225,125,225,130); line(435,125,435,130);

		  // logo display
		  settextstyle(GOTHIC_FONT,0,8);
		  setcolor(0);
		  outtextxy(162,152,"BattleShip");
		  logo(160,150);
		  // end of ship



		 settextstyle(8,0,5);
		 setcolor(WHITE);
		 outtextxy(110,265,"CONGRATULATIONS!");
		 setcolor(4);
		 line(110,318,530,318);

		 settextstyle(7,0,1);
		 setcolor(WHITE);
		 outtextxy(50,325,"You Have Completed All Levels!  Thank You For Playing!");

		 game_sounds(2);
		 delay(500);
		 sound(300);
		 delay(200);
		 nosound();
		 sound(500);
		 delay(900);
		 nosound();

		 getch();
		 cleardevice();
		 Credits(0);

		 cleardevice();
		 char RESET;
		 box();
		 setcolor(EGA_WHITE);
		 outtextxy(200,129, "Reset Game");

		 settextstyle(0,0,1);
		 setcolor(EGA_RED);
		 outtextxy(235,155, "Do You want to Reset");
		 outtextxy(235,165,"  the Game ? (Y/N)");
		 RESET=getch();

		 if(RESET=='y' || RESET=='Y')
		 {
		  fstream f_l_temp;
		  int ret_temp=0;

		  box();
		  setcolor(EGA_WHITE);
		  outtextxy(200,129, "Reset Game");

		  settextstyle(0,0,1);
		  setcolor(EGA_RED);
		  outtextxy(260,155, "Please Wait !");

		  f_l_temp.open("C:\\windows\\btl_save.dat",ios::out);
		  f_l_temp.seekp(0,ios::beg);
		  f_l_temp<<ret_temp;
		  f_l_temp.close();
		  delay(1500);

		  outtextxy(260,165,"    Done!");

		  setcolor(1);
		  outtextxy(210,190, "Press any key to continue!");
		  getch();
		 }
	       }//end of congratulation if


	       //------------------- High Score ----------------------
	     fstream f_score;

	     file_score sc_data[7];

	    //------------------ check and create file on fail ------------
	     file_score def_sc={"Gagandeep",50} , defl={"default",0};
	     f_score.open("hsdata.dat",ios::in);
	     if(f_score==0)
	     { f_score.open("hsdata.dat",ios::out);
	       f_score.seekp(0,ios::beg);
	       f_score.write((char *)&def_sc,sizeof(def_sc));
	       f_score.close();

	       for(i=0;i<6;i++)
	       {  f_score.open("hsdata.dat",ios::out | ios::app);
		   f_score.seekg(0,ios::end);
		   f_score.write((char *)&defl,sizeof(defl));
		  f_score.close();
	       }

	     }
	     f_score.close();


	    //------------------------read file -----------------------------
	     f_score.open("hsdata.dat",ios::in);
	       f_score.seekg(0,ios::beg);
	       for(i=0;i<7;i++)
	       { f_score.read((char *)&sc_data[i],sizeof(sc_data[i])); }
	     f_score.close();

	     //---------------------- Save New Entry -------------------
	     int hs_chk=0;
	     int max_hs=sc_data[0].acc;
	     int min_hs=sc_data[0].acc;
	     int min_pos=0;

	     for(i=0;i<7;i++)
	     {  if(sc_data[i].acc>max_hs)   // max value
		{ max_hs=sc_data[i].acc;}

		if(sc_data[i].acc<min_hs)   // min value
		{ min_hs=sc_data[i].acc;}
	     }

	     for(i=0;i<7;i++)               // find min position
	     {
	      if(sc_data[i].acc==min_hs)
	      { min_pos=i; break; }
	     }

	     if(ACCURACY>max_hs)             // check for high score
	       hs_chk=1;
	     else
	       hs_chk=0;

	     //---------------- add high score
	     char usrname[10];
	     if(hs_chk==1)
	     {
	      //----------------- graphic display ------------------
	     cleardevice();
	     setbkcolor(6);
	     logo(160,0);
	     setfillstyle(1,14);             // separate bar
	     bar(0,125,640,180);
	     settextstyle(0,0,2);
	     setcolor(4);
	     outtextxy(190,130,"Congratulations!");
	     setcolor(0);
	     outtextxy(110,155,"You Have The Highest Score.");

	     trademark(14);

	     settextstyle(3,0,3);
	     setcolor(WHITE);
	     outtextxy(220,197,"Accuracy : ");
	     gotoxy(45,16); cout<<ACCURACY;

	     outtextxy(150,242,"Enter your Name : ");
	     rectangle(365,250,470,275);

	     sound(300);
	     delay(200);
	     nosound();
	     sound(500);
	     delay(900);
	     nosound();

	     gotoxy(48,19); gets(usrname);

	     cleardevice();
	     setbkcolor(BLACK);
	     box();
	     setcolor(EGA_WHITE);
	     outtextxy(200,129, "Saving...");
	     setcolor(EGA_RED);
	     outtextxy(255,145, "Please Wait!");
	     setcolor(1);
	     outtextxy(270,165, "Saving...");

	     setcolor(4);
	     rectangle(220,179,400,195);

	     setfillstyle(SOLID_FILL, GREEN );
	     for(int i=224;i<=396;i=i+4)
	     {
	      delay(100);
	      bar(223,182,i,192);
	     }
	     //-----------------------------------------------------

	      for(i=0;i<10;i++)
	      { sc_data[min_pos].name[i]=usrname[i]; }
	      sc_data[min_pos].acc=ACCURACY;

	    //------------- swapping before saving ---------------------
	    file_score temp;
	    int k;
	    for(i=0;i<7;i++)
	    {
	     for(k=0;k<6;k++)
	     {
	      if(sc_data[k+1].acc>sc_data[k].acc)
	      { temp=sc_data[k];
		sc_data[k]=sc_data[k+1];
		sc_data[k+1]=temp;
	      }
	     }

	    }

	     //----------------- save file ---------------------------
	     f_score.open("hsdata.dat",ios::out);
	     f_score.seekg(0,ios::beg);
	     f_score.write((char *)&sc_data[0],sizeof(sc_data[0]));
	     f_score.close();

	     for(i=1;i<7;i++)
	      {  f_score.open("hsdata.dat",ios::out | ios::app);
		   f_score.seekg(0,ios::end);
		   f_score.write((char *)&sc_data[i],sizeof(sc_data[i]));
		  f_score.close();
	      }
	     }//end of if(hs_chk==1) condition



	     }  //end of 'if(ch_mode!=4)'

	     cleardevice();
	     setbkcolor(0);

	    } //end of main compuond case 1

	   break;

  case 2 : cleardevice();      		          // HIGH SCORE
	   high_score();

	   fstream f_score;
	   file_score sc_data[7];

	   //------------------ check and create file------------------------
	     file_score def_sc={"Gagandeep",50} , defl={"default",0};
	     f_score.open("hsdata.dat",ios::in);
	     if(f_score==0)
	     { f_score.open("hsdata.dat",ios::out);
	       f_score.seekp(0,ios::beg);
	       f_score.write((char *)&def_sc,sizeof(def_sc));
	       f_score.close();

	       for(i=0;i<6;i++)
	       {  f_score.open("hsdata.dat",ios::out | ios::app);
		   f_score.seekg(0,ios::end);
		   f_score.write((char *)&defl,sizeof(defl));
		  f_score.close();
	       }

	     }
	     f_score.close();

	   //------------------read file--------------------
	   f_score.open("hsdata.dat",ios::in);
	     f_score.seekg(0,ios::beg);
	     for(i=0;i<7;i++)
	     { f_score.read((char *)&sc_data[i],sizeof(sc_data[i])); }
	   f_score.close();

	   //-------------------- Display -------------------------------
	   char temp_def_chk[10]={"default"};
	   for(i=0;i<7;i++)
	   {
	    if( strcmpi(sc_data[i].name,temp_def_chk) )
	    { gotoxy(29,i+15);cout<<sc_data[i].name;    gotoxy(49,i+15); cout<<sc_data[i].acc<<" %"; }
	   }


	   getch();

	   choice=0;
	   ch_mode=0;
	   break;

  case 3 : cleardevice();       	          // HELP
	   setbkcolor(0);
	   help();
	   break;

  case 4 : cleardevice();            		  // CREDITS
	   setbkcolor(0);
	   Credits(1);
	   cleardevice();
	   break;

  case 5 : cleardevice();		          // EXIT
	   EX=exit_menu();
	   if(EX==1)
	    { exit(0); }
	   break;

  }   // end of main switch

 }while((EX==2) || (choice!=5) || (ch_mode==4));




getch();
cleardevice();
closegraph();
return 0;
}
