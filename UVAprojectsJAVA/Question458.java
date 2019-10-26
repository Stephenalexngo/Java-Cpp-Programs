import java.util.*;

public class Question458
{
    
    public static void main (String[] args)
    {
        String x;
        char word;
        
        Scanner num1 = new Scanner(System.in);
        
        while(num1.hasNext())
        {
            x = num1.nextLine(); 
            
            for(int a = 0; a < x.length(); a++)
            {
                word = (char)((int)x.charAt(a) - 7);
                System.out.print(word);
            }
            
            System.out.println("");
        }        
    }
}

// Internet Solution
/*
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
 
public class Main 
{
    
    public static void main(String[] args) throws IOException 
    {
        
        DataInputStream in = new DataInputStream(System.in);
        DataOutputStream output = new DataOutputStream(System.out);
        
        int C;
        while ((C =in.read()) !=-1)
            output.write((Character.isSpace((char)C) ? C : (C-7)));
    }
}
*/