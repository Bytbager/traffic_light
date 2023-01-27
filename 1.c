#include "func.h"

int main(){
    int count=0,green_time=0,red_time=0;
    printf("Сколько секунд горит зелёный свет? (Введите количество секунд):");
    scanf("%d",&green_time);
    printf("Сколько секунд горит красный свет? (Введите количество секунд):");
    scanf("%d",&red_time);
    printf("Сколько циклов длится светофор? (Введите количество циклов):");
    scanf("%d",&count);
    traffic_light(count,green_time,red_time);
    
    return 0;
}