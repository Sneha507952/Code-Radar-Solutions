int isPrime(num){
    for(int i=2;i<num;i++){
        if(num%i!=0){
            return 1;
        }
    }
    return 0;
    
}