#ifndef CYBER_RAY_SCENE_HPP
#define CYBER_RAY_SCENE_HPP

#include <memory>
#include <vector>

#include "SceneObject.hpp"

namespace cr
{
class Scene
{
  public:
    Scene();

    void add(std::unique_ptr<SceneObject> p_object);

  private:
    std::vector<std::unique_ptr<SceneObject>> m_objects;
};
} // namespace cr

#endif // CYBER_RAY_SCENE_HPP