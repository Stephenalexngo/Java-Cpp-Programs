import java.util.*;

public class Question12289
{
    
    public static void main(String[] args)
    {
        int k;
        String x;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            k = num1.nextInt();
            
            for(int a = 0; a < k; a++)
            {
                 x = num1.next();
                 
                 if(x.length() == 5)
                     System.out.println("3");
                 else
                 {
                     if(x.charAt(0) == 'o' && x.charAt(1) == 'n' || x.charAt(0) == 'o' && x.charAt(2) == 'e' || x.charAt(1) == 'n' && x.charAt(2) == 'e')
                         System.out.println("1");
                     else
                         System.out.println("2");
                 }
            }
        }
        
    }
    
}