import java.util.*;
class small{
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
        int small = a[0];
        for(int i = 1 ; i < n ; i++){
            if(a[i] < small){
                small = a[i];
            }
        }
        System.out.println("Smallest Number is : " + small);
    }
}