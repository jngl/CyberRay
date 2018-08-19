#include <CyberBase.hpp>
#include <CyberRay.hpp>

int main() {
    cb::addDefaultLogOutput();

    CB_LOG_INFO << "Hello";

    cr::test();
}