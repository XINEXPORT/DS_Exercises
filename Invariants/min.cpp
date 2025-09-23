double min(double nums[], int len){
    assert(len > 0); //error
    double result = nums[0];

    for (int i = 0; i < len; i++) {
        if(nums[i] < result){
            result = nums[i];
        }
        return result;
    }
}

//Invariant:
//start of kth iteration of the loop,
//result is the smallest of elemts
//0...(k-1) (inclusive)
//i.e.,for i in [0,...,k), result < nums[i]
//on last loop test, i = len