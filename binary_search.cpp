#include<iostream>
using namespace std;

int binary_search(int *nums,int target)
{
	int numsize;
	int low=0;
	int high=numsize-1;
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(nums[mid]==target)
		{
			return mid;
		}
		else if(nums[mid]<target)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
		return -1;
	}
}
int main()
{
	int n,i,ser;
	cout << "Enter the size of array:";
    cin >> n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout << "Enter the array elements:";
        cin >> a[i];
	}
	cout << "Enter the element which you want to search:";
    cin >> ser;
	cout << "Element was found" << binary_search(&n,ser);
	return 0;
}