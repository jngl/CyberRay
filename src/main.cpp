#include <CyberBase.hpp>
#include <CyberRay.hpp>

int main(int argc, const char **argv) {
    cb::addDefaultLogOutput();

    cr::Arg arg(argc, argv);
    cr::Scene scene;
    scene.add(std::make_unique<cr::Sphere>(cb::Vector3{0, 0, 0}, cb::m(1)));
}
