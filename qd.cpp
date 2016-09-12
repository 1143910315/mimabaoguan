#include "qd.h"
#include<QPixmap>
#include<exception>
#include <QThread>
#include<QTimer>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>
void qd::ontimeout(){

}

qd::qd()
{
	//splsh->hide();
}
bool qd::create(QString pixmap)
{
	splsh=new QSplashScreen;
	splsh->setPixmap(QPixmap(pixmap));
	splsh->show();
	splsh->showMessage(QObject::tr("加载中..."),Qt::AlignBottom|Qt::AlignCenter,Qt::white);
	QThread t;
	QTimer time;
	connect(&time,SIGNAL(timeout()),this,SLOT(ontimeout()));
	time.start(1000);
	this->moveToThread(&t);
	t.start();
	return true;
}

bool qd::connection()
{
	QSqlDatabase db1=QSqlDatabase::addDatabase("QODBC","connection1");
	db1.setHostName("localhost");
	QString dsn=QString::fromLocal8Bit("SQL");
	db1.setDatabaseName(dsn);
	db1.setUserName("Qt");
	db1.setPassword("QWas12345");
	if(!db1.open()){
		return false;
	}else{
		QSqlQuery que(db1);
		if
				(que.exec("insert into [website] ([homepage],[explain],[loginpage]) values ('0','6','777')")){

			return false;
		}
		QString a=que.lastError().text();
		a.arg('a');
	}
	return true;
}



