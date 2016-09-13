#include "caozuodengdai.h"
#include<QPixmap>
caozuodengdai::caozuodengdai()
{

}

bool caozuodengdai::create(QString pixmap)
{
	spl=new QSplashScreen();
	spl->setPixmap(QPixmap(pixmap));
	spl->show();
	spl->showMessage(QObject::tr("加载中..."),Qt::AlignBottom|Qt::AlignCenter,Qt::white);
	return true;
}
