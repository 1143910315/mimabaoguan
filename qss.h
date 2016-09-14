#ifndef QSS_H
#define QSS_H
#include<QSplashScreen>
#include<QMouseEvent>
class QSS : public QSplashScreen
{
public:
	QSS();
	~QSS();
protected:
	void mousePressEvent(QMouseEvent *e);
};

#endif // QSS_H
