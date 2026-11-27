long mySqrt(long x) {
    if ((x==0)||(x==1)){
        return x;
    }
    long left=0, right=x;
    while (left <=right){
        long mid=(left+right)/2;
        if (mid*mid==x){
            return mid;
        }
        else if(mid*mid<x){
            left=mid+1;
        }
        else if(mid*mid>x){
            right=mid-1;
        }
    }
    return right;
}