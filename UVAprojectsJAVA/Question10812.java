import java.util.*;

public class Question10812
{
    
    public static void main(String[] args)
    {
        int k,x,y;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            k = num1.nextInt();
            
            for(int a = 0; a < k; a++)
            {
                x = num1.nextInt();
                y = num1.nextInt();
                
                if(y > x)
                    System.out.println("impossible");
                else if((x+y)%2 == 0 && (x-y)%2 == 0)
                    System.out.println((x+y)/2 + " " + (x-y)/2);
                else
                    System.out.println("impossible");         
            }
        }
        
    }
    
}