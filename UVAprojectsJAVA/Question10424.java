import java.util.*;

public class Question10424
{
    
    public static void main(String[] args)
    {
        String x,y;
        float valuex,valuey,tempx,tempy,tempxmod,tempymod;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            x = num1.nextLine();
            y = num1.nextLine();
            valuex = 0;
            valuey = 0;
                                
            for(int a = 0; a < x.length(); a++)
            {
                if(x.charAt(a) > 64 && x.charAt(a) < 91)
                {
                    valuex = valuex + ((int)(x.charAt(a)) - 64);
                }
                else if(x.charAt(a) > 96 && x.charAt(a) < 123)
                {
                    valuex = valuex + ((int)(x.charAt(a)) - 96);
                }
            }
            
            for(int b = 0; b < y.length(); b++)
            {
                if(y.charAt(b) > 64 && y.charAt(b) < 91)
                {
                    valuey = valuey + ((int)(y.charAt(b)) - 64);
                }
                else if(y.charAt(b) > 96 && y.charAt(b) < 123)
                {
                    valuey = valuey + ((int)(y.charAt(b)) - 96);
                }
            }
            
            tempx = valuex;
            tempy = valuey;
            valuex = 0;
            valuey = 0;

            while(tempx != 0)
            {
                tempxmod = tempx % 10;
                valuex = valuex + tempxmod;
                tempx = (tempx-tempxmod)/10;
                
                if(valuex > 9 && tempx == 0)
                {
                    tempx = valuex;
                    valuex = 0;
                }
            }
            
            while(tempy != 0)
            {
                tempymod = tempy % 10;
                valuey = valuey + tempymod;
                tempy = (tempy-tempymod)/10;
                
                if(valuey > 9 && tempy == 0)
                {
                    tempy = valuey;
                    valuey = 0;
                }
            }
            
            if(valuey < valuex)
            {
                System.out.printf("%.2f", (valuey/valuex)*100);
                System.out.println(" %");
            }
            else
            {
                System.out.printf("%.2f", (valuex/valuey)*100);
                System.out.println(" %");
            }
        }
    }
}