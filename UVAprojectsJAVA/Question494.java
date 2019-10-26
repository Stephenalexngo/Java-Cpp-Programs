import java.util.*;

public class Question494
{
    
    public static void main(String[] args)
    {
        
        int wcount = 0, endpoint = 0;
        boolean word = false;
        String x;
        String[] y;
        ArrayList<String> list = new ArrayList<String>();
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            x = num1.nextLine();
            y = x.split(" ");
            list.addAll(Arrays.asList(y));
            
            for(int i = 0; i < list.size(); i++)
            {
                for(int j = 0; j < list.get(i).length(); j++)
                {
                    if(list.get(i).charAt(j) >= 'A' && list.get(i).charAt(j) <= 'Z')
                    {
                        word = true;
                        
                        if(j + 1 == list.get(i).length() || !(list.get(i).charAt(j+1) >= 'A' && list.get(i).charAt(j+1) <= 'Z') && !(list.get(i).charAt(j+1) >= 'a' && list.get(i).charAt(j+1) <= 'z'))
                            endpoint = 1;
                        
                            
                    }
                    else if(list.get(i).charAt(j) >= 'a' && list.get(i).charAt(j) <= 'z')
                    {
                        word = true;
                        
                        if(j + 1 == list.get(i).length() || !(list.get(i).charAt(j+1) >= 'A' && list.get(i).charAt(j+1) <= 'Z') && !(list.get(i).charAt(j+1) >= 'a' && list.get(i).charAt(j+1) <= 'z'))
                            endpoint = 1;
                    }
                    else
                        word = false;
                    
                    if(word == true && endpoint == 1)
                    {
                        wcount++;
                        word = false;
                        endpoint = 0;
                    }
                }
            }
            
            for(int a = list.size() - 1; a > -1; a--)
            {
                list.remove(a);
            }

            System.out.println(wcount);
            wcount = 0;
        }
        
    }
    
}

