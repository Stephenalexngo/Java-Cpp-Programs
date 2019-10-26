import java.math.BigInteger;
import java.util.*;

public class Question324 
{
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int factnum;
        
        while(input.hasNext())
        {
            factnum = input.nextInt();
            BigInteger factorial = BigInteger.ONE;
            TreeMap<Integer,Integer> listoffact = new TreeMap<>();

            for(int x = 1; x < factnum+1; x++)
            {
                factorial = factorial.multiply(BigInteger.valueOf(x));
            }
            
            for(int x = 0; x < 10; x++)
            {
                listoffact.put(x, 0);
            }

            for(int y = 0; y < factorial.toString().length(); y++)
            {
                int number = Character.getNumericValue(factorial.toString().charAt(y));
                if(listoffact.containsKey(number))
                    listoffact.put(number, listoffact.get(number)+1);
            }
            
            System.out.println(factnum+"! --");
            System.out.println("   (0)   " + listoffact.get(0) + "   (1)   " + listoffact.get(1) + "   (2)   " + listoffact.get(2) + "   (3)   " + listoffact.get(3) + "   (4)   " + listoffact.get(4));
            System.out.println("   (5)   " + listoffact.get(5) + "   (6)   " + listoffact.get(6) + "   (7)   " + listoffact.get(7) + "   (8)   " + listoffact.get(8) + "   (9)   " + listoffact.get(9));
        }
    } 
}
