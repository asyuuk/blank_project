#include<DxLib.h>
#include"Player.h"
#include"NormalEnemy.h"
#include"characters.h"
#include"Bulletshot.h"
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    NormalEnemy NE;
    Bulletshot Bs;
    Player P;
    if (DxLib_Init() == -1)    // �c�w���C�u��������������
    {
        return -1;    // �G���[������������I��
    }
    ChangeWindowMode(TRUE);
   
    SetDrawScreen(DX_SCREEN_BACK);
    Bs.Load();
    P.Loads();
    NE.Load();
    while (ProcessMessage() == 0 && ScreenFlip() == 0 && ClearDrawScreen() == 0 )
    {
        NE.update();
        NE.move();
        NE.Draw();
        
        P.Update();
        P.Move();
        P.Draw();
        Bs.update();
        Bs.move();
        Bs.Draw();
        ScreenFlip();
    }

   

    DxLib_End();        // �c�w���C�u�����g�p�̏I������
    return 0;
}