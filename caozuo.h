#ifndef CAOZUO_H
#define CAOZUO_H
#include<QThread>

class caozuo : public QThread
{
	Q_OBJECT
public:
	caozuo();
	bool getfinsh();
	~caozuo();
protected:
  void run();
private:
  bool finsh=true;
};

#endif // CAOZUO_H
