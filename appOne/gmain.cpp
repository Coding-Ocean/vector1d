#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        //�P�����x�N�g��
        float vx = -3;
        //�N���A���č��W��`��
        clear(200);
        mathAxis(5.1f);
        //�x�N�g����`��
        strokeWeight(10);
        mathArrow(0, 0, vx, 0);
    }
}
