import java.math.BigInteger;
import java.util.*;

public class Question465 
{
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String operator,firststring,secondstring;
        BigInteger integerval = new BigInteger("2147483647");
        
        while(input.hasNext())
        {
            firststring = input.next();
            operator = input.next();
            secondstring = input.next();
            BigInteger firstnum = new BigInteger(firststring);
            BigInteger secondnum = new BigInteger(secondstring);

            System.out.println(firststring + " " + operator + " " + secondstring);
            int first = firstnum.compareTo(integerval);
            int second = secondnum.compareTo(integerval);
            
            if(first == 1)
                System.out.println("first number too big");
            
            if(second == 1)
                System.out.println("second number too big");
            
            if(operator.equals("+"))
            {
                int sum = firstnum.add(secondnum).compareTo(integerval);
                if(sum == 1)
                    System.out.println("result too big");
            }
            else
            {
                int product = firstnum.multiply(secondnum).compareTo(integerval);
                if(product == 1)
                    System.out.println("result too big");
            }
        }
    } 
}
