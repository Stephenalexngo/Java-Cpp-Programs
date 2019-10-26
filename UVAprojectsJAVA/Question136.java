public class Question136
{
    
    public static void main(String[] args)
    {
        
        int x = 0, y = 859963390, z;
        
        do
        {
            z = y;
            while(z > 1)
            {
                if(z % 5 == 0)
                    z /= 5;             
                else if(z % 3 == 0)
                    z /= 3;
                else if(z % 2 == 0)
                    z /= 2;
                else
                    z = 0;
            }
            if(z == 1)
            {
                x++;
                y++;
            }
            else
                y++;    
            
        }while(x != 1);
        
        System.out.println("The 1500'th ugly number is " + (y - 1) + ".");
    }
    
}

