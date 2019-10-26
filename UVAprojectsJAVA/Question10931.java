import java.math.BigInteger;
import java.util.*;

public class Question10931
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        long decimal,P,tester;
        int count;
        BigInteger binary;
        
        while(input.hasNext())
        {
            tester = input.nextLong();
            if(tester == 0)
                break;
            
            decimal = tester;
            count = 0;
            binary = BigInteger.ZERO;
            P = 0;
            
            while(decimal > 0)
            {
                decimal /= 2;
                count++;
            }
            
            for(int x=count-1; x>-1; x--)
            {
                if(tester >= Math.pow(2,x))
                {
                    binary = binary.multiply(BigInteger.TEN);
                    binary = binary.add(BigInteger.ONE);
                    P++;
                    tester = tester - Math.round(Math.pow(2, x));
                }
                else
                {
                    binary = binary.multiply(BigInteger.TEN);
                }
            }
            
            System.out.println("The parity of " + binary + " is " + P + " (mod 2).");
        }
    } 
}
