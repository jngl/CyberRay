#include "CyberRay/SceneObject.hpp"

namespace cr
{

SceneObject::SceneObject(cb::Position p_position) : m_position(p_position) {}

SceneObject::~SceneObject() {}

cb::Position SceneObject::position() { return m_position; }

void SceneObject::setPoistion(cb::Position p_position) {
    m_position = p_position;
}

} // namespace cr