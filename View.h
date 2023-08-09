#pragma once
#include "Global.h"


void SetColor(int backgound_color, int text_color); //Màu nền và ký tự
void DisableSelection(); //Tắt bôi đen
void SetWindowSize(SHORT width, SHORT height);
void DisableResizeWindow(); //Tắt chỉnh cửa sổ
void DisableCtrButton(bool Close, bool Min, bool Max);