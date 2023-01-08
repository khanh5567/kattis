import java.util.Scanner;

class stopwatch {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n, t1, t2;
        int count = 0;

        n = sc.nextInt();

        int[] input = new int[n];

        if (n % 2 != 0) {
            System.out.print("Still running");
        }

        else {

            for(int i = 0; i < n; i++) {

                input[i] = sc.nextInt();

                if(i%2!=0){
                    count+= input[i] - input[i-1];
                }
            }


        }

        if(count!=0){
            System.out.print(count);
        }
    }
}
