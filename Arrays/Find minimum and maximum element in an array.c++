pair<long long, long long> getMinMax(long long arr[], int n) {
    
    pair <long long , long long > p;
    p.first = arr[0];
    p.second = arr[0];
    for(int i =1 ; i<n;i++){
        if(arr[i]>p.second){
            p.second=arr[i];
        }
        if(arr[i]<p.first){
            p.first=arr[i];
        }
    }
    return p;
    
}
