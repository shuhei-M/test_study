// StaticLib.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"
#include "framework.h"
#include "../include/StaticLib.h"


bool is_leap_year(int year)
{
	// 四の倍数ではない場合はfalse
	if (year % 4 != 0) return false;

	// 百の倍数ではあるが、四百の倍数ではない場合はfalse
	if (year % 100 == 0 && year % 400 != 0) return false;

	// それ以外はtrue
	return true;
}
