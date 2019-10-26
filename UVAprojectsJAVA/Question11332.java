import java.util.*;

public class Question11332
{
    
    public static void main(String[] args)
    {
        
        int x,y,z = 0;
        
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            x = num1.nextInt();
            
            if(x != 0)
            {
                while(x != 0)
                {
                   y = x % 10;
                   z = z + y;
                   x = (x - y)/ 10;
                
                   if(z > 9 && x == 0)
                   {
                      x = z;
                      z = 0;
                   }
                }
                
                x = 1;
                System.out.println(z);
                z = 0;
            }

        }while(x != 0);
        
    }
    
}

