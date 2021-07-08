#include "Help.h"
#include "SceneMgr.h"
#include "DxLib.h"
#include "Input.h"

static int mImageHandle; //画像ハンドル格納用変数

//初期化
void Help_Initialize() {
	mImageHandle = LoadGraph("images/Help.png");//画像のロード
}

//終了処理
void Help_Finalize() {
	DeleteGraph(mImageHandle);//画像の解放
}

//更新
void Help_Update() {
	if (iKeyFlg == PAD_INPUT_B || CheckHitKey(KEY_INPUT_ESCAPE) != 0) {//Escキーが押されていたら
		SceneMgr_ChangeScene(eScene_Title);//シーンをメニューに変更
	}
}

//描画
void Help_Draw() {
	DrawGraph(0, 0, mImageHandle, FALSE);
}