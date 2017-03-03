#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtGuiApplication3.h"

class QtGuiApplication3 : public QWidget
{
	Q_OBJECT

public:
	QtGuiApplication3(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiApplication3Class ui;
};
