
#include <stdio.h>
#include <stdint.h>
uint8_t *calculate_time_diff(uint8_t t1[4],uint8_t t2[4], int sign){
    float tt1 = (float)t1[0]+((float)t1[1]/(float)60)+ ((float)t1[2]/(float)3600);
    float tt2 = (float)t2[0]+((float)t2[1]/(float)60)+ ((float)t2[2]/(float)3600);
    static uint8_t diff_time[4];
    diff_time[0] = (uint8_t)(sign*(tt2-tt1));
    float diff_min = (sign*(tt2 - tt1 - (int)(tt2 - tt1)))*60;
    float diff_sec = (diff_min - (int)diff_min)*60;
    float diff_m_sec = (diff_sec - (int)diff_sec)*1000;
    diff_time[1]  = (uint8_t)diff_min;
    diff_time[2]  = (uint8_t)diff_sec+(uint8_t)(diff_m_sec>500?1:0);


    // diff_time[0] = (uint8_t)()
    printf(" \nleast time difference HH:MM:SS - %d:%d:%d",  diff_time[0], diff_time[1], diff_time[2]);
   // printf(" \n sign %d  %f %f %d %f %f %d %d %d", sign,tt1, tt2, diff_time[0], diff_min, diff_sec, diff_time[0], diff_time[1], diff_time[2]);
    return diff_time;
    
}
int main()
{
    int a =  0x091E3000; 
    int b =  0x0C2D1E00;
    int sign = (b-a)>0?1:-1;
    /// byte[0] - hour, byte[1] - minutes, byte[2] - sec,byte[3] - ms
    uint8_t byte1[4] = {((a>>24) &0xff), ((a>>16) &0xff), ((a>>8) &0xff), ((a) &0xff)};
    uint8_t byte2[4] = {((b>>24) &0xff), ((b>>16) &0xff), ((b>>8) &0xff), ((b) &0xff)};
    // for(int k = 0;k<4;k++)printf(" %x", byte1[k]);
    // printf("\n");
    // for(int k = 0;k<4;k++)printf(" %x", byte2[k]);
    printf("\nTime1 HH:MM:SS - %d:%d:%d",byte1[0],byte1[1],byte1[2]);
    printf("\nTime2 HH:MM:SS - %d:%d:%d",byte2[0],byte2[1],byte2[2]);
    uint8_t *diff_time = calculate_time_diff(byte1, byte2, sign);
    printf("\nOutput Flag - %d",sign); 
    return 0;
}
