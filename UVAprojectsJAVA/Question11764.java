import java.util.*;

public class Question11764
{
    
    public static void main(String[] args)
    {
        int n,m,low,high,Case = 1;
        
        Scanner num1 = new Scanner(System.in);
        ArrayList<Integer> wall_list = new ArrayList<Integer>();
        
        while(num1.hasNext())
        {
            n = num1.nextInt();
            
            for(int a = 0; a < n; a++)
            {
                m = num1.nextInt();
                low = 0;
                high = 0;
                
                for(int b = 0; b < m; b++)
                {
                    wall_list.add(num1.nextInt());
                }
                
                if(wall_list.size() == 1)
                    System.out.println("Case " + Case + ": 0 0");
                else
                {
                    for(int c = 1; c < wall_list.size(); c++)
                    {
                        if(wall_list.get(c-1) < wall_list.get(c))
                            high++;
                        else if(wall_list.get(c-1) > wall_list.get(c))
                            low++;
                    }
                   System.out.println("Case " + Case + ": " + high + " " + low);
                }
                
                for(int d = wall_list.size() - 1; d > -1; d--)
                {
                    wall_list.remove(d);
                }
               Case++; 
            }     
        }
    }
}