#include "screen.h"
#include<QDebug>
#include<QTime>
void Screen::ontimeout()
{
qDebug() << "668";
}

Screen::Screen()
{
	QTime ti;
	ti.start();
	//splsh=new QSplashScreen;
	//splsh->setPixmap(QPixmap("E:\\QQ图片20160812121902.jpg"));
	//splsh->show();
	//splsh->showMessage(QObject::tr("加载中..."),Qt::AlignBottom|Qt::AlignCenter,Qt::white);
	int jishi=ti.elapsed();
	//qDebug() << "666";
	//connect(&time,SIGNAL(timeout()),this,SLOT(ontimeout()));
	//time.start(1000);
	//this->moveToThread(&th);
	//th.start();
	//qDebug() << "667";
}

//Screen::~Screen()
//{
//	time.stop();
//	th.exit();
//}
