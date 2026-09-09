
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

#define ll long long 
// Định nghĩa macro min, max cho số nguyên
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int a1,a2,a3,a4;
    scanf("%d%d%d%d",&a1,&a2,&a3,&a4);
    int b1,b2,b3,b4;
    scanf("%d%d%d%d",&b1,&b2,&b3,&b4);
    double minX = min(a1,b1);
    double maxX= max(a3,b3);
    int width= maxX - minX;
    double minY= min(a2,b2);
    double maxY= max(a4,b4);
    int height= maxY - minY;
    if(width < height){
        printf("%d", height*height);
    }
    else{
        printf("%d", width*width);
    }
    return 0;
}