import java.util.Scanner;


public class n4 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();

        int[] narr = new int[n];
        int[] karr = new int[k];

        for (int i = 0; i < n; ++i) {
            narr[i] = in.nextInt();
        }

        for (int i = 0; i < k; ++i) {
            karr[i] = in.nextInt();
        }

        for (int i = 0; i < k; ++i) {
            binCheck(narr, n, karr[i]);
        }

        in.close();
    }

    public static void binCheck(int[] arr, int n, int target) {
        int l = 0;
        int r = n - 1;

        while(l < r) {
            int mid = (l + r) / 2;
            if (arr[mid] < target) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }

        if (arr[r] == target) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
