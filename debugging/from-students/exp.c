// File: exp.c
// Created by hengxin on 17-11-17.
// Debugging OJ Homework: exp(x)

#include <stdio.h>
int main(){
    double x = 0;
    long long jiecheng[100]={0};
    double mi[100]={0};
    for(int i = 0 ;i<100;i++){
        jiecheng[i] = 1;
        for(int j = 1;j<=i+1;j++){
            jiecheng[i] = jiecheng[i]*j;
        }
    }
    while(scanf("%lf",&x)!=EOF){
        mi[0] = x;
        for(int i = 1;i<100;i++){
            mi[i] = x*mi[i-1];
        }
        double a[100]={0};
        a[0] = 1 + x;
        for(int i = 1;i<100;i++){
            a[i] = a[i-1] + mi[i]/jiecheng[i];
        }
        printf("%.3lf\n",a[99]);
        for(int i = 0;i<100;i++){
            if(i%10!=9){
                printf("%.3lf ",a[i]);
            }
            if(i%10==9){
                printf("%.3lf\n",a[i]);
            }
        }
    }

}


