import java.util.*;

public class Question541 
{
    
    public static void main(String[] args)
    {
        
        Scanner input = new Scanner(System.in);
        int rowcol;
        
        do
        {
            rowcol = input.nextInt();
            
            if(rowcol != 0)
            {
               int[][] matrix = new int[rowcol][rowcol];
               int total;
               ArrayList<Integer> listofcol = new ArrayList<>();
               ArrayList<Integer> listofrow = new ArrayList<>();
               
               for(int x = 0; x < rowcol; x++)
               {
                   for(int y = 0; y < rowcol; y++)
                   {
                       matrix[x][y] = input.nextInt();
                   }
               }
               
               for(int z = 0; z < rowcol; z++)
               {
                   total = 0;
                   
                   for(int a = 0; a < rowcol; a++)
                   {
                       total += matrix[z][a];
                   }
                   listofrow.add(total);
               }
               
               for(int z = 0; z < rowcol; z++)
               {
                   total = 0;
                   
                   for(int a = 0; a < rowcol; a++)
                   {
                       total += matrix[a][z];
                   }
                   listofcol.add(total);
               }
               
               int oddnum = 0;
               int Ocolnumber = 0;
               for(int x = 0; x < listofcol.size(); x++)
               {
                   if(listofcol.get(x)%2==1)
                   {
                       oddnum++;
                       Ocolnumber = x+1; 
                   }                       
               }
               
               int evennum = 0;
               int Erownumber = 0;
               for(int x = 0; x < listofrow.size(); x++)
               {
                   if(listofrow.get(x)%2==1)
                   {
                       evennum++;
                       Erownumber = x+1; 
                   }                       
               }
               
               if(Ocolnumber == 0)
                   System.out.println("OK");
               else if(oddnum == 1)
                   System.out.printf("Change bit (%d,%d)\n", Erownumber,Ocolnumber);
               else
                   System.out.println("Corrupt"); 
            }
            
        }while(rowcol != 0);
    } 
}
