import java.util.*;

public class Question353
{
    
    public static void main(String[] args)
    {
        String x;
        
        Scanner num1 = new Scanner(System.in);
        HashMap<String,Integer> map = new HashMap<>();
        
        while(num1.hasNext())
        {
            x = num1.nextLine();
            
            for(int a = 0; a < x.length(); a++)
            {
                for(int b = 0; b < x.length(); b++)
                {
                    String y = x.substring(a, b);
                    if(y.length() == 1)
                        map.put(y, 1);
                    else
                    {
                        StringBuilder sb = new StringBuilder();
                        sb.append(y);
                        if(sb.toString().equals(sb.reverse().toString()))
                            map.put(y, 1);
                    }
                }
            }
        }
    }
    
}