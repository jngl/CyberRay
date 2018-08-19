#ifndef CYBER_RAY_SPHERE_HPP
#define CYBER_RAY_SPHERE_HPP

#include "SceneObject.hpp"

namespace cr
{
class Sphere : public SceneObject
{
  public:
    Sphere(cb::Vector3 p_position, float p_rayon);

    float rayon();
    void setRayon(float p_rayon);

    std::string typeName() override;

  private:
    float m_rayon;
};
} // namespace cr

#endif // CYBER_RAY_SPHERE_HPP