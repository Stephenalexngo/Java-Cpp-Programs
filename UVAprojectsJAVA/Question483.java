import java.util.Scanner;

public class Question483
{
   
    public static void main(String[] args)
    {
        
        String x,z;
        String[] y;
        
        Scanner num1 = new Scanner(System.in);

        while(num1.hasNext())
        {
            x = num1.nextLine();
            y = x.split(" ");

            for(int a = 0; a < y.length; a++)
            {
                z = y[a];
                
                for(int b = z.length() - 1; b > -1; b--)
                {
                    System.out.print(z.charAt(b));
                }
                
                if(a < y.length - 1)
                  System.out.print(" ");
            }
            
           System.out.println("");
        }
    }
}
