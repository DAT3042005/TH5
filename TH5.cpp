#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int xoa(char s[50],int vitrixoa);
int xoakt(char s[50]);
int chuanhoa(char s[50]);
int demtu(char s[50]);
int demkt(char s[50]);
void ghep(char s[50], char s2[50]);
void chon1(char s[50]);

int main()
{ char s[50], s2[50], key;
  
   while(true)
	{
        system("cls");
        printf("*************************************************\n");
        printf("**           THAO TAC TREN CHUOI               **\n");
        printf("**         1. Nhap va chuan hoa chuoi          **\n");
        printf("**         2. Nhap 1 ky tu va dem ky tu        **\n");
        printf("**         3. Dem so tu co trong chuoi         **\n");
        printf("**         0. Thoat                            **\n");
        printf("*************************************************\n");
       fflush(stdin);
	    printf("\n   \t\t    AN PHIM CHON: ");
        scanf("%d",&key);
        switch(key)
			{
            case 1:
            	fflush(stdin);
                chon1(s); //goi ham de thuc hien viec
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
            case 2:
               fflush(stdin);
			   demkt(s);
				printf("\nBam phim bat ky de tiep tuc!");
                
				getch();
                break;
                                             
			case 3:
               fflush(stdin);
			   demtu(s);
			 
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
           
            case 0:
                exit(1);
            default:
                printf("\nKhong co chuc nang nay!");
                printf("\nBam phim bat ky de tiep tuc!");
                getch();
                break;
        }
    }

}

void chon1(char s[50])
{
    printf("\n Nhap chuoi:");
    gets(s);
    //xoakt(s);
    chuanhoa(s);
    printf("\n Chuoi chuan hoa:");
	puts(s);
}
int xoa(char s[90],int vitrixoa)
{
	int n=strlen(s);
    for(int i=vitrixoa;i<n;i++)
     s[i]=s[i+1];
	s[n-1]='\0'; 
}
int  xoakt(char s[50])
{
    for(int i=0;i<strlen(s);i++)
		if(s[i]==' '&& s[i+1]==' ')
		{
			xoa(s,i);
			i--;
		}
    if(s[0]==' ')
		xoa(s,0);
    if(s[strlen(s)-1]==' ')
		xoa(s,strlen(s)-1);
}
int chuanhoa(char s[50])
{ int i=0;
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==' '&& s[i+1]!=' ')
		    s[i+1]=s[i+1]-32;
		}
}

int demtu(char s[50])
{ int demtu=1;
	strlwr(s);
	for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==' ')
		     demtu++;
		}
		printf("\n so tu %d",demtu);
}
int demkt(char s[50])
{ int demkytu=0;
  char c,c1;
	printf("\n Nhap mot ky tu:= ");
	scanf("%c",&c);
		fflush(stdin);
  	strupr(s);
    for(int i=0;i<strlen(s);i++)
		{ 
		if(s[i]==toupper(c))
		     demkytu++;
		}
		printf("\n So ky tu %d",demkytu);
}


