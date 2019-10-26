import java.util.*;

public class Question11854 
{
    
    public static void main(String[] args)
    {
        
        Scanner num1 = new Scanner(System.in);
        int x,y,z;
        
        do
        {
            x = num1.nextInt();
            y = num1.nextInt();
            z = num1.nextInt();
            
            if(x != 0 || y != 0 || z != 0)
            {
                if(x*x + y*y == z*z || x*x + z*z == y*y || z*z + y*y == x*x)
                    System.out.println("right");
                else
                    System.out.println("wrong");
            }
        }while(x != 0 || y != 0 || z != 0);
    } 
}
