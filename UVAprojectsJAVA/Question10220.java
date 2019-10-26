import java.math.BigInteger;
import java.util.*;

public class Question10220 
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
            
            String factstring = factorial.toString();
            int temp=0;
            for(int y = 0; y < factstring.length(); y++)
            {
                temp += Character.getNumericValue(factstring.charAt(y));
            }
            System.out.println(temp);
        }
    } 
}
