import java.util.*;

public class Question401
{
    
    public static void main (String[] args)
    {
        String x;

        Scanner num1 = new Scanner(System.in);
        
	while(num1.hasNext())
	{
            boolean isPalindrome = false;
            boolean isMirrored = false;
            
            x = num1.next();
            
            StringBuilder sb = new StringBuilder(x);
                        
            if(sb.toString().equals(sb.reverse().toString()))
                isPalindrome = true;
            String y = x;
            
            for(int a = 0; a < x.length(); a++)
            {
                if(x.charAt(a) == 'E')
                    x.replace('E', '3');
                    
            }
            x = x.replace("[E]", "3");
            x = x.replace("[3]", "E");
            x = x.replace("[J]", "L");
            x = x.replace("[L]", "J");
            x = x.replace("[S]", "2");
            x = x.replace("[2]", "S");
            x = x.replace("[5]", "Z");
            x = x.replace("[Z]", "5");
            
            if(y.equals(x))
                isMirrored = true;
            
            if(isPalindrome == true && isMirrored == true)
                System.out.println(x + " -- is a mirrored palindrome.");
            else if(isPalindrome == true)
                System.out.println(x + " -- is a regular palindrome.");
            else if(isMirrored == true)
                System.out.println(x + " -- is a mirrored string.");
            else
                System.out.println(x + " -- is not a palindrome.");
        }
    }
}