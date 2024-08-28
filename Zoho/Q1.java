/*
 * A positive integer N is passed as the input. if we print all the numbers from 1 to N continuosly, the 
 * program must find the number of characters(digits) printed in the display.

 Input:
    15
 Output:
    21
 Explanation:
    123456789101112131415 so the total characters is `21`.
*/

import java.util.*;

public class Q1 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number N: ");
        int n = sc.nextInt();
    
        int res = 0;
        int val = 1;
        while(n-- > 0){
            int temp = val;
            while(temp > 0){
                res++;
                temp/=10;
            }
            val++;
        }
        
        System.out.println("Result: "  + res);
    }
}
