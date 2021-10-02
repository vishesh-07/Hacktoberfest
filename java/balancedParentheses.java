import java.util.Scanner;
import java.util.Stack;

class balancedParentheses {
  public static boolean isValid(String s) {
    Stack<Character> st = new Stack<>();
    for (int i = 0; i < s.length(); i++) {
      char ch = s.charAt(i);
      if (ch == '(' || ch == '{' || ch == '[') {
        st.push(ch);
        continue;
      }
      if (st.isEmpty()) {
        return false;
      }
      char check;
      switch (ch) {
        case ')':
          check = st.pop();
          if (check == '{' || check == '[')
            return false;
          break;

        case '}':
          check = st.pop();
          if (check == '(' || check == '[')
            return false;
          break;

        case ']':
          check = st.pop();
          if (check == '(' || check == '{')
            return false;
          break;
      }
    }
    return st.isEmpty();
  }

  public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);

    String s=sc.next();
    System.out.println(isValid(s));

    sc.close();
  }
}