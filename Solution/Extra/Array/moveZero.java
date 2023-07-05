import java.util.*;
class moveZero{
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
        int z = 1;
        for(int j = 0 ; j < n-z ; j++){
            if(a[j] == 0){
                for(int i = j ; i < n-1 ; i++){
                    int temp = a[i];
                    a[i] = a[i+1];
                    a[i+1] = temp; 
                }
                z++;
            }
        }
        System.out.println("OUTPUT : ");
        for(int i = 0 ; i < n ; i++){
            System.out.print(a[i] +  " ");
        }
    }
}