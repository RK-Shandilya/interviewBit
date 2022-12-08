int Solution::repeatedNumber(const vector<int> &A) {
    int maxi=INT_MIN;
    for(int i=0;i<A.size();i++){
        if(A[i]>maxi){
            maxi=A[i];
        }
    }
    int n=maxi+1;
    vector<int>arr(n,0);
    for(int i=0;i<A.size();i++){
        arr[A[i]]++;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>1){
            return i;
        }
    }
    return -1;
}
