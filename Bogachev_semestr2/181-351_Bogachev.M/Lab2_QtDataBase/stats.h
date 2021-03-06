#pragma once

#include <QWidget>
#include <QTcpSocket>
#include <QMessageBox>
#include <QDebug>
#include "ui_stats.h"
#include "db.h"
#include "usdb.h"

class stats : public QWidget
{
	Q_OBJECT

public:
	stats(QWidget *parent = Q_NULLPTR);
	~stats();
	void set_login(QString a);
	void set_password(QString a);
	//QTcpSocket* socket;
	//QByteArray Data;
	void set_socket(QTcpSocket * a);
	void set_acl(QString a);

public slots:
	//void sockReady();
	//void sockDisc();
	void read();
	void user_setup();

private slots:
	void on_viewb_clicked();
	void on_editb_clicked();
	void conact();
	//void on_ser_clicked();

private:
	Ui::stats ui;
	db db_win;
	usdb usdb_win;
	QTcpSocket * socket;
	QByteArray data;
	QString lvl;
};
