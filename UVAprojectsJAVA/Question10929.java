import java.math.BigInteger;
import java.util.*;

public class Question10929 
{
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        BigInteger N,eleven,zero;
        String n;
        int tempo;
        eleven = new BigInteger("11");
        zero = new BigInteger("0");
        
        do
        {
            n = input.nextLine().trim();
            N = new BigInteger(n);
            tempo = N.compareTo(zero);
            
            if(tempo != 0)
            {
                int temp = N.mod(eleven).compareTo(zero);
                if(temp == 0)
                    System.out.println(n + " is a multiple of 11.");
                else
                    System.out.println(n + " is not a multiple of 11.");
            }
             
        }while(tempo != 0);
    } 
}
