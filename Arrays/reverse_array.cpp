void rarray(int arr[], int start, int end)
{
	if(start >= end)
		return;

	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;


	rarray(arr, start+1, end-1);
}
