import java.util.Scanner;

public class Question10550
{
   
    public static void main(String[] args)
    {
        
        double w,x,y,z,valuex,valuey,valuez;
        
        Scanner num1 = new Scanner(System.in);

        do
        {
            w = num1.nextInt();
            x = num1.nextInt();
            y = num1.nextInt();
            z = num1.nextInt();
            
            if(x != 0 || y != 0 || w != 0 || z != 0)
            {
                if(x - w >= 0)
                    x = x - w;
                else
                    x = 40 + x - w;
                
                if(y - w >= 0)
                    y = y - w;
                else
                    y = 40 + y - w;
                
                if(z - w >= 0)
                    z = z - w;
                else
                    z = 40 + z - w;
                
                w = 0;
                if(w == x)
                    valuex = 0;
                else
                    valuex = ((40 - x)/40) * 360;
                
                if(x == y)
                    valuey = 0;
                else if(y < x)
                    valuey = ((40 - (Math.abs(y - x)))/40) * 360;
                else
                    valuey = ((Math.abs(y - x))/40) * 360;
                
                if(y == z)
                    valuez = 0;
                else if(z < y)
                    valuez = ((Math.abs(z - y))/40) * 360;
                else
                    valuez = ((Math.abs(40 - (z - y)))/40) * 360;   
                
                System.out.println((int)(1080 + valuex + valuey + valuez));
                
                w = 1;
                x = 1;
                y = 1;
                z = 1;
            }
            
            
        }while(x != 0 || y != 0 || w != 0 || z != 0);
    }
}
