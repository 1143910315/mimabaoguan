#include "mainwindow.h"
#include <QApplication>
#include<QtTest/QTest>
#include<qd.h>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qd *q=new qd();
	if(q->connection()){
		MainWindow w;
		w.show();
	}
	//q->create("E:\\QQ图片20160812121902.jpg");
	//QTest::qSleep(10000);
	//MainWindow w;
	//w.show();
	//delete q;
	return a.exec();
}
