package arrays;

public class binary_search {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] arr = {1,2,3,4,5,6,7,8,9,10}; //binary search works on sorted array
		System.out.println(binary(arr , 9));
	}
	public static int binary(int[] arr , int k) {
		
		int s = arr[0];
		int h = arr[arr.length-1];
		
		while(s<=h) {
			int mid = (s+h)/2;
			if(arr[mid] < k) {
				s = mid+1;
			}
			else if(arr[mid] > k) {
				h = mid-1;
			}
			else {
				return mid;
			}
		}
		return -1;
	}

}
