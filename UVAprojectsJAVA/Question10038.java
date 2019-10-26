import java.util.*;

public class Question10038
{
    
    public static void main (String[] args)
    {
        int value,ctrl = 0,x;
        boolean isequal = false;
        ArrayList<Integer> absdiff = new ArrayList<>();   
        ArrayList<Integer> numlist = new ArrayList<>();
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            x = num1.nextInt();
            
            for(int a = 0; a < x; a++)
            {
                numlist.add(num1.nextInt());            
            }
            
            for(int b = 0; b < x - 1 && isequal == false; b++)
            {
                value = Math.abs(numlist.get(b) - numlist.get(b+1));

                if(value < x)
                {
                    if(ctrl > 0)
                    {
                        for(int c = 0; c < absdiff.size() && isequal == false; c++)
                        {
                            if(absdiff.get(c) == value)
                                isequal = true;    
                        }
                
                            if(isequal == false)
                                absdiff.add(value);
                    }
                    else
                    {
                        ctrl = 1;
                        absdiff.add(value);
                    }
                }
                else
                    isequal = true;
            }
        
            if(isequal == false)
                System.out.println("Jolly");
            else
                System.out.println("Not jolly");
        
            for(int a = absdiff.size() - 1; a > -1; a--)
            {
                absdiff.remove(a);
            }
            
            for(int d = numlist.size() - 1; d > -1; d--)
            {
                numlist.remove(d);
            }
            
            isequal = false;
        }  
    }
}