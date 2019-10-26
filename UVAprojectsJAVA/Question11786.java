import java.util.*;

public class Question11786 
{
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String lines;
        int tester;
        
        while(input.hasNext())
        {
            tester = input.nextInt();
            input.nextLine();
            
            for(int x = 0; x < tester; x++)
            {
                lines = input.nextLine();
                int water = 0;
                Stack<Integer> listoflines = new Stack<>();
                
                for(int y = 0; y < lines.length(); y++)
                {
                    if(lines.charAt(y) == (char)92)
                        listoflines.push(y);
                    else
                    {
                        if(!listoflines.isEmpty() && lines.charAt(y) == (char)47)
                        {
                            water = water + (y - listoflines.peek());
                            listoflines.pop();
                        }
                    }
                }
                
                System.out.println(water);
            }
        }
    } 
}
