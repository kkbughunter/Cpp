import java.util.HashMap;
import java.util.Map;

public class Question3 {

    public static String Q4(int x, int y) {
        if (x == 0) return "0";
        
        StringBuilder result = new StringBuilder();
        
        result.append(x / y);
        // System.out.println(x / y);
        int rem = x % y;
        // System.err.println(rem);
        if (rem == 0) return result.toString();
        
        result.append(".");
        Map<Integer, Integer> rmap = new HashMap<>();
        
        while (rem != 0) {
            if (rmap.containsKey(rem)) {
                result.insert(rmap.get(rem), "(");
                result.append(")");
                break;
            }
            
            rmap.put(rem, result.length());
            rem *= 10;
            result.append(rem / y);
            rem %= y;
        }
        
        return result.toString();
    }

    public static void main(String[] args) {
        int x, y;
        
        x = 1; y = 2;
        System.out.println("Input: " + x + ", " + y + "\nOutput: " + Q4(x, y));  
        x = 2; y = 1;
        System.out.println("Input: " + x + ", " + y + "\nOutput: " + Q4(x, y));
        x = 4; y = 333;
        System.out.println("Input: " + x + ", " + y + "\nOutput: " + Q4(x, y)); 
        x = 355; y = 113;
        System.out.println("Input: " + x + ", " + y + "\nOutput: " + Q4(x, y)); 
        x = 22; y = 7;
        System.out.println("Input: " + x + ", " + y + "\nOutput: " + Q4(x, y));  
    }
  }

  