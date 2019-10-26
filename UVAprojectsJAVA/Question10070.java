import java.math.BigInteger;
import java.util.*;

public class Question10070 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        BigInteger tester;
        boolean isOrdy,isLeap,first=true;
        
        while(input.hasNext())
        {
            tester = input.nextBigInteger();
            if(!first)
                System.out.println();
            first=false;
            isOrdy = true; isLeap = false;
            if(tester.mod(BigInteger.valueOf(4)).compareTo(BigInteger.ZERO) == 0 && tester.mod(BigInteger.valueOf(100)).compareTo(BigInteger.ZERO) != 0)
            {
                isOrdy = false;
                isLeap = true;
                System.out.println("This is leap year.");
            }
            else if(tester.mod(BigInteger.valueOf(400)).compareTo(BigInteger.ZERO) == 0)
            {
                isOrdy = false;
                isLeap = true;
                System.out.println("This is leap year.");
            }
            
            if(tester.mod(BigInteger.valueOf(15)).compareTo(BigInteger.ZERO) == 0)
            {
                isOrdy = false;
                System.out.println("This is huluculu festival year.");
            }
            if(tester.mod(BigInteger.valueOf(55)).compareTo(BigInteger.ZERO) == 0 && isLeap)
            {
                isOrdy = false;
                System.out.println("This is bulukulu festival year.");
            }
            
            if(isOrdy)
                System.out.printf("This is an ordinary year.\n");
            
        }
    } 
}
