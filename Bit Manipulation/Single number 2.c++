int Solution::singleNumber(const vector<int> &A) {
  int cnt=0,ans=0;
  for(int i=0; i<32; i++){
      cnt=0;
      for(int j=0; j<A.size(); j++){
          if((A[j]>>i)&1)
          cnt++;
      }
      if(cnt%3!=0){
          ans+=pow(2,i);
      }
  }
  return ans;
    
}
