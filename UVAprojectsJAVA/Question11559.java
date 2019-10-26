import java.util.*;

public class Question11559 
{
    
    public static void main(String[] args)
    {
        
        Scanner input = new Scanner(System.in);
        int num_of_part, budget, num_of_hotel, num_of_week, price, hotelprice;
        
        while(input.hasNext())
        {
            num_of_part = input.nextInt();
            budget = input.nextInt();
            num_of_hotel = input.nextInt();
            num_of_week = input.nextInt();
            hotelprice = -1;
            boolean isLoop = false;
            
            for(int x = 0; x < num_of_hotel; x++)
            {
                ArrayList<Integer> listofbed = new ArrayList<>();
                price = input.nextInt();
                boolean isValid = false;
                
                for(int y = 0; y < num_of_week; y++)
                {
                    listofbed.add(input.nextInt());
                }
                
                for(int z = 0; z < listofbed.size(); z++)
                {
                    if(num_of_part <= listofbed.get(z))
                    {
                        isValid = true;
                        break;
                    }
                }
                
                if(isValid)
                {
                    if(budget >= price * num_of_part)
                    {
                        if(!isLoop)
                        {
                            isLoop = true;
                            hotelprice = price * num_of_part;
                        }
                        else if(hotelprice >= price * num_of_part)
                            hotelprice = price * num_of_part;
                    }
                }
            }
            
            if(hotelprice == -1)
                System.out.println("stay home");
            else
                System.out.println(hotelprice);
        }
    } 
}
