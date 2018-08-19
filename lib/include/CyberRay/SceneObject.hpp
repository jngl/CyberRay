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
    SceneObject(cb::Position p_poistion);

    virtual ~SceneObject();

    cb::Position position();

    void setPoistion(cb::Position p_position);

    virtual std::string typeName() = 0;

  private:
    cb::Position m_position;
};
} // namespace cr

#endif // CYBER_RAY_SCENE_OBJECT_HPP