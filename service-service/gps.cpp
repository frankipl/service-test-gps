#include "gps.h"

Gps::Gps(QObject *parent):QObject(parent) {

}
bool Gps::initGps() {
    qDebug()<<"qwerty Gps::initGps before source";
    source = QGeoPositionInfoSource::createDefaultSource(this);
    if (!source) {
        qWarning() << "qwerty No satellite data source found";
        return false;
    }
    qDebug()<<"qwerty Gps::initGps after source";
    connect(source,SIGNAL(positionUpdated(QGeoPositionInfo)),this,SLOT(positionUpdated(QGeoPositionInfo)));
    connect(source, SIGNAL(error(QGeoPositionInfoSource::Error)),this, SLOT(error(QGeoPositionInfoSource::Error)));
    qDebug()<<"qwerty Gps::initGps after connect";

 //   source->setPreferredPositioningMethods(QGeoPositionInfoSource::SatellitePositioningMethods);
    source->setUpdateInterval(3000);
    qDebug()<<"qwerty Gps::initGps after interval";

    source->startUpdates();
    qDebug()<<"qwerty Gps::initGps after start";

}
void Gps::positionUpdated(QGeoPositionInfo info) {
    qDebug()<<"qwerty Gps::positionUpdated info:"<<info;
}
void Gps::error(QGeoPositionInfoSource::Error err) {
//    qDebug()<<"qwerty Gps::error err:"<<err;
}
