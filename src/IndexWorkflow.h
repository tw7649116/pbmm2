// Author: Armin Töpfer

#pragma once

#include <pbcopper/cli/CLI.h>

namespace PacBio {
namespace minimap2 {
struct IndexWorkflow
{
    static int Runner(const PacBio::CLI::Results& options);
};
}  // namespace minimap2
}  // namespace PacBio
