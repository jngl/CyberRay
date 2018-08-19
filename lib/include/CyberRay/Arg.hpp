#ifndef CYBER_RAY_ARG_HPP
#define CYBER_RAY_ARG_HPP

#include <string>

namespace cr
{

class Arg
{
  public:
    Arg(int p_argc, const char **p_argv);

    std::string scene_name() const;
    std::string image_file_name() const;
    int width() const;
    int height() const;

  private:
    const std::string m_scene_name;
    const std::string m_image_file_name;
    const int m_width;
    const int m_height;
};

} // namespace cr

#endif // CYBER_RAY_ARG_HPP