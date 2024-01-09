#include <spdlog/spdlog.h>

int main(int, char *[])
{
    spdlog::set_level(spdlog::level::info);
    spdlog::info("Hello, world! This is spdlog version {}.{}.{}!",
                 SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR, SPDLOG_VER_PATCH);
}
