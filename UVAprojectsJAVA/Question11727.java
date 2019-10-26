import java.util.*;

public class Question11727
{
    
    public static void main(String[] args)
    {
        
        int x,y;
                
        ArrayList<Integer> list = new ArrayList<Integer>();
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            x = num1.nextInt();
            
            for(int a = 0; a < x; a++)
            {
                for(int b = 0; b < 3; b++)
                {
                   list.add(num1.nextInt());
                }

                if(list.get(0) < list.get(1) && list.get(0) > list.get(2))
                    y = list.get(0);
                else if(list.get(0) > list.get(1) && list.get(0) < list.get(2))
                    y = list.get(0);
                else if(list.get(1) < list.get(0) && list.get(1) > list.get(2))
                    y = list.get(1);
                else if(list.get(1) > list.get(0) && list.get(1) < list.get(2))
                    y = list.get(1);
                else if(list.get(2) < list.get(0) && list.get(2) > list.get(1))
                    y = list.get(2);
                else if(list.get(2) > list.get(0) && list.get(2) < list.get(1))
                    y = list.get(2);
                else if(Objects.equals(list.get(0), list.get(1)) || Objects.equals(list.get(0), list.get(2)))
                    y = list.get(0);
                else if(Objects.equals(list.get(1), list.get(0)) || Objects.equals(list.get(1), list.get(2)))
                    y = list.get(1);
                else if(Objects.equals(list.get(2), list.get(0)) || Objects.equals(list.get(2), list.get(1)))
                    y = list.get(2);
                else
                    y = list.get(0);
                
                System.out.println("Case " + (a + 1) + ": " + y);
                
                for(int b = 2; b > -1; b--)
                {
                   list.remove(b);
                }
            }
        }
        
    }
    
}

