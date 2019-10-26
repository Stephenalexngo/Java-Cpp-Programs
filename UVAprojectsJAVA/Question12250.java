import java.util.*;

public class Question12250
{
    
    public static void main(String[] args)
    {
        String n;
        int count = 1;
        
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            n = num1.next();
            
            if(!n.equals("#"))
            {
                if(n.equalsIgnoreCase("HELLO"))
                   System.out.println("Case " + count + ": " + "ENGLISH");
                else if(n.equalsIgnoreCase("HOLA"))
                   System.out.println("Case " + count + ": " + "SPANISH");
                else if(n.equalsIgnoreCase("HALLO"))
                   System.out.println("Case " + count + ": " + "GERMAN");
                else if(n.equalsIgnoreCase("BONJOUR"))
                   System.out.println("Case " + count + ": " + "FRENCH");
                else if(n.equalsIgnoreCase("CIAO"))
                   System.out.println("Case " + count + ": " + "ITALIAN");
                else if(n.equalsIgnoreCase("ZDRAVSTVUJTE"))
                   System.out.println("Case " + count + ": " + "RUSSIAN");
                else
                   System.out.println("Case " + count + ": " + "UNKNOWN");
            }
            
            count++;

        }while(!n.equals("#"));
        
    }
    
}