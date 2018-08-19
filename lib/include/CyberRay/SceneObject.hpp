#ifndef CYBER_RAY_SCENE_OBJECT_HPP
#define CYBER_RAY_SCENE_OBJECT_HPP

#include <memory>

#include <CyberBase.hpp>

#include "SceneObject.hpp"

namespace cr
{
class SceneObject
{
  public:
    SceneObject() = default;
    SceneObject(cb::Vector3 p_poistion);

    virtual ~SceneObject();

    cb::Vector3 position();

    void setPoistion(cb::Vector3 p_position);

    virtual std::string typeName() = 0;

  private:
    cb::Vector3 m_position;
};
} // namespace cr

#endif // CYBER_RAY_SCENE_OBJECT_HPP