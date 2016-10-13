#ifndef GPS_H
#define GPS_H

#include <QtCore>
#include <QGeoSatelliteInfoSource>
#include <QGeoPositionInfoSource>
#include <QGeoCoordinate>

class Gps: public QObject {
    Q_OBJECT
public:
    Gps(QObject *parent);
public slots:
    bool initGps();
signals:
private slots:
    void positionUpdated(QGeoPositionInfo info);
    void error(QGeoPositionInfoSource::Error err);
private:
    QGeoPositionInfoSource *source;
};

#endif // GPS_H
