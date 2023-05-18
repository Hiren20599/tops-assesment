#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	menu:
	{
	printf("\n\n-----Main menu-----\n");
	printf("1.Reverse a string\n");
	printf("2.Concatenation\n");
	printf("3.Palindrome\n");
	printf("4.Copy a string\n");
	printf("5.Length of the string\n");
	printf("6.Frequency of character in string\n");
	printf("7.Find number of vowels and consonants\n");
	printf("8.Find number of alphabates and digits\n");
	int n;
	printf("\n\nPlease enter of choice: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			{
				char str1[20];
				printf("Enter the string: ");
				scanf("%s",&str1);
				printf("Reverse of above string is: %s",strrev(str1));
				break;
			}
		case 2:
			{
				char str1[20],str2[20];
				printf("Enter the 1st string: ");
				scanf("%s",&str1);
				printf("Enter the 2nd string: ");
				scanf("%s",&str2);
				strcat(str1,str2);
				printf("%s",str1);
				break;
			}
		case 3:
			{
				char str1[20];
				int i,length,pali=0;
				printf("Enter the string: ");
				scanf("%s",&str1);
				length = strlen(str1);
    			for(i=0;i<length;i++)
				{
        			if(str1[i] != str1[length-i-1])
					{
						pali=1;
           			}
           			break;
           		}
        		if (pali==1) 
					{
        				printf("\n%s is not a palindrome", str1);
    				}	    
    			else 
					{
        				printf("\n%s is a palindrome", str1);
   					}
   				break;
			}
		case 4:
			{
				char str1[20],str2[20];
				printf("Enter the string : ");
				scanf("%s",&str1);
				strcpy(str2,str1);
				printf("%s",str2);
				break;
			}
		case 5:
			{
				char str1[20];
				printf("Enter the string : ");
				scanf("%s",&str1);
				printf("\nThe length of above string is = %d",strlen(str1));
				break;
			}
		case 6:
			{
				char ch,str1[20];
    			int i,count=0;
				printf("Enter a string: ");
    			scanf("%s",&str1);
				printf("Enter a character to find its frequency: ");
    			scanf("%c",&ch);
				for (i=0; str1[i] != '\0';i++) 
				{
        			if (ch == str1[i])
            		count++;
    			}
				printf("Frequency of %c = %d", ch, count);
				break;
			}
		case 7:
			{
    			char str1[20];
    			int i, len, vowel=0, cons=0;	
       			printf("Input the string : ");
       			scanf("%s",&str1);
    			len = strlen(str1);
				for(i=0; i<len; i++)
    			{
					if(str1[i] =='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U')
        			{
            			vowel++;
        			}
        		else if((str1[i]>='a' && str1[i]<='z') || (str1[i]>='A' && str1[i]<='Z'))
        			{
           				cons++;
        			}
    			}
	    		printf("\nThe total number of vowel in the string is : %d\n", vowel);
	    		printf("The total number of consonant in the string is : %d\n\n", cons);
				break;
			}
		case 8:
			{
				char str1[20];
    			int alp=0, digit=0, splch=0, i=0; 	
       			printf("Input the string : ");
       			scanf("%s",&str1);
				while(str1[i]!='\0')
    			{
        			if((str1[i]>='a' && str1[i]<='z') || (str1[i]>='A' && str1[i]<='Z'))
        			{
            			alp++;
       				}
        			else if(str1[i]>='0' && str1[i]<='9')
	        		{
	            		digit++;
        			}
					i++;
    			}
				printf("Number of Alphabets in the string is : %d\n", alp);
    			printf("Number of Digits in the string is : %d\n", digit);
				break;
			}
			default:
			{
				printf("Please enter valid number");
				break;
			}
	}
	}
	int a;
	printf("\n\n\nDo you want to continue??\nPress 1 to continue 2 to exit: ");
	scanf("%d",&a);
	if(a==1)
	{
		goto menu;
	}
	else
	{
		printf("n\nThank you for using this application");
	}
	return 0;
}

