
void fibonacciSeries(int n){
    int prev_term=1;
    int next_term=0;
    for(int i=1;i<=n;i++){
        if(i>2){
            int curr=prev_term+next_term;
            prev_term=next_term;
            next_term=curr;
            printf("%d",curr);
        }
        else if(i==1){
            printf("%d",next_term);
        }
        else{
            printf("%d",prev_term);
        }
    }

}