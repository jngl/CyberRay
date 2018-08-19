#include "CyberRay/Sphere.hpp"

namespace cr
{

Sphere::Sphere(cb::Vector3 p_position, float p_rayon) :
    SceneObject(p_position),
    m_rayon(p_rayon) {
    CB_LOG_INFO << "create sphere";
}

float Sphere::rayon() { return m_rayon; }

void Sphere::setRayon(float p_rayon) { m_rayon = p_rayon; }

std::string Sphere::typeName() { return "Sphere"; }

} // namespace cr