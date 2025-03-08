#include <stdio.h>
int result[100][100],a[100][100],b[100][100],row,col,i,j;
void input (int row,int col,int matrix1[100][100]);//declaration
void input (int row,int col,int matrix1[100][100])//defitination
{
    int i,j;
    printf ("\n enter the element of matrix1 = ");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf ("\t element of matrix1 [%d] [%d] = ",i,j);
            scanf ("%d",&matrix1[i][j]);
        }
    }
}
void display(int row,int col,int matrix1[100][100]);//declaration
void display(int row,int col,int matrix1[100][100])//defination
{
    int i,j;
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf (" %d",matrix1[i][j]);
        }
        printf ("\n");
    }
}
void multi (int row,int col,int matrix1[100][100] ,int matrix2[100][100]);//declration
void multi (int row,int col,int matrix1[100][100] ,int matrix2[100][100])//defination
{
    int i,j,k;
    
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            result[i][j]=0;
            for (k=0;k<col;k++)
            {
            result[i][j] = result[i][j] +(matrix1[i][k] * matrix2[k][j]);
            } 
        }
    }
     
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            printf ("%2d",result[i][j]);
        }
        printf ("\n");
    }
}
int main()
{
    printf ("\n 2d array multiplication program.");
    printf ("\n enter the row and col value for matrix 1 = \n");
    scanf ("%d %d",&row,&col);
    printf ("\n enter the row and col value for matrix 2 = \n");
    scanf ("%d %d",&row,&col);
    if   (col != row)
    {
        printf ("\n number of cols are not same");
    }
    
    input (row,col,a);//calling
    printf ("\n the value of matrix 1 : \n");
    display(row,col,a);//calling
    input (row,col,b);//calling
    printf ("\n the value of matrix 2 : \n");
    display(row,col,b);//calling
    printf ("\n the multiplication of matrix = \n");
    multi(row,col,a,b);//calling
   
    return 0;
}
