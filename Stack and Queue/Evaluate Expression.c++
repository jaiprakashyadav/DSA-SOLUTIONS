int Solution::evalRPN(vector <string> &A){
    stack <string> S; //creating stack of strings
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=="+") //if addition
        {
            int a = stoi(S.top());S.pop();//converting first into integer and then adding
            int b = stoi(S.top());S.pop();
            int c = a+b;
            string d = to_string(c);
            S.push(d);//pushing result into stack
        }
        else if(A[i]=="-")
        {
            int a = stoi(S.top());S.pop();
            int b = stoi(S.top());S.pop();
            int c = b-a;
            string d = to_string(c);
            S.push(d);
        }
        else if(A[i]=="*")
        {
            int a = stoi(S.top());S.pop();
            int b = stoi(S.top());S.pop();
            int c = a*b;
            string d = to_string(c);
            S.push(d);
        }
        else if(A[i]=="/")
        {
            int a = stoi(S.top());S.pop();
            int b = stoi(S.top());S.pop();
            int c = b/a;
            string d = to_string(c);
            S.push(d);
        }
        else
        {
            S.push(A[i]); //pushing the element if it is not operator
        }
    }
    string result=S.top(); //taking result from top of the stack
    int r=stoi(result);//converting result into integer
    return r; //returning the result
}
