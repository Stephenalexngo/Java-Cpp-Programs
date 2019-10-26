import java.math.*;
import java.util.*;

public class Question748
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        BigDecimal tester;
        int expo;
        
        while(input.hasNext())
        {
            tester = input.nextBigDecimal();
            expo = input.nextInt();
            String str = tester.pow(expo).stripTrailingZeros().toPlainString();
            
            if(str.charAt(0) == '0')
                str = str.substring(1);
            
            System.out.println(str);
        }
    } 
}
