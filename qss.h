#ifndef QSS_H
#define QSS_H
#include<QSplashScreen>

class QSS : public QSplashScreen
{
public:
	QSS();
protected:
	void mousePressEvent(QMouseEvent *);
};

#endif // QSS_H
