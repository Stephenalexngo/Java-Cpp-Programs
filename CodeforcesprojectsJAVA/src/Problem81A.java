import java.util.*;

public class Problem81A 
{
    
    public static void main(String[] args)
    {
        String x;
        
        Scanner num1 = new Scanner(System.in);
        Stack<Character> stack = new Stack();

            x = num1.next();
          
            for(int a = 0; a < x.length(); a++)
            {
                if(stack.isEmpty())
                {
                    stack.push(x.charAt(a));
                }
                else
                {
                    if(stack.peek() == x.charAt(a))
                        stack.pop();
                    else
                        stack.push(x.charAt(a));
                }
            }
            
            StringBuilder sb = new StringBuilder("");
            for(int b = 0; b < stack.size(); b++)
            {
                sb.append(stack.get(b));
            }
            System.out.println(sb.toString());
            
            stack.clear();
    }
    
}
