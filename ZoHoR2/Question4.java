public class Question4 {
  public static int countConsecutiveSumWays(int n) {
    int count = 0;

    for (int k = 1; k * (k + 1) / 2 <= n; k++) {
      if ((n-k*(k + 1)/2) % k == 0) {
        // System.out.print(n-k*(k + 1)/2);
        count++;
      }
    }

    return count;
  }

  public static void main(String[] args) {
    int n = 9;
    System.out.println("Input: " + n + " \nOutput: " + countConsecutiveSumWays(n));
    n = 15;
    System.out.println("Input: " + n + " \nOutput: " + countConsecutiveSumWays(n));
    n = 43156417;
    System.out.println("Input: " + n + " \nOutput: " + countConsecutiveSumWays(n));
  }
}
