import java.util.*;

public class Question10110
{
    
    public static void main(String[] args)
    {
        long k;
        
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            k = num1.nextLong();
            
            if(k != 0)
            {
                if((Math.floor(Math.sqrt(k)))*((Math.floor(Math.sqrt(k)))) == k)
                   System.out.println("yes");
                else
                   System.out.println("no");
            } 
            
        }while(k != 0);
        
    }
    
}