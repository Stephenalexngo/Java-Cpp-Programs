import java.util.*;

public class Question11877
{
    
    public static void main(String[] args)
    {
        int n;
        
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            n = num1.nextInt();
            
            if(n != 0)
            {
                if(n % 2 == 0)
                    n = n / 2;
                else
                    n = (n - 1) / 2;
                
                System.out.println(n);
            }  
        }while(n != 0);
        
    }
    
}