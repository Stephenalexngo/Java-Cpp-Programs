import java.math.BigInteger;
import java.util.*;

public class Question495 
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int tester;
        
        while(input.hasNext())
        {
            tester = input.nextInt();
            ArrayList<BigInteger> arrbig = new ArrayList<>();
            
            for(int x=0; x<tester+1; x++)
            {
                if(x==0)
                    arrbig.add(BigInteger.ZERO);
                else if(x==1)
                    arrbig.add(BigInteger.ONE);
                else{
                    arrbig.add(arrbig.get(x-1).add(arrbig.get(x-2)));
                }
            }
            System.out.printf("The Fibonacci number for %d is %d\n", tester, arrbig.get(tester));
        }
    } 
}
