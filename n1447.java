import java.util.Scanner;

public class n1447 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();

        int m[] = new int[n];
        for (int i = 0; i < n; ++i) {
            m[i] = in.nextInt();
        }

        int min = m[0];
        for (int i = 0; i < n; ++i) {
            if (m[i] < min) {
                min = m[i];
            }
        }

        int max = m[0];
        for (int i = 0; i < n; ++i) {
            if (m[i] > max) {
                max = m[i];
            }
        }

        for (int i = 0; i < n; ++i)
        {
            if (m[i] == max)
            {
                m[i] = min;
            }
        }

        for (int i = 0; i < n; ++i) {
            System.out.printf(m[i] + " ");
        }
            
        in.close();
    }
}