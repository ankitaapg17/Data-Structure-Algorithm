//Toggle each character in a string
//Remove vowels from a string
//String is a palindrome or not
//Reverse a string without using in-built function.
//Sorting a string in alphabetical order

//Removing brackets from an algebraic expression
//Remove characters in a string except alphabets
//Remove spaces from a string
//Count the sum of numbers in a string
//Capitalize the first and last letter of each word of a string

//Frequency of characters in a string
//Non-repeating characters in a string
//Check if two strings are Anagram or not




#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char a[100],len,i;
//	printf("Enter the string:\n");
//	scanf("%s", a);
//	for(i=0;i<=strlen(a);i++)
//	{
//		if(a[i]>='a' && a[i]<='z')
//		{
//			a[i]=a[i]-32;
//		}
//		else if(a[i]>='A' && a[i]<'Z')
//		{
//			a[i]=a[i]+32;
//		}
//		
//	}
//	printf("After toggle: %s\n",a);
//	
//}
//
//
//// C++ program to toggle each character in a string
//
//#include<iostream.h>
//#include<stdio.h>
//#include<string.h>
//
//using namespace std;
//
//int main ()
//{
//	char str[50];
//	cout << "Enter the string : ";
//	gets(str);
//	for (int i = 0; str[i] !=''; i++)
//		{
//			if (isalpha(str[i]))
//				{
//					if (islower(str[i]))
//						str[i] = toupper(str[i]);
//					else	
//                      str[i] = tolower(str[i]);
//				}
//		}
//cout << "String after toggling each characters :"  << str;
//}


//Remove vowels from a string
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100],i,j,len;
//	printf("Enter the string:");
//	scanf("%s",a);
//	len=strlen(a);
//	for(i=0;i<len;i++)
//	{
//		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
//		{
//			//Deleting vowels. 
//			for(j=i; j<len; j++)
//			{
//			    //Storing string without vowels.
//				a[j]=a[j+1];
//			}
//		len--;
//		}
//		
//	
//	}
//	printf("After removing the vowels:%s",a);
//	
//}


//Check pallindrome using in-built function.
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100], str[100];
//	printf("Enter the string: ");
//	scanf("%s",a);
//	strcpy(str,a);
//	strrev(str);
//	
//	if(strcmp(a,str)==0) //compare input string with reversed string
//	{
//		printf("Is a pallindrome\n");
//	}
//	else
//	{
//		printf("Not a pallindrome\n");
//	}
//	printf("After reversal: %s",str);
//	
//}
//



//Reverse a string without using in-built function.
//#include <stdio.h>
//
//int main()
//{
//	char a[100],i,count=0,str[100];
//	printf("Enter the string:");
//	gets(a);
//	for(i=0;a[i]!='\0';i++)
//	{
//		count++;
//	}
//	//printf("%d",count);
//	int j=count-1;
//	for(i=0;i<count;i++)
//	{
//		
//		str[i]=a[j];
//		j--;
//	}
//	puts(str);
//	
//}

//Sorting a string in alphabetical order
//By swapping the characters in a string

//#include <stdio.h>
//int main()
//{
//	char string[100];
//  printf("Enter the string: ");
//	scanf("%s",string);
//	char temp;
//	int i, j;
//	int n = strlen(string);
//	for (i = 0; i < n-1; i++) {
//		for (j = i+1; j < n; j++) {
//			if (string[i] > string[j]) {
//					temp = string[i];
//					string[i] = string[j];
//					string[j] = temp;
//			}
//		}
//	}
//
//	printf("The sorted string is : %s", string);
//}


//Removing brackets
//#include <stdio.h>
//int main()
//{
//	//Initializing variables.
//    char str[100], str_no_spc[100];
//    int i=0, j=0 ;
//    
//    //Accepting inputs.
//    printf("Enter the string:\n");
//    gets(str);
//    
//    //Iterating each character of string.
//    while(str[i] != '\0')
//    {
//        if(str[i] != '(' &&  str[i] != ')')//Excluding brackets.
//        {
//            str_no_spc[j++] = str[i];
//        }
//        i++;
//    }
//    str_no_spc[j] = '\0';
//    
//    //Printing result.
//    printf("The string after removing all the spaces is:\n%s", str_no_spc);
//    	
//}


//Remove all characters in a string except alphabet
//#include <stdio.h>
//int main()
//{
//char input[150];
//int i, j;
//printf("Enter a string : ");
//gets(input);
//
//for(i = 0; input[i] != '\0'; ++i)
//{
//	while (!( (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z') || input[i] == '\0') )
//	{
//		for(j = i; input[j] != '\0'; ++j)
//		{
//			input[j] = input[j+1];
//		}
//		input[j] = '\0'; 
//	}
//}
//printf("\nOutput string : ");
//puts(input);
//
//return 0;
//}


//Remove spaces from string
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100],i,j,len;
//	printf("Enter the string: ");
//	gets(a);
//	len=strlen(a);
//	//str1 = str1.replace(" ","");  
//	for(i=0;a[i]!='\0';i++)
//	{
//		if(a[i]==' ')
//		{
//			for(j=i;j<len;j++)
//			{
//				a[j]=a[j+1];
//			}
//			len--;
//		}
//		
//	}
//	printf("After removing spaces:");
//	puts(a);
//	//Checks for space character in array if its there then ignores it and swap str[i] to str[i+1];  
//    
//	
//}
//
//
//
//
//
////Finding tokens in a string
//#include<stdio.h>
//#include <string.h>
//
//int main() {
//   char string[50] = "Hello! We are learning about strtok";
//   // Extract the first token
//   char * token = strtok(string, " ");
//   // loop through the string to extract all other tokens
//   while( token != NULL ) {
//      printf( " %s\n", token ); //printing each token
//      token = strtok(NULL, " ");
//   }
//   return 0;
//}
//
//



