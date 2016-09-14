#include "mainwindow.h"
#include <QApplication>
#include<QtTest/QTest>
#include<qd.h>
#include<screen.h>
#include<caozuodengdai.h>
#include<qss.h>
#include<QPixmap>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPixmap pixmap("E:\\QQ图片20160812121902.jpg");
	QSS *splash=new QSS;
    splash->setPixmap(pixmap);
    splash->show();
	splash->showMessage(QObject::tr("加载中..."),Qt::AlignBottom|Qt::AlignCenter,Qt::white);
	for(int i=0;i<1000;i++){
		if(i/10%3==0){
			splash->showMessage(QObject::tr("加载中.  "),Qt::AlignBottom|Qt::AlignCenter,Qt::white);
		}
		if(i/10%3==1){
			splash->showMessage(QObject::tr("加载中.. "),Qt::AlignBottom|Qt::AlignCenter,Qt::white);
		}
		if(i/10%3==2){
			splash->showMessage(QObject::tr("加载中..."),Qt::AlignBottom|Qt::AlignCenter,Qt::white);
		}
		QTest::qSleep(10);
		a.processEvents();
	}
	MainWindow w;
	w.show();
	splash->finish(&w);     //当主窗口启动后，启动画面隐藏
    delete splash;
	//caozuodengdai *dd=new caozuodengdai();
	//dd->create("E:\\QQ图片20160812121902.jpg");
	//Screen b;
/*
    QTextCodec :: setCodecForTr( QTextCodec :: codecForName( "GB18030" ));
	QApplication app(argc,argv);

    QPixmap pixmap(":/images/logo.gif");      //绑定一个图片
    QSplashScreen *splash=new QSplashScreen;
    splash.setPixmap(pixmap);
    splash.show();                            //显示启动画面
    app.processEvents();                //加载其他的模块

    mainWindow dialog;
    dialog.show();

    splash.finish(&dialog);     //当主窗口启动后，启动画面隐藏
    delete splash;

    return app.exec();
*/
	//qd *q=new qd();
	//if(q->connection()){
		//MainWindow w;
		//w.show();
	//}
	//q->create("E:\\QQ图片20160812121902.jpg");
	//QTest::qSleep(10000);
	//MainWindow w;
	//w.show();
	//delete q;
	return a.exec();
}
