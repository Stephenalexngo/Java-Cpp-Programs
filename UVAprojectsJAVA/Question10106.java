import java.util.*;
import java.math.BigInteger;

public class Question10106
{
    
    public static void main(String[] args)
    {
        String x,y;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            x = num1.next();
            y = num1.next();
            
            BigInteger a = new BigInteger(x);
            BigInteger b = new BigInteger(y);

            System.out.println(a.multiply(b));
        }
    }
}
