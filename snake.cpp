// snake.cpp: 定义控制台应用程序的入口点。

#include "stdafx.h"

int main()
{
	GameUi* Ui = new GameUi();
	Ui->start();
	delete Ui;
    return 0;
}