
#include<conio.h>
#include<stdio.h>
#include<dirent.h>
#include<unistd.h>
#include<string.h>
#include<stdbool.h>

void book()
{   system("cls");
	int ID;                                     
	FILE *fp;
	FILE *po;
	char snum[5];
	char vnum[25];
	char neew[20];
	char wnum[20];
	char pswd[20]="ID";
	char wow[20]="G:\\project\\";
	char name[20];
	char hoho[50]="seat";
	char gogo[50]="G:\\seatno\\";
	int i;
	int z;
	char dosa[50];
	char soso[50];
	char oreo[50];
	char orio[50]="seat";
	char uno[50]="G:\\seatno\\";
	char c[25];
	FILE *fpp;
	int m=0;
	char p[25];
	int zoo;
	fpp=fopen("batt.txt","r");
	
	
	printf("Seats booked till now ==>");
	while( (c[m]=fgetc(fpp)) != EOF )
    {
    //your code here	
    p[m]=c[m];
    m++;
    }
    zoo=atoi(p);
    printf("%d",zoo);
    printf("\n");
    printf("\n");
    if(zoo<=25)
    {
      system("cls");
     printf("ID no should be a nunber or else it is regarded as zero");
	 printf("\n enter your citizenship no or ID no :");
	 scanf("%d",&ID);
	 printf("enter your name :");
	 scanf("%s",&name);
	 printf("Please provide seat no ::");
	 printf("\n");
	 printf("enter seat no from 1 to 25 ==>");
	 scanf("%d",&z);
	 printf("\n");
	 if(z>0 && z<=25)
	 {
	  itoa(z,dosa,10);
	  itoa(z,soso,10);
	  itoa(ID,snum,10);
	  itoa(ID,wnum,10);
	  itoa(z,oreo,10);
	  strcat(oreo,".txt");
	  strcat(orio,oreo);
	  strcat(uno,orio);
	  strcat(soso,".txt");
	  strcat(hoho,soso);
	  strcat(gogo,hoho);
      strcat(wnum,".txt");
      strcat(pswd,wnum);
      strcat(wow,pswd);
	  if( access(wow , F_OK ) != -1 )
	  {
	  	printf("ID match enter other id");
	  }
	  else
	  {
	  
	     if( access(uno , F_OK ) != -1 )
	     {
         // file exists
         printf("seat booked enter other seat no ");
         printf("\n");
         printf("\n");
         printf("enter 3 for checking seat status");
         }
	     else
	     {
         // file doesn't exist
         printf("ID :");         //your condition here
	     printf("\t");
	     printf("%d",ID);
	     printf("\n");
	     printf("Name :");
	     printf("\t");
	     printf("%s",name);
	     printf("\n");
	     printf("Seat no :");
	     printf("%d",z);
	     printf("\n");
	     printf("tickets :");
	     printf("%d",1);
	     printf("\n");
	     printf("your ticket has been booked");
	     printf("\n");
         printf("------");
	     printf("\n");
	     //printf("500 rupees have been deducted from your account");
	     fp=fopen(wow,"w");
	     po=fopen(gogo,"w");
	     fprintf(fp,"\t ID no :");
         fputs(snum,fp);
         fprintf(fp,"\n");
         fprintf(fp,"\t ------");
         fprintf(fp,"\n");
         fprintf(fp,"\t Name :");
         fputs(name,fp);
         fprintf(fp,"\n");
         fprintf(fp,"\t Seat no :");
         fputs(dosa,fp);
         fprintf(fp,"\t ------");
         fprintf(fp,"\n");
         fprintf(fp,"\t ticktes: 1");
         fprintf(po,"\t User :");
         fprintf(po,"\n");
         fputs(name,po);
         fclose(po);
	     fclose(fp);
	      }    
	    } 
    }
    else
    {
    	printf("enter valid seat no");
	}
  }
  else
  {
  	printf("\n");
  	printf("All seats are reserved");
  }  
system(" dir /a:-d /s /b \"G:\\project\" | find /c \":\" > batt.txt"); 
}

void cancel()
{    system("cls");
    int ID;
    int no;
	char pswd[20]="ID";
	char rem[20];
	char wow[20]="G:\\project\\";
	char seat[20];
	char gogo[50]="seat";
	char soso[50]="G:\\seatno\\";
	printf("ID number should be a number or it will be regarded as zero");
	printf("\n enter your citizenship no or ID no :");
	scanf("%d",&ID);
	printf("enter your seat no :");
	scanf("%d",&no);
	itoa(no,seat,10);
	itoa(ID,rem,10);
	strcat(seat,".txt");
	strcat(gogo,seat);
	strcat(soso,gogo);
	strcat(rem,".txt");
	strcat(pswd,rem);
	strcat(wow,pswd);
	if(remove(wow)==0 && remove(soso)==0)
	{printf("successfully cancelled reservation");
	printf("\n");
	printf("------");
	printf("\n");
	//printf("500 rupees have been returned to your account");
	}
	else
	{printf("couldn't cancel provide valid  citizenship no or ID no and seat no ");
	}
    system(" dir /a:-d /s /b \"G:\\project\" | find /c \":\" > batt.txt");
  
}

