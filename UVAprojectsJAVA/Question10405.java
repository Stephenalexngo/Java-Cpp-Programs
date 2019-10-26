import java.util.*;

public class Question10405 
{
    
    public static void main(String[] args)
    {
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            Stack<Character> mainstack = new Stack();
            Stack<Character> secondstack = new Stack();
            Stack<Character> thirdstack = new Stack();
            String a,b;
            boolean isEqual;
            a = num1.next();
            b = num1.next();
            
            for(int x = a.length()-1; x >= 0; x--)
            {
                mainstack.push(a.charAt(x));
            }
            
            for(int x = b.length()-1; x >= 0; x--)
            {
                secondstack.push(b.charAt(x));
            }
            
            int count = 0;
            int z;
            
            while(!mainstack.isEmpty())
            {
                 isEqual = false;
                 z = 1;
                
                 while(!secondstack.isEmpty() && !mainstack.isEmpty())
                 {     
                     if(secondstack.peek().equals(mainstack.peek()) && z == 1)
                     {
                         secondstack.pop();
                         mainstack.pop();
                         isEqual = true;
                         count++;
                         z = 0;
                     }
                     else
                         thirdstack.push(secondstack.pop());
                 }
                 
                 while(!thirdstack.isEmpty())
                 {
                     secondstack.push(thirdstack.pop());
                 }
                 
                 if(!isEqual)
                     mainstack.pop();
            }
            
            System.out.println(count);
        }
    } 
}
