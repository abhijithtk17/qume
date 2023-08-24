#include "mylibrary.h"

char* my_strcat(char *p, char *q)
{
	int i=0,j=0,k=0;
	char stt[MAX_SIZE];
	char *r=stt;

	while(*(p+i)!='\0')
	{
		i++;
	}
	while(*(q+j)!='\0')
	{
		*(p+i)=*(q+j);
		j++;
		i++;
	}
	*(p+i)='\0';
	while(*(p+k)!='\0')
	{
		*(r+k)=*(p+k);
		k++;
	}
	*(r+k)='\0';

	return r;
}
char* my_strrev(char *p)
{
	int i=0,j=0;

	char rev_str[MAX_SIZE];
	char *b=rev_str;

	while(*(p+i)!='\0')
	{
		i++;
	}
	while(i!='\0')
	{
		i--;
		*(b+j)=*(p+i);
		j++;
	}
	*(b+j)='\0';

	return b;
}
int my_strlen(char *p)
{
	int i=0,count=0;
	while(*(p+i)!='\0')
        {
		count++;
                i++;
        }

	return count;
}
char* my_strcpy(char *p,char *q)
{
	int i;

        for(i=0;*(p+i)!='\0';i++)
        {
                *(q+i)=*(p+i);
        }
        *(q+i)='\0';
	
	return q;
}
int my_cmp(char *p,char *q)
{
	int i=0,j=0;
        while((*(p+i)!='\0')&&(*(q+j)!='\0')&&(*(p+i)==*(q+j)))
        {
                i++;
                j++;
        }
	if(*(p+i)=='\0'&&*(q+j)=='\0')
		return 0;
	else
		return *(p+i)-*(q+j);
	return 0;
}