void status()
{
 system("cls");	
//your code here	
char shubs[40];
 //your code here
 char c[25];
	FILE *fpp;
	int m=0;
	char p[25];
	int zoo;
	fpp=fopen("batt.txt","r");
	
	
	printf("No of seats remaining ==>");
	while( (c[m]=fgetc(fpp)) != EOF )
    {
    //your code here	
    p[m]=c[m];
    m++;
    }
    zoo=atoi(p);
    printf("%d",25-zoo);
	
if(zoo==0)
{
 printf("\n");
 printf("\n");	
 printf("All seats are available...");	
}
else
{
 DIR *d;
     struct dirent *dir;
     d = opendir("G:\\seatno\\");
     if (d)
     {   
         while ((dir = readdir(d)) != NULL)
         {
             printf("%s\n", dir->d_name);
         }
         closedir(d);
     }
 system(" dir /a:-d /s /b \"G:\\project\" | find /c \":\" > batt.txt");   
}
}

void view(){

system("cls");
DIR *d;
struct dirent *dir;
char pasword[10],usrname[10], ch;
 int i;
 char password[]="123456";
 char user[]="admin";
 int x,y,m;
 int n=1;
 bool l=false;
    

do{that:
 system("cls");
 printf("Enter User name: ");
 scanf("%s",&usrname);
 printf("Enter the 6 character password : ");

 for(i=0;i<6;i++)
 {
  ch = getch();
  pasword[i] = ch;
  ch = '*' ;
  printf("%c",ch);
 }

x=strcmp(usrname,user);
y=strcmp(password,pasword);

if(x==0 && y==0)
{   system("cls");
	printf("\n Login successful");
	sleep(1);
	l=true;
	
}

 else
 {  
 	printf("\n Please try again");
 	sleep(1);
 	n++;
 	goto that;
 }
if(n>5)
{
system("cls");
printf("\n Access denied");	
}

if(true)
    {
	
    this:
     printf("All the customer id ......");
     d = opendir("G:\\project\\");
     if (d)
     {   
         while ((dir = readdir(d)) != NULL)
         {
             printf("%s\n", dir->d_name);
         }
         closedir(d);
         sleep(5);
         
      }
      break;
  }
}while(n<=5);

}
    
	


void login()
{
 char pasword[10],usrname[10], ch;
 int i;
 char password[]="123456";
 char user[]="user";
 int x,y,m;
 int n=1;

do{
 system("cls");
 printf("Enter User name: ");
 scanf("%s",&usrname);
 printf("Enter the 6 character password : ");

 for(i=0;i<6;i++)
 {
  ch = getch();
  pasword[i] = ch;
  ch = '*' ;
  printf("%c",ch);
 }

x=strcmp(usrname,user);
y=strcmp(password,pasword);

if(x==0 && y==0)
{   system("cls");
	printf("\n Login successful");
	sleep(1);
	break;
}

 else
 {  
 	printf("\n Please try again");
 	sleep(1);
 	n++;
 }
if(n>5)
{
	exit(0);
}
}while(n<=5);

}





int main()
{
int chh;
char ch[1];
FILE *qq;
if(access("batt.txt",F_OK)!=-1)
{
printf("---------");
}
else
{
qq=fopen("batt.txt","w");
fclose(qq);	
}
system("color 6d");
login();
system("cls");
printf("\n");

flagg:	
 printf(" \t      ==================================");
 printf("\n");
 printf(" \t ||   Enter a choice                  ::   ||");
 printf("\n");
 printf(" \t ||   Enter 1 for booking             ::   ||");           
 printf("\n");
 printf(" \t ||   Enter 2 for cancelling          ::   ||");
 printf("\n");
 printf(" \t ||   Enter 3 for viewing seat status ::   ||");
 printf("\n");
 printf(" \t ||   Enter 4 for viewing user status ::   ||");
 printf("\n"); 
 printf(" \t ||   Enter 5 for exiting the program ::   ||");
 printf("\n");
 printf(" \t      ==================================");
 printf("\n");
 printf("Enter your choice here ==>");
 scanf("%c",&ch);
 chh=atoi(ch);
 printf("\n");
 printf("------");
 printf("\n");
 switch(chh)
  {
  case 1:
	book();
	sleep(5);
	break;
  case 2:
	cancel();
	sleep(5);
	break;
  case 3:
	status();
	sleep(5);
    break;
  case 4:
  	/*system("cls");
  	printf("this facility is for admin only");
  	printf("\n");
  	printf("please wait....");
  	sleep(2);
    login2();*/
  	view();
  	break;
  case 5:
  	system("cls");
    exit(0);
  }
system("cls");   
goto flagg; 	
return 0;
}
