#include "Help.h"
#include "SceneMgr.h"
#include "DxLib.h"
#include "Input.h"

static int mImageHandle; //�摜�n���h���i�[�p�ϐ�

//������
void Help_Initialize() {
	mImageHandle = LoadGraph("images/Help.png");//�摜�̃��[�h
}

//�I������
void Help_Finalize() {
	DeleteGraph(mImageHandle);//�摜�̉��
}

//�X�V
void Help_Update() {
	if (iKeyFlg == PAD_INPUT_B || CheckHitKey(KEY_INPUT_ESCAPE) != 0) {//Esc�L�[��������Ă�����
		SceneMgr_ChangeScene(eScene_Title);//�V�[�������j���[�ɕύX
	}
}

//�`��
void Help_Draw() {
	DrawGraph(0, 0, mImageHandle, FALSE);
}