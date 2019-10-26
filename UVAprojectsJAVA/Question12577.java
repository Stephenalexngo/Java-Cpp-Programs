import java.util.*;

public class Question12577
{
    
    public static void main(String[] args)
    {
        String m;
        int count = 1;
        
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            m = num1.next();
            
            if(!m.equals("*"))
            {
                if(m.equals("Hajj"))
                    System.out.println("Case " + count + ": " + "Hajj-e-Akbar");
                else
                    System.out.println("Case " + count + ": " + "Hajj-e-Asghar");
            }
            
            count++;
        }while(!m.equals("*"));
        
    }
    
}