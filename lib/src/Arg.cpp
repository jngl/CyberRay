#include <CyberRay/Arg.hpp>

#include <iostream>

namespace cr
{

Arg::Arg(int p_argc, const char **p_argv) :
    m_scene_name(p_argc >= 2 ? p_argv[1] : "scene1"),
    m_image_file_name(p_argc >= 3 ? p_argv[2] : "out.ppm"),
    m_width(p_argc >= 4 ? atoi(p_argv[3]) : 200),
    m_height(p_argc >= 5 ? atoi(p_argv[4]) : 100) {}

std::string Arg::scene_name() const { return m_scene_name; }

std::string Arg::image_file_name() const { return m_image_file_name; }

int Arg::width() const { return m_width; }

int Arg::height() const { return m_height; }

} // namespace cr
