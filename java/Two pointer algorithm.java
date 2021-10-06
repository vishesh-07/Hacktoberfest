//two sum 

public class Program
{
    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5};
        int value = 3;
        toSum(arr,value);
    }
    
    public static void toSum(int arr[],int x){
        int n = arr.length;
        for(int i = 0;i<n-2;i++){
            if((arr[i]+arr[i+1]==x)){
                System.out.println("["+i+","+(i+1)+"]");
            }
        }
    }
}
