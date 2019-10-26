import java.util.*;

public class Question11547
{
    
    public static void main(String[] args)
    {
        
        int x,y,z,c,f;
        
        Scanner num1 = new Scanner(System.in);

        while(num1.hasNext())
        {
            x = num1.nextInt();
            
            for(int a = 0; a < x; a++)
            {
                y = num1.nextInt();
                z = ((((((y * 567) / 9) + 7492) * 235) / 47) - 498);

                if(z < 10 && z > -10)
                    System.out.println(z);
                else
                {
                    z = z % 100;
                    c = z % 10;
                    f = (z - c) / 10;
                    
                    System.out.println(Math.abs(f));
                }
            }
        }
    }
}

