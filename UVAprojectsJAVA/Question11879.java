import java.math.BigInteger;
import java.util.*;

public class Question11879 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        BigInteger n;
        BigInteger seventeen = new BigInteger("17");
        
        do
        {
            n = input.nextBigInteger();
            
            if(n.compareTo(BigInteger.ZERO) != 0)
            {
                BigInteger d = n.mod(BigInteger.TEN);
                n.subtract(d);
                n.divide(BigInteger.TEN);
                
                if(n.mod(seventeen).compareTo(BigInteger.ZERO) == 0)
                    System.out.println("1");
                else
                    System.out.println("0");
            }
            
        }while(n.compareTo(BigInteger.ZERO) != 0);
    }
}
