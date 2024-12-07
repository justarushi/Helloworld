//Code to display matrix operations---------> Roll no.: 10566

#include <stdio.h>
int main(){

int m1, n1, m2, n2;

printf("Enter the number of rows in Matrix 1 : ");
scanf("%d", &m1);

printf("Enter the number of rows in Matrix 1 : ");
scanf("%d", &n1);

printf("Enter the number of rows in Matrix 2 : ");
scanf("%d", &m2);

printf("Enter the number of rows in Matrix 2 : ");
scanf("%d", &n2);

printf("\n");
printf("\n");

int matrix1[m1][n1], matrix2[m2][n2];
int transpose1[n1][m1], transpose2[n2][m2], addition[m1][n1], multimat[m1][n2];

//Taking elements for matrix 1
printf("Enter the elements of Matrix 1 : ");
printf("\n");
for (int i = 0; i < m1; i++){
   for (int j = 0; j < n1; j++){
    printf("Enter the element at Matrix1[%d][%d] : ", i+1, j+1);
    scanf("%d", &matrix1[i][j]);
 }
}

printf("\n");
printf("\n");

//Taking elements for matrix 2
printf("Enter the elements of Matrix 2 : ");
printf("\n");
for (int i = 0; i < m2; i++){
   for (int j = 0; j < n2; j++){
    printf("Enter the element at Matrix2[%d][%d] : ", i+1, j+1);
    scanf("%d", &matrix2[i][j]);
 }
}

//Printing matrix 1 for confirmation
printf("\n");
printf("\n");

printf("Entered Matrix 1 is : ");
printf("\n");
for (int i = 0; i < m1; i++){
   for (int j = 0; j < n1; j++){
     printf("%d ", matrix1[i][j]);
   }
   printf("\n");
}

//Printing matrix 2 for confirmation
printf("\n");
printf("\n");

printf("Entered Matrix 2 is : ");
printf("\n");
for (int i = 0; i < m2; i++){
   for (int j = 0; j < n2; j++){
     printf("%d ", matrix2[i][j]);
   }
   printf("\n");
}

printf("\n");
printf("\n");

//Addition
if (m1 == m2 && n1 == n2){
 for (int i = 0; i < m1; i++){
   for (int j = 0; j < n1; j++){
     addition[i][j] = matrix1[i][j] + matrix2[i][j];
   }
 }

printf("The addition matrix is ---->");
printf("\n");
for (int i = 0; i < m1; i++){
   for (int j = 0; j < n1; j++){
     printf("%d ", addition[i][j]);
   }
   printf("\n");
  }
}
else
{
    printf("Matrix addition is not possible, the dimensions have to equal, please check");
}

printf("\n");
printf("\n");

//Transpose for matrix 1

// for (int i = 0; i < m1; i++){
//   for (int j = 0; j < n1; j++){
//     transpose1[i][j] = matrix1[j][i];
//   }
// }

printf("The tranpose matrix for matrix 1 is ---->");
printf("\n");
for (int i = 0; i < n1; i++){
   for (int j = 0; j < m1; j++){
     //printf("%d ", transpose1[i][j]);
     printf("%d ", matrix1[j][i]);
   }
   printf("\n");
}

printf("\n");
printf("\n");

//Transpose for matrix 2

// for (int i = 0; i < m2; i++){
//   for (int j = 0; j < n2; j++){
//     transpose2[i][j] = matrix2[j][i];
//   }
// }

printf("The tranpose matrix for matrix 2 is ---->");
printf("\n");
for (int i = 0; i < n2; i++){
   for (int j = 0; j < m2; j++){
     //printf("%d ", transpose2[i][j]);
     printf("%d ", matrix2[j][i]);
   }
   printf("\n");
}

printf("\n");
printf("\n");

//Multiplication

//Initialisation of multiplication matrix is really essential otherwise it gives garbage values
if (n1 == m2){
for (int i = 0; i < m1; i++){
   for (int j = 0; j < n2; j++){
     multimat[i][j] = 0;
   }
}

for (int i = 0; i < m1; i++){
   for (int j = 0; j < n2; j++){
      for (int k = 0; k < n1; k++){
           multimat[i][j] += matrix1[i][k] * matrix2[k][j];
      }
   }
}

//Printing the multiplication matrix.
printf("The matrix after multiplication is ----> ");
printf("\n");
for (int i = 0; i < m1; i++){
   for (int j = 0; j < n2; j++){
     printf("%d ", multimat[i][j]);
   }
   printf("\n");
}
}
else
{
    printf("The matrix multiplication is not valid. Please enter matrices with correct dimensions");
}
  printf("\n");
  printf("\n");

    return 0;
}
