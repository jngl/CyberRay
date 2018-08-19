#ifndef CYBER_RAY_SPHERE_HPP
#define CYBER_RAY_SPHERE_HPP

#include "SceneObject.hpp"

namespace cr
{
class Sphere : public SceneObject
{
  public:
    Sphere(cb::Vector3 p_position, cb::Metre p_rayon);

    cb::Metre rayon();
    void setRayon(cb::Metre p_rayon);

    std::string typeName() override;

  private:
    cb::Metre m_rayon;
};
} // namespace cr

#endif // CYBER_RAY_SPHERE_HPP