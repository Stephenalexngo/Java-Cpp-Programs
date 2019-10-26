import java.util.*;

public class Question12403
{
    
    public static void main(String[] args)
    {
        int n,j = 0,total = 0;
        String m;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            n = num1.nextInt();
            
            for(int a = 0; a < n; a++)
            {
                m = num1.next();
                
                if(m.equals("report"))
                    System.out.println(total);
                else
                {
                   j = num1.nextInt();
                   total = total + j; 
                }
            }
        }
        
    }
    
}