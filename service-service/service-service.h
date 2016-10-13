#ifndef RUNNERSERVICE_H
#define RUNNERSERVICE_H

#include <QtCore>
#include <QtRemoteObjects>
#include "service.h"
#include "gps.h"


class ServiceService: public QObject {
    Q_OBJECT
public:
    ServiceService(QObject *parent=0);
public slots:
signals:
private slots:
private:
    Service             *service;
    QRemoteObjectHost   *srcNode;
    Gps                 *gps;
};

#endif // RUNNERSERVICE_H
