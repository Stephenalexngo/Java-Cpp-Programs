import java.math.BigInteger;
import java.util.*;

public class Question623 
{
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int factnum;
        
        while(input.hasNext())
        {
            factnum = input.nextInt();
            BigInteger factorial = BigInteger.ONE;

            for(int x = 1; x < factnum+1; x++)
            {
                factorial = factorial.multiply(BigInteger.valueOf(x));
            }
            
            System.out.println(factnum+"!");
            System.out.println(factorial);
        }
    } 
}
