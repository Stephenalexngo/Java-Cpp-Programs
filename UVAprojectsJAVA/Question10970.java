import java.util.*;

public class Question10970
{
    
    public static void main (String[] args)
    {
        int m,n;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            m = num1.nextInt(); 
            n = num1.nextInt();
            
            System.out.println((m-1)+(n*m)-m);
        }        
    }
}