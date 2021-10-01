package arrays;

public class bubble_sort {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = {99, 55, 11, 33, 47};
		bubble(arr);
	}
	public static void bubble(int[] arr) {
		for(int counter=0; counter<=arr.length-1; counter++) {
			for(int j=0; j < arr.length-1-counter; j++) {
				if(arr[j]>arr[j+1]) {
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		for(int val: arr) {
			System.out.println(val);
		}
	}

}
