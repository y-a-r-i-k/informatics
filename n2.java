import java.util.Scanner;

public class n2 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();

        int[] narr = new int[n];
        for (int i = 0; i < n; ++i) {
            narr[i] = in.nextInt();
        }

        int[] karr = new int[k];
        for (int i = 0; i < k; ++i) {
            karr[i] = in.nextInt();
        }

        for (int i = 0; i < k; ++i) {
            System.out.println(binSrch(narr, n, karr[i]));
        }

        in.close();
    } 

    public static int binSrch(int[] narr, int n, int target) {

        int l = 0;
        int r = n - 1;

        int closest = narr[0];
        while(l <= r) {
            int mid = (l + r) / 2;

            if (Math.abs(narr[mid] - target) < Math.abs(closest - target)) {
                closest = narr[mid];
            } else if (Math.abs(narr[mid] - target) == Math.abs(closest - target)) {
                closest = Math.min(closest, narr[mid]);
            }

            if (narr[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return closest;
           
    }
}  
