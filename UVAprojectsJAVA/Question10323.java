import java.math.BigInteger;
import java.util.*;

public class Question10323 
{
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int factnum;
        BigInteger tenk = new BigInteger("10000");
        BigInteger sixbil = new BigInteger("6227020800");
        
        while(input.hasNext())
        {
            factnum = input.nextInt();
            BigInteger factorial = BigInteger.ONE;

            for(int x = 1; x < factnum+1; x++)
            {
                 factorial = factorial.multiply(BigInteger.valueOf(x));
            }
           
            if(factorial.compareTo(tenk) == -1)
                System.out.println("Underflow!");
            else if(factorial.compareTo(sixbil) == 1)
                System.out.println("Overflow!");
            else
                System.out.println(factorial);    
        }
    } 
}
