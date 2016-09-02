#ifndef QD_H
#define QD_H
#include<QSplashScreen>
#include "mainwindow.h"
class qd :public QObject
{
	Q_OBJECT private slots:
	void ontimeout();
public:
	qd();
	bool create(QString pixmap);
bool connection();
private:

	QSplashScreen *splsh;
	MainWindow w;
};

#endif // QD_H
