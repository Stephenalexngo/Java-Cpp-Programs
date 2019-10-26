import java.util.*;

public class Question10420
{
   
    public static void main(String[] args)
    {
        int n;
        Scanner num1 = new Scanner(System.in);
        TreeMap<String,Integer> hm = new TreeMap<>();
        
        while(num1.hasNext())
        {
            n = num1.nextInt();
            num1.nextLine();
            
            for(int a = 0; a < n; a++)
            {
                     String lines = num1.nextLine().trim();
                     String[] country = lines.split(" ");
                
                     if(hm.containsKey(country[0]))
                         hm.put(country[0], hm.get(country[0])+1);
                     else
                         hm.put(country[0], 1);
            }
            
            hm.keySet().forEach((key) -> {
                System.out.println(key + " " + hm.get(key));
            });
            hm.clear();
        }
    }
    
}
