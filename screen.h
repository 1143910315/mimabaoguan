#ifndef SCREEN_H
#define SCREEN_H
#include<QThread>
#include<QTimer>
#include<mainwindow.h>
class Screen:public QObject
{

	Q_OBJECT private slots:
	void ontimeout();
public:
	Screen();
	//~Screen();
private:
	MainWindow w;
	QThread th;
	QTimer time;
};

#endif // SCREEN_H
