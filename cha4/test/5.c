#include<stdio.h>
#define BIT_TRANS_BYTE 8
#define MINUTE_TRANS_SECOND 60

int main(){

    float speed,size;
    float file_size_bytes, speed_time;

    printf("请输入你的下载速度  Mb/s\n");
    scanf("%f", &speed);
    printf("请输入你的文件大小  MB\n");
    scanf("%f", &size);

    file_size_bytes = size / BIT_TRANS_BYTE ;
    speed_time = file_size_bytes / MINUTE_TRANS_SECOND;
    printf("At %f megabits per second, a file of %f megabytes\n", size, file_size_bytes);
    printf("downloads in %f seconds\n", speed_time);

    return 0;

}