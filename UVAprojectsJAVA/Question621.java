import java.util.*;

public class Question621
{
    
    public static void main(String[] args)
    {
        int n;
        String m;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            n = num1.nextInt();
            
            for(int a = 0; a < n; a++)
            {
                m = num1.next();
                
                if(m.equals("78") || m.equals("4") || m.equals("1"))
                    System.out.println("+");
                else if(Integer.parseInt(String.valueOf(m.charAt(m.length() - 2))) == 3 && Integer.parseInt(String.valueOf(m.charAt(m.length() - 1))) == 5)
                    System.out.println("-");
                else if(Integer.parseInt(String.valueOf(m.charAt(0))) == 9)
                    System.out.println("*");
                else
                    System.out.println("?"); 
            }     
        }
        
    }
    
}