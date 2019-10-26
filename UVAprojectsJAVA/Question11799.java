import java.util.*;

public class Question11799
{
    
    public static void main(String[] args)
    {
         int x,y,speed = 0;
                
        ArrayList<Integer> list = new ArrayList<Integer>();
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            x = num1.nextInt();
            
            for(int a = 0; a < x; a++)
            {
                y = num1.nextInt();
                
                for(int b = 0; b < y; b++)
                {
                   list.add(num1.nextInt());
                }
                
                if(y == 1)
                    System.out.println("Case " + (a+1) + ": " + list.get(0));
                else
                {
                    for(int c = 0; c < y; c++)
                    {
                        if(c == 0)
                           speed = list.get(c);
                        else
                        {
                            if(list.get(c) > speed)
                                speed = list.get(c);
                        }
                    }
                    
                    System.out.println("Case " + (a+1) + ": " + speed);
                }
                
                for(int b = y - 1; b > -1; b--)
                {
                   list.remove(b);
                }
            }
        }
        
    }
    
}

