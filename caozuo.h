#ifndef CAOZUO_H
#define CAOZUO_H
#include<QThread>

class caozuo : public QThread
{
	Q_OBJECT
public:
	caozuo();
	~caozuo();
protected:
  void run();
};

#endif // CAOZUO_H
