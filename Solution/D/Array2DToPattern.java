import java.util.*;
class demo{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m,n;
        m = sc.nextInt();
        n = sc.nextInt();
        int[][] a = new int[m][n];
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j <  n; j++){
                a[i][j] = sc.nextInt();
            }
        }

        for(int i = 0 ; i < m+n-1 ; i++){
            for(int j = 0 ; j <= i ; j++){
                if(j<m && i-j<n){
                    System.out.print(a[j][i-j] + " ");
                }
            }
            System.out.println();
        }
    }
}