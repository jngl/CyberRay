#include "CyberRay/SceneObject.hpp"

namespace cr
{

SceneObject::SceneObject(cb::Position3<cb::MetreKernel> p_position) :
    m_position(p_position) {}

SceneObject::~SceneObject() {}

cb::Position3<cb::MetreKernel> SceneObject::position() { return m_position; }

void SceneObject::setPoistion(cb::Position3<cb::MetreKernel> p_position) {
    m_position = p_position;
}

} // namespace cr