import java.util.*;

public class Question11461 
{
    
    public static void main(String[] args)
    {
        
        Scanner num1 = new Scanner(System.in);
        int a,b,count;
        
        do
        {
            a = num1.nextInt();
            b = num1.nextInt();
            count = 0;
            int temp = 1;
            
            if(a != 0 && b != 0)
            {
                while(Math.pow(temp, 2) <= b)
                {
                    if(Math.pow(temp, 2) >= a)
                       count++;
                    
                    temp++;
                }
                
                System.out.println(count);
            } 
        }while(a != 0 && b != 0);
    }
    
}
