unsigned int Solution::reverse(unsigned int A) {
    unsigned int B = 0 ;
    
    for(int i = 31 ; i>=0;i--){
        B+= pow(2,i) * (A&1);
        A=A>>1;
    }
    return B;
}
