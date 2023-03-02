#include <stdio.h>
int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int max_of_Four(int a, int b, int c, int d){
    int left_Max,right_Max,max_Of_Four;
    left_Max = max(a,b);
    right_Max = max(c,d);
    max_Of_Four = max(left_Max,right_Max);
    return max_Of_Four;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_Four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}