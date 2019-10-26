import java.util.*;
import java.math.BigInteger;

public class Question113
{
    
    public static void main(String[] args)
    {
        double x;
        String y;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            x = num1.nextInt();
            y = num1.next();
            
            BigInteger z = new BigInteger(y);
            
            if(x != 0)
            {
                System.out.println((int)Math.round(Math.pow(z.doubleValue(), 1/x)));
            }
        }
    }
}