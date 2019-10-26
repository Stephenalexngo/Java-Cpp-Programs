import java.util.*;

public class Question499
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String line;    
        TreeMap<Character,Integer> hm = new TreeMap<>();
        int maxnum;
        
        while(input.hasNext())
        {
            line = input.nextLine();
            hm.clear();
            maxnum = 0;
            
            for(int x=0; x<line.length(); x++)
            {
                if((line.charAt(x) > (char)64 && line.charAt(x) < (char)91)||(line.charAt(x) > (char)96 && line.charAt(x) < (char)123))
                {
                    if(hm.containsKey(line.charAt(x)))
                        hm.put(line.charAt(x), hm.get(line.charAt(x))+1);
                    else
                        hm.put(line.charAt(x), 1);
                }
            }
            
            for(Character key: hm.keySet())
            {
                if(maxnum == 0)
                    maxnum = hm.get(key);
                else{
                    if(maxnum < hm.get(key))
                        maxnum = hm.get(key);
                }
            }
            
            for(Character key: hm.keySet())
            {
                if(hm.get(key)==maxnum && ((key > (char)64 && key < (char)91)||(key > (char)96 && key < (char)123)))
                    System.out.print(key);
            }
            
            System.out.println(" " + maxnum);
        }
    } 
}
