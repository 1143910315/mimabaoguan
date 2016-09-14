#include "caozuo.h"
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>

caozuo::caozuo()
{

}

bool caozuo::getfinsh()
{
	return finsh;
}

caozuo::~caozuo()
{

}

void caozuo::run()
{
	QSqlDatabase db1=QSqlDatabase::addDatabase("QODBC","connection1");
	db1.setHostName("localhost");
	db1.setDatabaseName(QString::fromLocal8Bit("SQL"));
	db1.setUserName("Qt");
	db1.setPassword("QWas12345");
	if(!db1.open()){
//		return false;
	}else{
		QSqlQuery que(db1);
		if(que.exec("insert into [website] ([homepage],[explain],[loginpage]) values ('0','6','777')")){
//			return false;
		}
		QString a=que.lastError().text();
		a.arg('a');
	}
//	return true;
}