//Count the sum of numbers in a given string
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char a[100],i,n,sum=0;
//	printf("Enter the string: ");
//	scanf("%s",a);
//	for(i=0;a[i]!='\0';i++)
//	{
//		if(a[i]>='0' && a[i]<='9')
//		{
//			sum+=a[i]-'0';
//		}
//	}
//	printf("The result:%d",sum);
//}






//Capitalize the first and last letter of each word in a string
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[100],i,len;
//	printf("Enter the string: ");
//	gets(a);
//	len=strlen(a);
//	for(i=0;a[i]!='\0';i++)
//	{
//		if(i==0 ||i==(len-1))
//		{
//			a[i]=a[i]-32;
//		}
//		else if(a[i]==' ')
//		{
//			a[i-1]=a[i-1]-32;
//			a[i+1]=a[i+1]-32;
//		}
//	}
//	puts(a);
//	
//	
//}



//Frequency of characters in a string



//    int i, j, length = strlen(string);  
//    int freq[length];  
//      
//      
//    for(i = 0; i < strlen(string); i++) {  
//        freq[i] = 1;  
//        for(j = i+1; j < strlen(string); j++) {  
//            if(string[i] == string[j]) {  
//                freq[i]++;  
//                  
//                //Set string[j] to 0 to avoid printing visited character  
//                string[j] = '0';  
//            }  
//        }  
//    }  
//      
//    //Displays the each character and their corresponding frequency  
//    printf("Characters and their corresponding frequencies\n");  
//    for(i = 0; i < length; i++) {  
//        if(string[i] != ' ' && string[i] != '0')  
//            printf("%c-%d\n", string[i], freq[i]);  
//    }  
          
//OR
//Traverse the string, character by character and store the count of each of the characters in an array.
//Print the array that contains the frequency of all the characters.

#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	int i;
	int freq[256] = {0};
	gets(str);
	for(i = 0; str[i] != '\0'; i++)
	{
		freq[str[i]]++;
	}
	for(i = 0; i < 256; i++)
	{
		if(freq[i] != 0)
		{
			printf("%c %d\n", i, freq[i]);
		}
	}
	return 0;
}




#include <stdio.h>
#include <string.h>
//Frequency of characters in a string
//    int i, j, length = strlen(string);  
//    int freq[length];  
//      
//      
//    for(i = 0; i < strlen(string); i++) {  
//        freq[i] = 1;  
//        for(j = i+1; j < strlen(string); j++) {  
//            if(string[i] == string[j]) {  
//                freq[i]++;  
//                  
//                //Set string[j] to 0 to avoid printing visited character  
//                string[j] = '0';  
//            }  
//        }  
//    }  
//      
//    //Displays the each character and their corresponding frequency  
//    printf("Characters and their corresponding frequencies\n");  
//    for(i = 0; i < length; i++) {  
//        if(string[i] != ' ' && string[i] != '0')  
//            printf("%c-%d\n", string[i], freq[i]);  
//    }  
          
//OR
//Traverse the string, character by character and store the count of each of the characters in an array.
//Print the array that contains the frequency of all the characters.

//int main()
//{
//	char str[100];
//	int i;
//	int freq[256] = {0};
//	gets(str);
//	for(i = 0; str[i] != '\0'; i++)
//	{
//		freq[str[i]]++;
//	}
//	for(i = 0; i < 256; i++)
//	{
//		if(freq[i] != 0 && freq[i]!= 1)//non-repeating
//		{
//			printf("%c %d\n", i, freq[i]);
//		}
//	}
//	return 0;
//}


// C program to check whether a given character is upper case, lower case, number or special character 

//#include <stdio.h>
//int main()
//{
//
//	char ch;
//	scanf(“%c”,&ch);
//	if(ch >= 65 && ch <= 90)
//		printf(“Upper”);
//	else if(ch >= 97 && ch <= 122)
//		printf(“Lower”);
//	else if(ch >= 48 && ch <= 57)
//		printf(“Number”);
//	else
//		printf(“Symbol”);
//return 0;
//}




//Check if strings are anagram or not.

//Method 1: Count the frequency of alphabets in both the strings and store them in respective arrays.
//If the two arrays are equal, return true. Else, return false.

//Method 2: Sort both the strings and compare if both the sorted strings are equal. If they are equal, return true.
//Else, return false


#include <stdio.h>
#include <string.h>

int main()
{
	char a[100],b[100],i,j,temp1,temp2;
	printf("Enter the first string: ");
	gets(a);
	printf("Enter the second string: ");
	gets(b);
	
	for(i=0;i<strlen(a)-1;i++)
	{
		for(j=i+1;j<strlen(a);j++)
		{
			//sort
			if(a[i]>a[j])
			{
				temp1=a[i];
				a[i]=a[j];
				a[j]=temp1;
			}
		}
		
	}
	
	for(i=0;i<strlen(b)-1;i++)
	{
		for(j=i+1;j<strlen(b);j++)
		{
			//sort
			if(b[i]>b[j])
			{
				temp2=b[i];
				b[i]=b[j];
				b[j]=temp2;
			}
		}
		
	}
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=b[i])
		{
			printf("Not Anagrams");
		}
		
	}
	printf("Anagrams");
	
}


