#include "LaserInterceptor.h"



ALaserInterceptor::ALaserInterceptor() {
    this->RayDistance = 0.00f;
    this->RayRadius = 0.00f;
    this->InterceptAngle = 180.00f;
    this->SearchInterval = 0.50f;
    this->InterceptTime = 1.00f;
    this->bInertia = false;
    this->InertiaTime = 1.00f;
    this->SwingRateCurve = NULL;
}

