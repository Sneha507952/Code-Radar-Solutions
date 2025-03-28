int bubbleSort(char arr[],int n ){
    char temp;
    for(int i=0;i<n;i++){
        int swapped=0;
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1=temp];
            swapped=1;
        }

    }
    if(swapped==0) break;
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}