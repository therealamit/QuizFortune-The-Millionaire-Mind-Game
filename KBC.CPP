#include<Iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int flag=0,top=0;
void main(void)
{
 clrscr();
 int a1,v1,v2,option, asc,ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10,ans11,ans12,ans13,ans14,ans15,p,s,l,w,c,x,y,j,o,u,k;
 char n[30],P[30],q,opt,b[10],space;



 textbackground(BLACK);
 textcolor(BROWN);
 cout<<"****************************KAUN BANEGA CROREPATI\a\a\a\a\a\a\a*******************************";
 textcolor(YELLOW+BLINK);
 cprintf("****************************************************************************************************************************************************************");
 textcolor(MAGENTA+BLINK);
 cprintf("                     DESIGNED AND CREATED BY AMIT KUMAR DEOGHORIA");
 textcolor(CYAN);
  cout<<"\n\n\n\n\n\t\t\tLOADING";
 textcolor(WHITE+BLINK);
 cprintf(".............");
 cout<<"PLEASE WAIT";
 cout<<"\n\n\n\t\t\t\tPRESS any key ";
  getch();
 clrscr();
  textcolor(MAGENTA+BLINK);
  cprintf("                                 KAUN BANEGA CROREPATI");
  cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\n\t\t\t*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*  _ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*");
  textcolor(WHITE);
  cprintf( "                     MENU\a\a\a\a");
  textcolor(GREEN);
  cprintf("                                                                                                                                  *1.PLAY");

  textcolor(YELLOW);
  cprintf("                                                                                                                                                                       *2.INSTRUCTIONS");

  textcolor(MAGENTA);
  cprintf("                                                                                                                                                                                                                                             *3.SETTINGS");

  textcolor(CYAN);
  cprintf("                                                                                                                                                                                                                                              *4.CREDITS");


  textcolor(WHITE);
  cprintf("                                                                                                                                                                   *5.EXIT");
  cout<<"\nYOUR OPTION=";

  cin>>v1;

  clrscr();
  if(v1==2)
  {
   textcolor(YELLOW+BLINK);
   cprintf("                                    INSTRUCTIONS");
   textcolor(MAGENTA);
   cprintf("                                                                                                                                                WELCOME TO KAUN BANEGA KAUN BANEGA CROREPATI.THE PARTICIPANT IS REQUIRED TO GIVE HIS DETAILS FIRST");
   cprintf("THEN HE WILL BE GIVEN 15 QUESTIONS.AT EACH CORRRECT QUESTION HE WILL BE WINNNING POINTS.IF A PARTICIPANT GIVES WRONG ANSWER");
   cprintf("HE IS REQUIRED TO QUIT THE GAME.A PARTICIPANT WILL ALSO BE GIVEN TWO LIFELINES.ALL THE BEST THE RESPECTIVE PARTICIPANTS.");
   textcolor(CYAN);
   cprintf("                                                                                                                                                                                                                                                  THANK YOU****");
   getch();
   clrscr();
  }
  else if(v1==3)
  {
   textcolor(CYAN+BLINK);
   cprintf("................................. SETTINGS.........................................");
   textcolor(MAGENTA+BLINK);
   cprintf("                                                                                                                                                                                            1.SOUND");
   textcolor(GREEN+BLINK);
   cprintf("                                                                                                                                                                                                                                                    2.DIFFICULTY");

   textcolor(CYAN);
   cprintf("                                                                                                                                                                                                                                                   3.HIGHSCORES");
   textcolor(WHITE);
   cprintf("                                                                                                                                                                                                                                                   4.SHARE");

    cout<<"\t\tYOUR OPTION  =" ;
    cin>>v2;
    getch();
    clrscr();
      if(v2==1)
      {
       cout<<"SORRY SOUND NOT AVAILABLE AT THIS VERSION OF C++";
      }
      else if(v2==2)
      {
       textcolor(MAGENTA);
	cprintf("........................................................DIFFICULTY...................................");
	textcolor(CYAN);
	cprintf("                                                                                                                                                                                    1.EASY");
	textcolor(YELLOW);
	cprintf("                                                                                                                                                                                                                            2.MEDIUM");
	textcolor(BROWN);
	cprintf("                                                                                                                                                                                                                            3.HARD");
       }
       else if(v2==3)
       {
       cout<<"SORRY INTERNET CONNECTION NOT AVAILABLE..........!!!!!!" ;
       }
       else if(v2==4)
       {
	cout<<"SORRY INTERNET CONNECTION NOT AVAILABLE..........!!!!!!";
       }
       getch();
       clrscr();
     }


  else if(v1==4)
  {
   textcolor(YELLOW);
   cprintf(".............................CREDITS.........................................");
   textcolor(MAGENTA);
   cprintf("                                                       WELL ALL THE CREDITS GOES TO OUR COMPUTER SIR NITESH SIR.ONLY AND ONLY HELP OF HIM WE ARE ABLE TO COMPLETE THIS PROJECT.WELL THE PROJECT IS CREATED AND DESIGNED BY AMIT KUMAR DEOGHORIA BY USING BASIC CONCEPTS OF C++.INTERNET ALSO PLAYS A GREAT ROLE........");

   getch();
   clrscr();
   }
   else if(v1==1)
   {
    textcolor(MAGENTA);
      cprintf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^WELCOME TO KAUN BANEGA CROREPATI^^^^^^^^^^^^^^^^^^^^");
      textcolor(WHITE);
      cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\n\t\t\t*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*  _ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _");
      textcolor(YELLOW);
      cprintf("DEAR PARTICIPANT YOU ARE REQUIRED TO GIVE YOUR DETAILS BEFORE PLAYING THIS GAME.");
      cout<<"\n\n\aNAME :";
      gets(n);
      cout<<"\n\n\aPLACE(STATE)  :";
      gets(P);
      cout<<"\n\n\a1.MALE\ 2.FEMALE) :";
      cin>>s;
      textcolor(GREEN);
      textbackground(BLACK);
      clrscr();
      textcolor(WHITE+BLINK);
      cprintf("                              WELCOME TO KAUN BANEGA CROREPATI");
      textcolor(BROWN);
      cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\n\t\t\t*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*  _ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*");
      if(s==1)

      {
       cout<<"\n\n\nAAJ HAMARE SAMNE NAYE KHILADI MOAJUID HAIN\n\n\n\n\nJINKA NAM\""<<n<<"\"HAI\n\n\n  AUR YE\""<<P<<"\"SE AAYE HAI\n\n\n HUM APKE EES GAME ME HARDIK SWAGAT KARTE HAIN\n\n\nCHALIYE AAP AUR HUM KHELTE HAIN KAUN BANEGA CROREPATI\n\n\nTO APKA SAWAL AAPKE SAMNE YE RAHA";
      }

      else
      {
	cout<<"\n\n\n       AAJ HAMARE SAMNE NAYEE KHILADI MOAJUID HAIN\n    JINKA NAM\""<<n<<"\"HAI\n     AUR YE\""<<P<<"\"SE AAYEE HAI\n     HUM APKE EES GAME ME HARDIK SWAGAT KARTE HAIN\n   CHALIYE AAP AUR HUM KHELTE HAIN KAUN BANEGA CROREPATI\n TO APKA SAWAL AAPKE SAMNE YE RAHA";

      }
      getch();
      clrscr();
      cout<<"\nQUESTION NO. 1";
      textcolor(YELLOW);
      cprintf("\n\b\b\b\b\b\b\b\b\b\b(Q)WHICH IS THE LIGHTEST MATERIAL KNOWN IN THE WORLD ?");
      cout<<"\n\n\nYOUR OPTIONS ARE :\n\a";
      cout<<"\n";
      textcolor(MAGENTA);
      cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (1)HYDROGEN\n ");
      cout<<"\n";
      cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (2)SILICA AEROGEL\n");
      cout<<"\n";
      cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (3)UNNILHEXIUM\n");
      cout<<"\n";
      cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (4)LITHIUM OXIDE\n");
      cout<<"\n";
      textcolor(CYAN);
      cout<<" \n\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b AAPKE PAS ABHI DO LIFELINE MOZOOD HAIN\nAGAR AAPKO APNE UTTAR PAR BHAROSA NI HAIN \nTO AAP EESE USE KAR SAKTE HAIN :";
      cout<<"\nIF YOU WANT TO USE IT PRESS YES or No =";
      cin>>q;
      if(q=='Y'||q=='y')
      {
       cout<<"\nAAPKE PAS DO LIFELINE HAIN;";
       cout<<"(1)COMPUTER ASK";
       cout<<"(2)FIFTY-FIFTY";
       cout<<"\nPRESS (1) OR (2) :";
       cin>>l;
	if(l==1)
	{
	 cout<<"\nWRITE ANSWER IS :SILICA AEROGEL ";
	 top++;
	}
	if(l==2)
	{
	 cout<<"\nFIFTY-FIFTY :SILICA AEROGEL/HYDROGEN";
	 flag++;
	 }
	 cout<<"\nGIVE ANSWER :";
      }
	else
	cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR RS. 1,000 :");
	 cin>>ans1;
	 switch(ans1)
	 {
	  case 1:cout<<"YOU ARE WRONG APP JA SAKTE HAIN";
		 break;
	  case 2:delay(50);
	  cout<<"YOU ARE RIGHT\a";
		 break;
	  case 3:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
		break;
	  case 4:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
		break;

	 }
   if(ans1==2)
   {
      textcolor(GREEN);
      clrscr();
      textcolor(WHITE+BLINK);
      cprintf("                            KAUN BANEGA CROREPATI");
      textcolor(BROWN);
       cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\n\t\t\t*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*  _ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*");
       cout<<"\n\n\n        CONGRATULATIONS YOU HAVE RS.1000";
       cout<<"\n";
       cout<<"\nNOW COME TO THE NEXT QUESTION\n";
       cout<<"\n";
       cout<<"QUESTION NO.2\n\a";
       textcolor(YELLOW);
       cprintf("            (Q2)WHICH IS THE LARGEST CITY OF SOUTH AFRICA ?");

      cout<<"\nYOUR OPTIONS ARE :\n\a";
      cout<<"\n";
      textcolor(MAGENTA);
      cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (1)JOHHANESBERG\n ");
      cout<<"\n";
      cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (2)CAPETOWN\n");
      cout<<"\n";
      cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (3)DURBAN\n");
      cout<<"\n";
      cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (4)PRETORIA\n");
      cout<<"\n";
      textcolor(CYAN);
    {
      if(flag==0&&top==0)
	 cout<<" \n\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b AAPKE PAS ABHI DO LIFELINE MOZOOD HAIN\nAGAR AAPKO APNE UTTAR PAR BHAROSA NI HAIN \nTO AAP EESE USE KAR SAKTE HAIN :";
	 cout<<"\nIF YOU WANT TO USE IT PRESS YES or No =";
	 cin>>q;

	if(q=='Y'||q=='y')

      {
       cout<<"\nAAPKE PAS DO LIFELINE HAIN;";
       cout<<"(1)COMPUTER ASK";
       cout<<"(2)FIFTY-FIFTY";
       cout<<"\nPRESS (1) OR (2) :";
       cin>>l;
	if(l==1)
	{
	 cout<<"\nWRITE ANSWER IS :JOHANNESBERG ";
	 top++;
	}
	if(l==2)
	{
	 cout<<"\nFIFTY-FIFTY :JOHANNESBERG/CAPETOWN";
	 flag++;
	 }
	   cout<<"\nGIVE ANSWER =";
	   getch();
	}
	else
	if(top>1)
	  {
	    cout<<"\n\nYOU HAVE ONE LIFELINE LEFT i.e COMPUTER ASK";
	    cout<<"\nDO U WANT TO USE IT<Y/N>";
	    cin>>opt;
	    if(opt=='Y'||opt=='y')
	     {
	      cout<<"\nRIGHT ANSWER IS JOHHANESBERG";
	      getch();
	     }
	   }
	  else
	  if(flag>1)
	    {
	      cout<<"\n\nYOU HAVE ONLY ONE LIFELINE LEFT i.e FIFTY-FIFTY";
	      cout<<"\nDO YOU WANT TO USE IT<Y/N>";
	      cin>>opt;
	      if(opt=='y'||opt=='Y')
	       {
		cout<<"JOHANNESBERG/CAPETOWN";;
	       }
	       cout<<"\nGIVE ANSWER :";
	       getch();
	     }
	     else

	       cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR RS. 2,000 :");
	      cin>>ans2;
	      switch(ans2)
	      {
		 case 2:cout<<"YOU ARE WRONG APP JA SAKTE HAIN";
			      break;
		 case 1:delay(50);
			cout<<"YOU ARE RIGHT\a";
			break;
		 case 3:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
			break;
		 case 4:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
			break;
	     }
	      cout<<"\n WE ARE GIVING MANY MANY CONGRATULATIONS TO YOU\nFOR WINNING rs.1000\nGOVERNMENT WILL CUT 100% TAX\nSO,SORRY WE  CAN'T GIVE YOU ANY MONEY";
       }
       if(ans2==1)
     {
	 textcolor(GREEN);
	 clrscr();
	 textcolor(WHITE+BLINK);
	 cprintf("                            KAUN BANEGA CROREPATI");
	textcolor(BROWN);
	cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\n\t\t\t*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*  _ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*");
	cout<<"\n\n\n        CONGRATULATIONS YOU HAVE RS.3000";
	cout<<"\n";
	cout<<"\nNOW COME TO THE NEXT QUESTION\n";
	cout<<"\n";
	cout<<"QUESTION NO.3\n\a";
	cout<<"\n";
	textcolor(YELLOW);
	cprintf("            (Q3)WHICH IS THE MOST SALTEST SEA IN THE WORLD ?");

	cout<<"\nYOUR OPTIONS ARE :\n\a";
	cout<<"\n";
	textcolor(MAGENTA);
	cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (1)ARABIAN\n ");
	cout<<"\n";
	cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (2)RED SEA\n");
	cout<<"\n";
	cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (3)DEALT SEA\n");
	cout<<"\n";
	cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (4)BAY OF BENGAL\n");
	cout<<"\n";
	   cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR RS. 2,000 :");

	cin>>ans3;
	 switch(ans3)
	      {
		 case 2:cout<<"YOU ARE WRONG APP JA SAKTE HAIN";
			      break;
		 case 3:delay(50);
			cout<<"YOU ARE RIGHT\a";
			break;
		 case 1:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
			break;
		 case 4:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
			break;
	     }
	      cout<<"\n WE ARE GIVING MANY MANY CONGRATULATIONS TO YOU\nFOR WINNING rs.1000\nGOVERNMENT WILL CUT 100% TAX\nSO,SORRY WE  CAN'T GIVE YOU ANY MONEY";

	  }
	  if(ans3==3)
	  {

	      textcolor(GREEN);
	      clrscr();
	      textcolor(WHITE+BLINK);
	       cprintf("                            KAUN BANEGA CROREPATI");
	       textcolor(BROWN);
	       cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\n\t\t\t*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*  _ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*");
	       cout<<"\n\n\n        CONGRATULATIONS YOU HAVE WON RS.5000";
	       cout<<"\n";
		cout<<"\nNOW COME TO THE NEXT QUESTION\n";
		cout<<"\n";
		cout<<"QUESTION NO.4\n\a";
		cout<<"\n";
		textcolor(YELLOW);
		cprintf("            (Q4)WHICH IS THE NAME OF THE SIXTH STATE OF MATTER ?");

		cout<<"\nYOUR OPTIONS ARE :\n\a";
		cout<<"\n";
		textcolor(MAGENTA);
		cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (1)ARGONDEGENERATED\n ");
		cout<<"\n";
		cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (2)NEON DEGENERATED\n");
		cout<<"\n";
	       cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (3)PLASMA DEGENERATED SEA\n");
	       cout<<"\n";
		cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (4)IONDEGENERATED\n");
		cout<<"\n";
		 cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR RS. 2,000 :");
		 cout<<"\n";

		cin>>ans4;
	       switch(ans4)
	      {
		 case 3:cout<<"YOU ARE WRONG APP JA SAKTE HAIN";
			      break;
		 case 2:delay(50);
			cout<<"YOU ARE RIGHT\a";
			break;
		 case 1:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
			break;
		 case 4:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
			break;
	     }
	      cout<<"\n WE ARE GIVING MANY MANY CONGRATULATIONS TO YOU\nFOR WINNING rs.5000\nGOVERNMENT WILL CUT 100% TAX\nSO,SORRY WE  CAN'T GIVE YOU ANY MONEY";


	  }
	   if(ans4==2)
	   {
	       textcolor(GREEN);
	      clrscr();
	      textcolor(WHITE+BLINK);
	       cprintf("                            KAUN BANEGA CROREPATI");
	       textcolor(BROWN);
	       cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\n\t\t\t*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*  _ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*");
	       cout<<"\n\n\n        CONGRATULATIONS YOU HAVE WON RS.5000";
	       cout<<"\n";
	       cout<<"\n\n\nAAPKA SAWAL BILUL SAHI HAI TO KAISA LAG RHA HAI\n\nAAGLA PRASHNA APKO PEHLI PARI TAK PAHUCHAYEGA\n\nTAB AAP YHA SE KAM SE KAM 10000rs TAK LE JA SAKTE HAIN";
		cout<<"\n";

		cout<<"\nNOW COME TO THE NEXT QUESTION\n";
		cout<<"\n";

		cout<<"PAANCHWA SAAWAL AAPKE SAAMNE YE RAHA\n;";
		cout<<"\n";
		cout<<"QUESTION NO. 5\n";
		cout<<"\n";
		textcolor(YELLOW);

		cprintf("            (Q5)WHICH AMONG THE FOLLOWING IS THE LARGEST DELTA IN INDIA?");
		cout<<"\n";
		cout<<"\nYOUR OPTIONS ARE :\n\a";
		cout<<"\n";
		textcolor(MAGENTA);
		cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (1)SUNDERBAN DELTA\n ");
		cout<<"\n";
		cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (2)KRISHNA-GODAVRI DELTA\n");
		cout<<"\n";
	       cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (3)BRAHMAPUTRA DELTA\n");
	       cout<<"\n";
		cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (4)YAMUNA DELTA\n");
		cout<<"\n";
		 cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR RS. 2,000 :");

		cin>>ans5;
		cout<<"AAPKA JAWAB SAHI HAI YA NI YE BATAYNGE EK CHOTE SE BREAK KE BAD\nSO DONT GO AWAY WE WILL BE BACK";
		cout<<"\n\npress \"0\"&\*ENTER\"";
		cin>>c;
		if(c==0)
		goto h;
	     h: textcolor(BROWN);
		clrscr();
		cout<<"\n\n""KAUN BANEGA CROREPATI\" KE PRAYOJAG HAIN";
		textcolor(CYAN);
		cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\NIRMA WASHING POWDER HAIN ACCHA WASHING POWDER\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\bAAJ RAAT AATH BAJE DEKHIYE PREMIERE SHOW OF KABHI KHUSI KABHIE GAM\a");
		cout<<"\n\npress\"0\"&\ENTER\"";
		cin>>y;
		if(y==0)
		goto g;
	     g: switch(ans5);
		textcolor(BROWN);
		clrscr();

	       switch(ans5)
	      {
		 case 3:cout<<"YOU ARE WRONG APP JA SAKTE HAIN";
			      break;
		 case 1:delay(50);
			cout<<"YOU ARE RIGHT\a";
			break;
		 case 2:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
			break;
		 case 4:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
			break;
	     }
	      cout<<"\n WE ARE GIVING MANY MANY CONGRATULATIONS TO YOU\nFOR WINNING rs.5000\nGOVERNMENT WILL CUT 100% TAX\nSO,SORRY WE  CAN'T GIVE YOU ANY MONEY";
	   }
	   if(ans5==1)
	   {
	    textcolor(GREEN);
	      clrscr();
	      textcolor(WHITE+BLINK);
	       cprintf("                            KAUN BANEGA CROREPATI");
	       textcolor(BROWN);
	       cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\n\t\t\t*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*  _ _*_ _*_ _*_ _*_ _*_ _*_ _*_ _*");
	       cout<<"\n\n\n        CONGRATULATIONS YOU HAVE WON RS.10000";
	       cout<<"\n";
	       cout<<"\nBILKUL SAHI TO APNE PEHLA PAARAW PAR KAR LIYA\n\nCHALIYE AGLE SAAWAL KI AUR BADHTE HAIN";
	       cout<<"\nBEES HAAZAR KE LIYE APKE SAMNE YE RAHA SAWAAL!";
	       cout<<"\n";


		cout<<"\nNOW COME TO THE NEXT QUESTION\n";
		cout<<"\n";
		cout<<"QUESTION NO.6\n\a";
		cout<<"\n";
		textcolor(YELLOW);
		cprintf("            (Q6)WHICH ONE OF THE FOLLOWING ARE REPRODUCED BY VEGETATIVE PROPOGATION ?");

		cout<<"\nYOUR OPTIONS ARE :\n\a";
		cout<<"\n";
		textcolor(MAGENTA);
		cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (1)NEEM\n ");
		cout<<"\n";
		cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (2)SUNFLOWER\n");
		cout<<"\n";
	       cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (3)RAFLESIA\n");
	       cout<<"\n";
		cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b (4)ROSE\n");
		cout<<"\n";
		 cprintf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\PRESS THE CORRECT BUTTON OF YOUR KEYBOARD FOR RS. 2,000 :");

		cin>>ans6;
	       switch(ans6)
	      {
		 case 3:cout<<"YOU ARE WRONG APP JA SAKTE HAIN";
			      break;
		 case 4:delay(50);
			cout<<"YOU ARE RIGHT\a";
			break;
		 case 1:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
			break;
		 case 2:cout<<"YOU ARE WRONG AAP JA SAKTE HAIN";
			break;
	     }
	      cout<<"\n WE ARE GIVING MANY MANY CONGRATULATIONS TO YOU\nFOR WINNING rs.5000\nGOVERNMENT WILL CUT 100% TAX\nSO,SORRY WE  CAN'T GIVE YOU ANY MONEY";

	    }
	    if(ans6==4)
	    clrscr();
	    cout<<"CONGRATULATIONS   "<<n<< "  ""YOU ARE WINNER OF THIS GAME.WE ARE GIVING YOU RS.20000 TO YOU!!" ;
	    cout<<"\n\n\n\n\n\n\t\t\t\tGAME OVER.";






  }










  getch();
 }
}


