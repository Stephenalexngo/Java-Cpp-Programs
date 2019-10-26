import java.math.BigInteger;
import java.util.*;

public class Question713
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int tester;
        BigInteger firstnum,secondnum,revfirst,revsec,total,revtotal;
        
        while(input.hasNext())
        {
            tester = input.nextInt();
            
            for(int x=0; x<tester; x++)
            {
                firstnum = input.nextBigInteger();
                secondnum = input.nextBigInteger();
                
                if(firstnum.compareTo(BigInteger.valueOf(5)) == -1 && secondnum.compareTo(BigInteger.valueOf(5)) == -1)
                {
                    System.out.println(firstnum.add(secondnum));
                }
                else
                {
                    revfirst = BigInteger.ZERO;
                    revsec = BigInteger.ZERO;
                    while(firstnum.compareTo(BigInteger.ZERO) != 0)
                    {
                        revfirst = revfirst.multiply(BigInteger.TEN);
                        revfirst = revfirst.add(firstnum.mod(BigInteger.TEN));
                        firstnum = firstnum.subtract(firstnum.mod(BigInteger.TEN));
                        firstnum = firstnum.divide(BigInteger.TEN);
                    }
                    
                    while(secondnum.compareTo(BigInteger.ZERO) != 0)
                    {
                        revsec = revsec.multiply(BigInteger.TEN);
                        revsec = revsec.add(secondnum.mod(BigInteger.TEN));
                        secondnum = secondnum.subtract(secondnum.mod(BigInteger.TEN));
                        secondnum = secondnum.divide(BigInteger.TEN);
                    }
                    
                    total = revfirst.add(revsec);
                    revtotal = BigInteger.ZERO;
                    
                    while(total.compareTo(BigInteger.ZERO) != 0)
                    {
                        revtotal = revtotal.multiply(BigInteger.TEN);
                        revtotal = revtotal.add(total.mod(BigInteger.TEN));
                        total = total.subtract(total.mod(BigInteger.TEN));
                        total = total.divide(BigInteger.TEN);
                    }
                    
                    System.out.println(revtotal);
                }
            }
        }
    } 
}
