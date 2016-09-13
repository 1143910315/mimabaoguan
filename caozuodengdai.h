#ifndef CAOZUODENGDAI_H
#define CAOZUODENGDAI_H

#include<QSplashScreen>
class caozuodengdai
{
public:
	caozuodengdai();
	bool create(QString pixmap);
private:
	QSplashScreen *spl;
};

#endif // CAOZUODENGDAI_H
