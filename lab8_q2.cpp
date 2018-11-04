//including library
#include<iostream>  
using namespace std;
//we are going to create functions required
//function for largest element of an array
int largest(int arr[],int n){
	int large=arr[0];
	for(int i=0;i<n;i++){
	                    if(arr[i]>large)
	                                   large=arr[i];}
	return large;
}
//function for smallest element of an array
int smallest(int arr[],int n){
	int small=arr[0];
	for(int i=0;i<n;i++){
		          if(arr[i]<small)
		                          small=arr[i];}
	return small;
}
//function to find mode of the elements of the array
int mode(int arr[],int size){
    int maxcount=0;
    for(int i=0;i<size;i++){
                           int count=1;
        for(int j=i+1;j<size;j++){
                                 if(arr[i]==arr[j]){
                                                   count++;}
        }
        if(maxcount<count)
                         maxcount=count;
}
    for(int i=0;i<size;i++){
        int count=1;
        for(int j=i+1;j<size;j++){
                                 if(arr[i]==arr[j]){
                                                   count++;}
        }
        if(maxcount==count){
                           return arr[i];}
    }
}
//function to find mean of elements of an array
float mean(int arr[],int n){
                         int sum=0;
                         float avg;
                         for(int i=0;i<n;i++){
                                             sum+=arr[i];}
                         avg=(float)sum/n;
    return avg;
}
//function to find median of elements of an array
float median(int arr[],int size)          
//function that finds the median of an array after sorting through selection sort
{
    int temp;
    float med;
    for(int i=0;i<size;i++){
                           for(int j=i+1;j<size;j++){
                                                    if(arr[j]<arr[i]){
                                                                     temp=arr[j];
                                                                     arr[j]=arr[i];
                                                                     arr[i]=temp;}
                                                    }
                           }
    if(size%2==0)
                med=(arr[size/2]+arr[(size/2)-1])*0.5;
    else
        med=arr[(size-1)/2];
    return med;
}
//declaring main function
int main(){
	//declaring variables
	int arr[20],n;
	//asks user for the size of the array required
	cout<<"Enter the size of the array you want: "<<"\n";
	cin>>n;
        //asks user to enter elements of the array
        for(int i=0;i<n;i++){
		            cout<<"Enter elements for the array: "<<"\n";
		            cin>>arr[i];
        }
	//displays the output to the user
	cout<<"the largest element is: "<<largest(arr,n)<<endl;
	cout<<"the smallest element is: "<<smallest(arr,n)<<endl;
	cout<<"Mode of the elements is: "<<mode(arr,n)<<endl;
        cout<<"Mean of the elements is: "<<mean(arr,n)<<endl;
        cout<<"Median of the elements is: "<<median(arr,n)<<endl;
	//closing the program
	return 0;
}

