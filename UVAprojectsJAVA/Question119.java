import java.util.*;

public class Question119
{
    
    public static void main (String[] args)
    {
        int x,z,value,count,gifts=0,extra,ctr=0;
	String[] split;
        String y;
		
	Scanner num1 = new Scanner(System.in);
	ArrayList<String> listnames = new ArrayList<>();
	ArrayList<Integer> listnumbers = new ArrayList<>();

	while(num1.hasNext())
	{
            if (ctr > 0)
                System.out.println("");
            
            x = num1.nextInt();
            z = x;
		 	 
            for(int a = 0; a < x; a++)
            {
                listnames.add(num1.next());
		listnumbers.add(0);
            }
		 	 
            while(z != -1)
            {
		y = num1.nextLine();
                split = y.split(" ");
	
                for(int b = 0; b < x; b++)
                {
		    if(split[0].equals(listnames.get(b)))
		    {
		    	value = listnumbers.get(b) - Integer.parseInt(split[1]);
		    	listnumbers.set(b , value);
		    	
		    	count = Integer.parseInt(split[2]);
                        
                        if(count != 0)
		    	   gifts = Integer.parseInt(split[1]) / count;
		    	
		    	if(gifts * count != Integer.parseInt(split[1]))
		    	{
		    		extra = Integer.parseInt(split[1]) - (gifts*count);
		    		value = listnumbers.get(b) + extra;
		    		listnumbers.set(b , value);
		    	}
		    	
		    	for(int c = 0; c < count; c++) // subnames
		    	{
                            for(int d = 0; d < x; d++)
                            {
		    		if(split[c + 3].equals(listnames.get(d)))
		    		{
                                    value = listnumbers.get(d) + gifts;
                                    listnumbers.set(d , value);
		    			
		    		}
                            }
		 	}
                    }
		}
		 	    
		z--;
            }
            
	    for(int e = 0; e < x; e++)
	    {
	        System.out.println(listnames.get(e) + " " + listnumbers.get(e));
	    }
	    
	    for(int f = listnames.size() - 1; f > -1; f--)
	    {
	    	listnames.remove(f);
	    	listnumbers.remove(f);
	    }
            
            ctr++;
        }
    }
}