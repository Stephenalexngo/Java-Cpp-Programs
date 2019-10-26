import java.math.BigInteger;
import java.util.*;

public class Question374 
{
    
    public static void main(String[] args)
    {
        
        Scanner input = new Scanner(System.in);
        BigInteger B,P,M;
        
        while(input.hasNext())
        {
            B = input.nextBigInteger();
            P = input.nextBigInteger();
            M = input.nextBigInteger();
            
            System.out.printf("%d\n", B.modPow(P, M)); 
        }
    } 
}
