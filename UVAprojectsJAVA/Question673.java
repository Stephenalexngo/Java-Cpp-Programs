import java.util.*;

public class Question673
{
    public static void main(String[] args)
    {
        String paren;
        int n;
        Stack stack1 = new Stack();
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            n = num1.nextInt();
            num1.nextLine();
            
            for(int y = 0; y < n; y++)
            {
                paren = num1.nextLine();
                
                if(paren.isEmpty())
                    System.out.println("Yes");
                else
                {
                    for(int z = 0; z < paren.length(); z++)
                    {
                        if(!(paren.charAt(z) == ' '))
                        {
                            if(stack1.empty())
                                stack1.push(paren.charAt(z));
                            else
                            {
                                if(stack1.peek().equals('('))
                                {
                                    if(paren.charAt(z) == ')')
                                        stack1.pop();
                                    else
                                        stack1.push(paren.charAt(z));
                                }
                                else if(stack1.peek().equals('['))
                                {
                                    if(paren.charAt(z) == ']')
                                        stack1.pop();
                                    else
                                        stack1.push(paren.charAt(z));
                                }
                            }
                        }
                    }
                    
                    if(stack1.empty())
                       System.out.println("Yes");
                    else
                       System.out.println("No");
                
                    stack1.clear();
                }
            }
        }
    }
}
