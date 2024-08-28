import java.util.Stack;

public class QuestionTwo {

    public static void main(String[] args) {
        String s1 = "3[a]2[bc]";
        String s2 = "3[a2[c]]";
        String s3 = "2[abc]3[cd]ef";
        String s4 = "3[2[a]b]";

        System.out.println("Input: " + s1 + " \nOutput: " + Q2(s1));
        System.out.println("Input: " + s2 + " \nOutput: " + Q2(s2));
        System.out.println("Input: " + s3 + " \nOutput: " + Q2(s3));
        System.out.println("Input: " + s4 + " \nOutput: " + Q2(s4));

    }

    public static String Q2(String s) {
        Stack<Integer> forNum = new Stack<>();
        Stack<StringBuilder> result = new Stack<>();
        StringBuilder current = new StringBuilder();
        int i = 0;

        while (i < s.length()) {
            char ch = s.charAt(i);

            if (Character.isDigit(ch)) {
                int count = 0;
                while (Character.isDigit(s.charAt(i))) {
                    count = count * 10 + (s.charAt(i) - '0');
                    i++;
                }
                forNum.push(count);
            } else if (ch == '[') {
                result.push(current);
                current = new StringBuilder();
                i++;
            } else if (ch == ']') {
                StringBuilder temp = current;
                current = result.pop();
                int repeatTimes = forNum.pop();
                for (int j = 0; j < repeatTimes; j++) {
                    current.append(temp);
                }
                i++;
            } else {
                current.append(ch);
                i++;
            }
        }

        return current.toString();
    }
}
