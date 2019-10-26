import java.util.*;

public class Question11942
{
    
    public static void main(String[] args)
    {
        
        int x,asc,desc;
        
        Scanner num1 = new Scanner(System.in);
        ArrayList<Integer> listnum = new ArrayList<>();

        while(num1.hasNext())
        {
            x = num1.nextInt();
            System.out.println("Lumberjacks:");
            
            for(int a = 0; a < x; a++)
            {
                for(int b = 0; b < 10; b++)
                {
                    listnum.add(num1.nextInt());
                }
                
                if(listnum.get(0) < listnum.get(1))
                {
                    asc = 1;
                    for(int c = 0; c < listnum.size() - 1 && asc == 1; c++)
                    {
                        if(listnum.get(c) > listnum.get(c + 1) || Objects.equals(listnum.get(c), listnum.get(c + 1)))
                           asc = 0; 
                    }
                    
                    if(asc == 1)
                        System.out.println("Ordered");
                    else
                        System.out.println("Unordered");
                }
                else if(listnum.get(0) > listnum.get(1))
                {
                    desc = 1;
                    for(int c = 0; c < listnum.size() - 1 && desc == 1; c++)
                    {
                        if(listnum.get(c) < listnum.get(c + 1) || Objects.equals(listnum.get(c), listnum.get(c + 1)))
                           desc = 0; 
                    }
                    
                    if(desc == 1)
                        System.out.println("Ordered");
                    else
                        System.out.println("Unordered");
                }
                else
                    System.out.println("Unordered");
                
                for(int d = listnum.size() - 1; d > -1; d--)
                {
                    listnum.remove(d);
                }
            }
        }
    }
}

