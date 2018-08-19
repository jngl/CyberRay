#include "CyberRay/Sphere.hpp"

namespace cr
{

Sphere::Sphere(cb::Position p_position, cb::Metre p_rayon) :
    SceneObject(p_position),
    m_rayon(p_rayon) {
    CB_LOG_INFO << "create sphere position=" << position()
                << " ; rayon=" << m_rayon;
}

cb::Metre Sphere::rayon() { return m_rayon; }

void Sphere::setRayon(cb::Metre p_rayon) { m_rayon = p_rayon; }

std::string Sphere::typeName() { return "Sphere"; }

} // namespace cr