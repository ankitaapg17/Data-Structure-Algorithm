//Upper triangular matrix or not
//Lower triangular matrix or not

//Friendly pair or not (amicable or not)
//Automorphic number or not
//Harshad number or not
//Abundant number or not

//Factors of a number
//Add two fractions



//A square matrix is said to be an upper triangular matrix if all the entries below the diagonal are zero.
#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int flag = 0;
	int mat[n][n];
	int i, j;
	for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			scanf("%d",&mat[i][j]);
		}

	for (i = 1; i < n; i++)
		for (j = 0; j < i; j++)
			if (mat[i][j] != 0)
				flag = 0;
			else
				flag = 1;
  
	if (flag == 1)
		printf("Upper Triangular Matrix");
	else
		printf("Not an Upper Triangular Matrix");
    return 0;
	

}

// A square matrix is said to be a lower triangular matrix if all the entries above the diagonal are zero.
#include<stdio.h>
#define N 3

int check_lower_triangular_matrix(int mat[N][N])
{
	int i, j;
	for (i = 0; i < N; i++)
		for (j = i + 1; j < N; j++)
			if (mat[i][j] != 0)
				return 0;
return 1;
}

int main()
{
	int mat[N][N];
	int i, j;
	for(i = 0; i < N; i++)
		{
			for(j = 0; j < N; j++)
				scanf("%d",&mat[i]);
		}
	if (check_lower_triangular_matrix(mat))
		printf("Lower Triangular Matrix");
	else
		printf("Not a Lower Triangular Matrix");
	return 0;
}



//For example,6 and 28 are Friendly Pair.
//(Sum of divisors of 6)/6 = (Sum of divisors of 28)/28.
// C program to check whether the given numbers are friendly pairs

#include<stdio.h>
int main()
{
//fill the code
	int num1, num2;
	scanf("%d",&num1);
	scanf("%d",&num2);
	int sum1 = 0, sum2 = 0;
	for(int i = 1; i < num1; i++)
	{
		if(num1 % i == 0)
		{
			sum1 = sum1 + i;
		}
	}
	for(int i = 1; i < num2; i++)
	{
		if(num2 % i == 0)
		{
			sum2 = sum2 + i;
		}
	}
	if(sum1 == num1 && sum2 == num2)
		printf("Friendly Pair");
	else
		printf("Not Friendly Pair");
	return 0;
}




//An automorphic number is a number whose square ends with the number itself.


#include <stdio.h>
#include <conio.h>
int main()
{
	
	int num,sq;
	printf("Enter the number: ");
	scanf("%d",&num);
	sq=num*num;
	int l=sq%10;
	if(l==num)
	{
		printf("Automorphic number");
	}
	else
	{
		printf("Not");
	}
	
	
	
}




//Harshad Number is an integer that is divisible by the sum of its digits.

#include <stdio.h>
int main()
{
	int num,d,i,sod=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	while(num>0)
	{
		d=num%10;
		sod=sod+d;
		num=num/10;
	}
	if(num%sod==0)
	{
		printf("Its a harshad number");
	}
	else
	{
		printf("Not a harshad number");
	}
	
}


//Abundant number or not
//An abundant number is a number for which the sum of its proper divisors is greater than the number itself.
#include <stdio.h>

int main()
{
	int i,num,sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum>num)
	{
		printf("Abundant");
	}
	else
	{
		printf("Not");
	}
	
}



//Factors of a number
#include <stdio.h>
int main()
{
	int i,num,j=0,count=0,arr[100];
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			arr[j]=i;
			j++;
			count++;
		}
	}
	printf("The factors are: ");
	for(j=0;j<count;j++)
	{
		printf("%d ",arr[j]);
	}
	
	
}





//Add two fractions
//1) Calculate the numerator and denominator of the resultant fraction (x/y).
//2) Find the gcd of x and y.
//3) Divide x and y by their gcd to get the resultant fraction in the simplest form.

#include <stdio.h>
int main()
{
     //for initialize variables
      int numerator1, denominator1,numerator2,denominator2,x,y,c,gcd_no;
    //To take user input of numerators and denominators
     printf("\nEnter the numerator for 1st number : ");
     scanf("%d",&numerator1);
     printf("\nEnter the denominator for 1st number : ");
     scanf("%d",&denominator1);
     printf("\nEnter the numerator for 2nd number : ");
     scanf("%d",&numerator2);
     printf("\nEnter the denominator for 2nd number : ");
     scanf("%d",&denominator2);
    //numerator
     x=(numerator1*denominator2)+(denominator1*numerator2); 
    //denominator
     y=denominator1*denominator2; 
   // Trick part. Reduce it to the simplest form by using gcd.
   
   //Checks if c is factor of both integers
   for(c=1; c <= x && c <= y; ++c)
   {
       if(x%c==0 && y%c==0)
          gcd_no = c;
   }
    //To display fraction of givien numerators and denominators
    printf("\nThe added fraction is %d/%d ",x/gcd_no,y/gcd_no);
    printf("\n");
  return 0;
}






