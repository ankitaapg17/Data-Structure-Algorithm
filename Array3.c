//Replace all 0's with 1 in a given integer (imp)
//Maximum number of handshakes
//Quadrants in which coordinates lie
//Convert digit/number to words
//Number of days in a given month of a given year
//Permutations in which n people can occupy r seats in a theatre
//Number of times digit 3 occurs in each and every number from 0 to n
//Number of integers which has exactly 9 divisors in a given range.
//Roots of a quadratic equation.
//Replace substring in a string



//Not-done
//Patterns of 0(1+)0 in the given string
//Count common subsequence in two strings
//Check if two strings match where one string contains wildcard characters





#include <stdio.h>
#include <conio.h>

// C program to replace all 0’s with 1 in a given integer

int replace (long int num)
{
     // Base case for recursion termination
     if (num == 0)
        return 0;
     // Extract the last digit and change it if needed
     int digit = num % 10;
     if (digit == 0)
         digit = 1;
     // Convert remaining digits and append the last digit

     return replace(num/10) * 10 + digit;
}
int Convert(long int num)
{
     if (num == 0)
        return 1;
     else
       return replace(num);
}
int main()
{
      long int num;
     //To take user input
      printf("\nInsert the num : ");
      scanf("%d", &number);
      //display final result
      printf("\n Num after replacement : %d\n", Convert (num));
      return 0;
}




//To find the maximum number of handshakes
//Input the number of people (n).
//Find nC2, calculated as n * (n-1) / 2.
#include <stdio.h>

int main()
{
//fill the code
	int num;
	scanf("%d",&num);
	int total = num * (num-1) / 2; // Combination nC2
	printf("%d",total);
	return 0;
}



// C program to find the quadrant in which the given coordinates lie

#include <stdio.h>
int main()
{

	int a,b;
	scanf(“%d %d”,&a,&b);
	if(a > 0 && b > 0)
		printf(“Ist Quadrant”);
	else if(a < 0 && b > 0)
		printf(“IInd Quadrant”);
	else if(a < 0 && b < 0)
		printf(“IIIrd Quadrant”);
	else if(a > 0 && b < 0)
		printf(“IVth Quadrant”);
	else
		printf(“Origin”);
	return 0;
}


//Convert digit/number to words

#include <stdio.h>
int main()
{
	int num,d,rev=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	int l=num;
	while(num>0)
	{
		d=num%10;
		rev=rev*10+d;
		num=num/10;
		
		
	}
	
	while(rev>0)
	{
		d=rev%10;
		switch(d)
		{
			case 1:
				printf("One ");
				break;
			case 2:
			    printf("Two ");
			    break;
			case 3:
			    printf("Three ");
			    break;
			case 4:
			    printf("Four ");	
				break;		
		}
		rev=rev/10;
	}

}





// C program to find the number of days in a given month

#include<stdio.h>
int main()
{
    //fill the code
    int year, month;
    scanf("%d %d",&month,&year);
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Number of days is 31");
    else if((month == 2) && ((year%400==0) || (year%4==0 && year%100!=0)))	
    {
        printf("Number of days is 29");
    }
    else if(month == 2)
    {
        printf("Number of days is 28");
    }	
    else
        printf("Number of days is 30");
    return 0;
}



// C program to find all possible permutations in which n people can occupy r seats in a theater

#include<stdio.h>
int fact(long int x)
{
	long int f=1,i;
	for(i=1;i<=x;i++)
		{
			f=f*i;
		}
	return f;
}

int main()
{
	long int n,r,p,temp;
	long int num,den;
	// Enter the number of seats
	printf("Enter the number of seats available : ");
	scanf("%ld",&r);
	// Enter the number of people
	printf("Enter the number of persons : ");
	scanf("%ld",&n);
	

	
	num=fact(n);
	den=fact(n-r);
	p=num/den;
	printf("Number of ways people can be seated : ");
	printf("%ld",p);
}




// C program to find the number of times digit 3 occurs in each and every number from 0 to n
#include <stdio.h>

int count_3s(int n)

{
	int count = 0;
	while (n > 0)
	{
		if (n % 10 == 3)
		{
			count++;
		}
      n = n / 10;
	}
return count;
}

int count_in_range(int n)
{
	int count = 0,i ;
	for (i = 2; i <= n; i++)
	{
		count += count_3s(i);
	}
	return count;
}

int main()
{
	int n;
	printf("Enter the end value : ");
	scanf("%d", &n);
	printf("Total occurrences of 3 from 0 to %d is %d\n", n,count_in_range(n));
	return 0;
}




//Given a number N, we need to find the total number of integers with exactly 9 divisors within the given range N.


#include <stdio.h>
int count_no_of_divisors(int num)
{
	int count = 0;
	int i;
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		count = count + 1;
	}
	return count;
}

void check_9_factors(int n)
{
	int c = 0,i;
	for (i = 1; i <= n; i++)
	{
		if (count_no_of_divisors(i) == 9)
		{
			printf("%d ", i);
			c = c + 1;
		}
	}
	printf("\nTotal = %d\n", c);
}

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("The number which has exactly 9 divisors : ");
	check_9_factors(n);
	return 0;
}







#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
	
	printf("Enter coefficients a, b and c: ");
	scanf(“%lf %lf %lf”,&a, &b, &c);
	
	discriminant = b*b-4*a*c;
	
	// condition for real and different roots
	if (discriminant > 0)
	{
		// sqrt() function returns square root
		root1 = (-b+sqrt(discriminant))/(2*a);
		root2 = (-b-sqrt(discriminant))/(2*a);
		
		printf("root1 = %.2lf and root2 = %.2lf",root1 , root2);
	}
	
	//condition for real and equal roots
	else if (discriminant == 0)
	{
		root1 = root2 = -b/(2*a);
		
		printf(“root1 = root2 = %.2lf;”, root1);
	}
	
	// if roots are not real
	else
	{
		realPart = -b/(2*a);
		imaginaryPart = sqrt(-discriminant)/(2*a);
		printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart, realPart, imaginaryPart);
    }
	
	return 0;
}








