#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        //１次元ベクトル
        float vx = -3;
        //クリアして座標を描画
        clear(200);
        mathAxis(5.1f);
        //ベクトルを描画
        strokeWeight(10);
        mathArrow(0, 0, vx, 0);
    }
}
