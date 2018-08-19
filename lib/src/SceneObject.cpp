#include "CyberRay/SceneObject.hpp"

namespace cr
{

SceneObject::SceneObject(cb::Vector3 p_position) : m_position(p_position) {}

SceneObject::~SceneObject() {}

cb::Vector3 SceneObject::position() { return m_position; }

void SceneObject::setPoistion(cb::Vector3 p_position) {
    m_position = p_position;
}

} // namespace cr