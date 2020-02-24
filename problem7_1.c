#include <stdio.h> 
#define MAX 4 
//#define C 6 
  
void spiralPrint(int m, int n, int a[R][C]) 
{ 
    int i, row= 0, col= 0; 
  
    /*  row- starting row 
        m - ending row 
        col- starting column  
        n - ending column 
       
    */
  
    while (row< m && col< n) { 
        //////// Print the first row from the remaining rows 
        for (i = col; i < n; ++i) { 
            printf("%d ", a[row][i]); 
        } 
        row++; 
  
      ///////////////  Print the last column from the remaining columns 
        for (i = row; i < m; ++i) { 
            printf("%d ", a[i][n - 1]); 
        } 
        n--; 
  
        ////////////////////// Print the last row from the remaining rows 
        if (row< m) { 
            for (i = n - 1; i >= col; --i) { 
                printf("%d ", a[m - 1][i]); 
            } 
            m--; 
        } 
  
       ///////////////////  Print the first column from the remaining columns 
        if (col< n) { 
            for (i = m - 1; i >= row; --i) { 
                printf("%d ", a[i][col]); 
            } 
            col++; 
        } 
    } 
} 
  

int main() 
{ 
    /*int a[R][C] = { { 1, 2, 3, 4, 5, 6 }, 
                    { 7, 8, 9, 10, 11, 12 }, 
                    { 13, 14, 15, 16, 17, 18 } }; 
  */
	int a[MAX][MAX]; 
	int R,C;
    spiralPrint(m, n, mat); 
    for (int i=0; i<m; i++) 
    { 
       for (int j=0; j<n; j++) 
          { printf("%d",a[i][j] ); 
       } 
    } 
    return 0; 
   // spiralPrint(R, C, a); 
   // return 0; 
} 