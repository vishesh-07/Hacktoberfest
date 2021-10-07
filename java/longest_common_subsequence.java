import java.util.Scanner;

class longestCommonSubsequance{
    private String plain;
    private String sub;
    private int [][]dp;

    public longestCommonSubsequance(String string1,String string2)
    {
            this.plain=string1;
            this.sub=string2;
            dp=new int[plain.length()+1][sub.length()+1];
    }

    public int DP()
    {   
        // String ans="";
        int len1=plain.length();
        int len2=sub.length();
        // System.out.println(len1+""+len2);
         

        for(int i=0;i<=len1;i++)
        {
            for(int j=0;j<=len2;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                    // System.out.print("1 ");
                }
                else if(plain.charAt(i-1)==sub.charAt(j-1))
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }

        for(int i=0;i<=len1;i++)
        {
            for(int j=0;j<=len2;j++)
            {
                System.out.print(dp[i][j]+ " ");
            }
            System.out.println("\n");
        }

        return dp[len1][len2];
    }

     public void  printlcs()
     {
            int index=dp[plain.length()][sub.length()];

            char lcs[]=new char[index+1];
            lcs[index]='\u0000';

            int i = plain.length(), j = sub.length();
   while (i > 0 && j > 0)
   {
    
      if (plain.charAt(i-1) == sub.charAt(j-1))
      {
          lcs[index-1] = plain.charAt(i-1); 
          i--; j--; index--;     
      }
      else if (dp[i-1][j] > dp[i][j-1])
         i--;
      else
         j--;
    }


    System.out.println("\nLCS is :");

    for(int k=0;k<=dp[plain.length()][sub.length()];k++)
    {
        System.out.print(lcs[k]);
    }
    }


}



public class lcs{

    public static void main(String[] args) 
    {
        Scanner input=new Scanner(System.in);

        System.out.println("enter first  string");
        String str1=input.next();
        System.out.println("enter second string");
        String str2=input.next();

        longestCommonSubsequance obj=new longestCommonSubsequance(str1, str2);

        int ans=obj.DP();

        System.out.println("length of Longest Common Subsequance is :"+ans);
        obj.printlcs();


        input.close();
    }
}