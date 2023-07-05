import java.util.*;
class rotate{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter Size Of Array : ");
        n = sc.nextInt();
        int[] a = new int[n];
        System.out.print("Enter Array Elements : ");
        for(int i = 0 ; i < n ; i++){
            a[i] = sc.nextInt();
        }
        int k;
        System.out.print("Enter Value of K : ");
        k = sc.nextInt();
        for(int j = 0 ; j < k ; j++){
            int temp =  a[n-1];
            for(int i = n-1 ; i >= 1 ; i--){
                a[i] = a[i-1];
            }
            a[0] = temp;
        }
        System.out.println("OUTPUT : ");
        for(int i = 0 ; i < n ; i++){
            System.out.print(a[i] +  " ");
        }
    }
}