import java.util.Scanner;

public class Question11172
{
    
    public static void main(String[] args)
    {
        
        int i,j,x,y;
        
        Scanner num1 = new Scanner(System.in);
        
        y = num1.nextInt();
        
        for(x = 1; x <= y; x++)
        {
            
            i = num1.nextInt();
            j = num1.nextInt();
             
              if(i > j)
                  System.out.println(">");
              else if(i < j)
                  System.out.println("<");
              else
                  System.out.println("=");

        }
        
    }
    
}
