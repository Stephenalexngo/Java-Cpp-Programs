import java.math.BigInteger;
import java.util.*;

public class Question568 
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
            char temp;
            for(int y = factstring.length()-1; y >= 0; y--)
            {
                if(factstring.charAt(y) != '0'){
                   temp = factstring.charAt(y);
                   if(factnum < 10){
                       System.out.println("    " + factnum + " -> " + temp);
                       break;
                   }
                   else if(factnum < 100){
                       System.out.println("   " + factnum + " -> " + temp);
                       break;
                   }
                   else if(factnum < 1000){
                       System.out.println("  " + factnum + " -> " + temp);
                       break;
                   }
                   else if(factnum < 10000){
                       System.out.println(" " + factnum + " -> " + temp);
                       break;
                   }
                }
            }
        }
    } 
}
