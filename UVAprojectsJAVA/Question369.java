import java.util.*;
import java.math.BigInteger;

public class Question369
{
    
    public static void main(String[] args)
    {
        
        String n,m,nm;
        
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            n = num1.next();
            m = num1.next();
            nm = Integer.toString(Integer.parseInt(n) - Integer.parseInt(m));
            
            BigInteger bign = new BigInteger(n);
            BigInteger bigm = new BigInteger(m);
            BigInteger bignm = new BigInteger(nm);
            
            if(!n.equals("0") || !m.equals("0"))
            {
                if(m.equals("0") || n.equals(m))
                   System.out.println(n + " things taken " + m + " at a time is " + 1  + " exactly."); 
                else    
                {
                    for(int a = 1; a < Integer.parseInt(n); a++) // for N!
                    {
                        BigInteger biga = new BigInteger(String.valueOf(a));
                        bign = bign.multiply(biga);
                    }
            
                    for(int b = 1; b < Integer.parseInt(m); b++) // for M!
                    {
                        BigInteger bigb = new BigInteger(String.valueOf(b));
                        bigm = bigm.multiply(bigb);
                    }
            
                    for(int d = 1; d < Integer.parseInt(nm); d++) // for (N-M)!
                    {
                        BigInteger bigd = new BigInteger(String.valueOf(d));
                        bignm = bignm.multiply(bigd);
                    }
                    
                   System.out.println(n + " things taken " + m + " at a time is " + (bign.divide(bignm.multiply(bigm)))  + " exactly.");  
                }      
            }

        }while(!n.equals("0") || !m.equals("0"));
    }
}
