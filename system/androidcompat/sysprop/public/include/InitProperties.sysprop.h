// Generated by the sysprop generator. DO NOT EDIT!

#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <vector>

namespace android::sysprop::InitProperties {

std::optional<bool> userspace_reboot_in_progress();
bool userspace_reboot_in_progress(const std::optional<bool>& value);

std::optional<bool> is_userspace_reboot_supported();

}  // namespace android::sysprop::InitProperties
