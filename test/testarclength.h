#pragma once

#include <QObject>

class TestArcLength : public QObject
{
    Q_OBJECT
public:
    explicit TestArcLength(QObject *parent = 0);

private slots:
    //Verify arcLength(0,maxT) equals totalLength() for all non-looping splines
    void testArcLengthTotalLength_data(void);
    void testArcLengthTotalLength(void);

    //For some known arc length values, verify that each spline gives the correct result
    void testKnownArcLength_data(void);
    void testKnownArcLength(void);
};
