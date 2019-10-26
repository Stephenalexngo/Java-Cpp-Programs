import java.util.*;

public class Question12372
{
    
    public static void main(String[] args)
    {
        int n,m,l,j;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            n = num1.nextInt();
            
            for(int a = 0; a < n; a++)
            {
                m = num1.nextInt();
                l = num1.nextInt();
                j = num1.nextInt();
                
                if(m <= 20 && l <= 20 && j <= 20)
                    System.out.println("Case " + (a+1) + ": " + "good");
                else
                    System.out.println("Case " + (a+1) + ": " + "bad");
            }

        }
        
    }
    
}