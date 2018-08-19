#include "CyberRay/Scene.hpp"

#include <CyberBase/Log.hpp>

namespace cr
{
Scene::Scene() {}
void Scene::add(std::unique_ptr<SceneObject> p_object) {
    CB_LOG_INFO << "add to scene : " << p_object->typeName();
    m_objects.push_back(std::move(p_object));
}
} // namespace cr