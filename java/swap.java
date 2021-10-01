package arrays;

public class swap {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int[] arr = {10, 20, 30, 40, 50}; //declare array
		System.out.println(arr[0] + " " + arr[1]); //print 0 and 1 elements
		Swap(arr , 0, 1); // call swap function

	}
	public static void Swap(int[] arr, int i , int j) {
		int temp = arr[i]; //swapping process
		arr[i] = arr[j];
		arr[j] = temp;
		System.out.println(arr[i] + " " + arr[j]); //print after swap
	}

}
