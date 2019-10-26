import java.util.*;

public class Question11364
{
    
    public static void main(String[] args)
    {
        int n,m,max,min;
        
        Scanner num1 = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<Integer>();
        
        while(num1.hasNext())
        {
            n = num1.nextInt();
            
            for(int a = 0; a < n; a++)
            {
                m = num1.nextInt();
                
                for(int b = 0; b < m; b++)
                {
                    list.add(num1.nextInt());
                }
                
                max = list.get(0);
                min = list.get(0);
                
                for(int e = 0; e < m; e++)
                {
                    if(max < list.get(e))
                        max = list.get(e);
                        
                    if(min > list.get(e))
                        min = list.get(e);
                }
                
                for(int c = list.size() - 1; c > -1; c--)
                {
                    list.remove(c);
                }
                
                System.out.println((max-min) * 2);
            }     
        }
        
    }
    
}