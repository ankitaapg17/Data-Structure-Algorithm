//WAP to find the sum of each row or column in a 2D array.
#include <stdio.h>  
   
int main()  
{  
    int rows, cols, sumRow, sumCol;  
  
      
    //Initialize matrix a  
    int a[][3] = {     
                    {1, 2, 3},  
                    {4, 5, 6},  
                    {7, 8, 9}  
                };  
      
    //Calculates number of rows and columns present in given matrix  
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
      
    //Calculates sum of each row of given matrix  
    for(int i = 0; i < rows; i++){  
        sumRow = 0;  
        for(int j = 0; j < cols; j++){  
          sumRow = sumRow + a[i][j];  //column is fixed and row is changing
        }  
        printf("Sum of %d row: %d\n", (i+1), sumRow);  
    }  
      
    //Calculates sum of each column of given matrix  
    for(int i = 0; i < cols; i++){  
        sumCol = 0;  
        for(int j = 0; j < rows; j++){  
          sumCol = sumCol + a[j][i];  //row is fixed and column is changing
        }  
        printf("Sum of %d column: %d\n", (i+1), sumCol);  
    }  
          
    return 0;  
}  




/* C Program to find the maximum element in each row of a matrix */

//Input the order of the matrix.
//Input the matrix elements.
//For row = 0 to n-1
//Find the maximum element in the row and insert the element in an array.
//Print the array.

#include<stdio.h>

void display(int result[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf(“%d “, result[i]);
	}
}

void maxi_row(int mat[][3], int m, int n)
{
	int i = 0, j;
	int max = 0;
	int result[m];
	while (i < m)
	{
		for ( j = 0; j < n; j++)
		{
			if (mat[i][j] > max)
			{
				max = mat[i][j];
			}
		}
		result[i] = max;
		max = 0;
		i++;
	
	}
display(result, m);
}

int main()
{
	int m, n;
	scanf(“%d %d”,&m,&n);
	int i, j;
	int mat1[m][n];
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
			scanf(“%d”,&mat1[i][j]);
	}
	
	maxi_row(mat1,m,n);
	return 0;
}


//Print the sum of diagonals in a matrix


int sumL=0,sumR=0;
if(i==j)
{
	sumL+=a[i][j];
}

if(i+j==order-1)
{
	sumR+=a[i][j];
}


//Interchange the diagonals of a 2D matrix
//Only for square matrix


//Swapping the diagonals
for(i=0;i<n;i++)
{
	//swap(a[i][i],a[i][n-i-1]);
	int temp = a[i][i];
	a[i][i]=a[i][n-i-1];
	a[i][n-i-1]=temp;
}





//WAP to find the sum of elements in each row and each column of the given matrix and print the greatest of the same.

#include<stdio.h>

int main()
{
	int m, n, row, col, sum = 0, row_ind = 0, col_ind = 0;
	scanf(“%d %d”,&m,&n);
	int row_arr[m];
	int i, j;
	int mat[m][n];
	for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				scanf(“%d”,&mat[i][j]);
		}

	int z = 0;

	printf(“Sum of rows is “);
	for(row=0; row<m; row++)
		{
			sum = 0;
				for(col=0; col<n; col++)
					{
						sum += mat[row][col];
					}
			printf(“%d “,sum);
			row_arr[z++] = sum; //Storing the sum of rows in an array
		}
	int temp_row = row_arr[0];
	for(i=1;i<m;i++)
		{
			if(temp_row < row_arr[i]) //Finding max sum from the array
				{
					temp_row = row_arr[i];
					row_ind = i;
				}
}
	printf(“\nRow %d has maximum sum “, row_ind + 1);

	printf(“\nSum of columns is “);
	sum = 0;
	int y = 0;
	int col_arr[n];
	for (i = 0; i < n; ++i)
		{
			sum = 0;
			for (j = 0; j < m; ++j)
				{
					sum = sum + mat[j][i];
				}		
			printf(“%d “,sum);
			col_arr[y++] = sum;
		}
	int temp_col = col_arr[0];
	for(i=1;i<n;i++)
		{
			if(temp_col < col_arr[i])
				{
					temp_col = col_arr[i];
					col_ind = i;
				}
		}
	printf(“\nColumn %d has maximum sum “, col_ind + 1);
	return 0;
}










