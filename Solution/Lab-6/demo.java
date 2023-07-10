


import java.util.*;
class demo{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int  i, j, k, r1, c1, r2, c2, sum = 0;
        r1 = sc.nextInt();
        c1 = sc.nextInt();
       //  r2 = sc.nextInt();
       //  c2 = sc.nextInt();
        int[][] a = new int[r1][c1];
        for(i = 0; i < r1; i++)
       {
           for(j = 0; j < c1; j++)
           {
               a[i][j] = sc.nextInt();
           }
       }
       System.out.println(a[0].length);
    }
}