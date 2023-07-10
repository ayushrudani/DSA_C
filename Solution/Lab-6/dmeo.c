// 24. Write a program two multiply two matrices.

#include<stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, r1, c1, r2, c2, sum = 0;

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);  

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("The matrices cannot be multiplied with each other.\n");
    }
    else
    {
        printf("Enter the elements of first matrix:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of second matrix:\n");
        for(i = 0; i < r2; i++)
        {
            for(j = 0; j < c2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        // for(int i = 0 ; i < r1 ; i++){
        //     for(int j = 0 ; j < c2 ; j++){
        //         c[i][j] = 0;
        //     }
        // }
        c[0][0] = 0;
        // int temp = 1;
        for(int x=0,y=0,z=0;x<r1;z++){
            if(z==c1){
                z=0;
                y++;
                c[x][y] = 0;
            }
            if(y==c2){
                y=0;
                x++;
                c[x][y] = 0;
            }
        
            c[x][y] +=a[x][z]*b[z][y];
            //  printf("step - %d = %d\n",temp,c[x][y]);
            //  temp++;
        }
     printf("The resultant matrix is:\n");
        for(i = 0; i < r1; i++)
        {
            for(j = 0; j < c2; j++)
            {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        } 

       
    }

    return 0;
}