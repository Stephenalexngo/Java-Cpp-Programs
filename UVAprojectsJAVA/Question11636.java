import java.util.*;

public class Question11636
{
    
    public static void main(String[] args)
    {
        int x = 0,Case=1,y,count;
        
        Scanner num1 = new Scanner(System.in);
        
        do
        {
            x = num1.nextInt();
            count = 0;
            y = 1;
            
            if(x > 0)
            {
                while(y < x)
                {
                    y = y * 2;
                    count++;
                }
                
                System.out.println("Case " + Case + ": " + count);
            }
           Case++; 
        }while(x > 0);
    }
}