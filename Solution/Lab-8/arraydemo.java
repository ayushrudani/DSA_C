import java.util.Scanner;

class arraydemo{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get the dimensions of the array from the user
        System.out.print("Enter the number of rows (m): ");
        int m = scanner.nextInt();
        System.out.print("Enter the number of columns (n): ");
        int n = scanner.nextInt();

        int[][] array = new int[m][n];
                                                                        
        // Get the elements of the array from the user
        System.out.println("Enter the elements of the array:");

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                array[i][j] = scanner.nextInt();
            }
        }

        // Print the elements of the array
        System.out.println("Output:");

        for (int i = 0; i < m + n - 1; i++) {
            for (int j = 0; j <= i; j++) {
                if (j < m && i - j < n) {
                    System.out.print(array[j][i - j] + " ");
                }
            }
            System.out.println();
        }

        scanner.close();
    }

}