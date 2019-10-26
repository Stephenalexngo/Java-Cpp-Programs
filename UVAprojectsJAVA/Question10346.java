import java.util.*;

public class Question10346
{
    
    public static void main(String[] args)
    {
        int n, k, x, count = 0;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            n = num1.nextInt();
            k = num1.nextInt();
               
            x = n;
            while(x >= k)
            {
                if(x % k == 0)
                {
                    x = x / k;
                    n = n + x;
                    x = x + count;
                    count = 0;
                }         
                else
                {
                    x = x - 1;
                    count++;
                }     
            }
            
            System.out.println(n);
        }
        
    }
    
}