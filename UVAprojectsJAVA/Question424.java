import java.util.*;
import java.math.BigInteger;

public class Question424
{
    
    public static void main(String[] args)
    {
        BigInteger x;
        BigInteger b = new BigInteger("0");
        
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            x = num1.nextBigInteger();
            
            if(x.compareTo(BigInteger.ZERO) != 0)
            {
                b = b.add(x);
            }
            
        }while(x.compareTo(BigInteger.ZERO) != 0);
        
       System.out.println(b); 
    }
}
