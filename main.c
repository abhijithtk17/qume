#include<stdio.h>
#include"mylibrary.h"

#define MAX_SIZE 50

int main()
{
	char str1[MAX_SIZE],str2[MAX_SIZE],str3[MAX_SIZE];
	char str4[MAX_SIZE],str5[MAX_SIZE],str6[MAX_SIZE],str7[MAX_SIZE];
	int result;

	printf("Enter a string to reverse: ");
	scanf("%s",str1);
	printf("The reversed string is: %s\n",my_strrev(str1));

	printf("Enter a string to be copied: ");
	scanf("%s",str2);
	printf("the copied string is: %s\n",my_strcpy(str2,str3));

	printf("Enter a string to found length: ");
	scanf("%s",str4);
	printf("The string lenghth is: %d\n",my_strlen(str4));

	printf("Enter a string to be concatenated: ");
	scanf("%s",str5);
	printf("The concatenated string is: %s\n",my_strcat(str1,str5));

	printf("Enter the string to be compare: ");
	scanf("%s",str6);
	printf("Enter the string to be compared with: ");
	scanf("%s",str7);
	result=my_cmp(str6,str7);
	if(result==0)
		printf("Both strings are equal\n");
	else if(result<0)
		printf("The first string is less than the second string\n");
	else
		printf("The second string is less than the first string\n");

	
	return 0;
	
}
