#include <stdio.h>
int main (int argc, char *argv[])
{
	char ch;
	while((ch=getchar())!=-1)
	{
		if(ch!='\'')putchar(ch);
	}
	return 0;
}
