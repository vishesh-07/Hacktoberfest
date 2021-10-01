package arrays;

public class selection_sort {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = {88, 11, 44, 99, 55};
		selection(arr);

	}
	public static void selection(int[] arr) {
		for(int counter=0; counter < arr.length-1; counter++) {
			int min= counter;
			for(int j = counter+1; j <= arr.length-1; j++) {
				if(arr[j] < arr[min]) {
					min = j;
				}
			}
			int temp = arr[min];
			arr[min] = arr[counter];
			arr[counter] = temp;
		}
		for(int val : arr) {
			System.out.println(val);
		}
	}

}
