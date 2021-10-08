public class MaxNumInArray

{

    public static void main(String[] args) {

        int n=5 , max;

     //   int a[] = new int[n];

     int[] a={100,53,20,300,46};

        max = a[0];

       for(int i = 0; i < n; i++)

        {

          if(max < a[i])

           {

              max = a[i];

           }

      }

      System.out.println("Maximum value in the array is:"+max);

  }

}

//here n is the length to be taken of array.
