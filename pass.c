#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int password(char neww[100],char user1[100],char user[100],char pass[100])
{
	int p = 0 , f = 0;
 	char c;
	do
	{
	    	c = getch();
	    	if( isprint(c) )
	     	{
			neww[ p++ ] = c;
			cout<<'*';
	     	}
	    	else if( c == 8 && p )
	     	{
			neww[ p-- ] = '\0';
	     	}
	}while( c != 13 );
	if( !strcmp(neww, pass) &&!strcmp(user,user1))
	{
	    	f=1;
	}
	else
	{
		f=0;
	}
    
    if(f==1)
      return 1;
    else
      return 0;
}

int main()
{
	password("","","shiv","hello");
	return 0;
}

