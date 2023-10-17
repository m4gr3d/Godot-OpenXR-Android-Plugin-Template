#include "sample_openxr_extension_wrapper_extension.h"

using namespace godot;

SampleOpenXRExtensionWrapperExtension *SampleOpenXRExtensionWrapperExtension::singleton = nullptr;

SampleOpenXRExtensionWrapperExtension *SampleOpenXRExtensionWrapperExtension::get_singleton() {
    if (singleton == nullptr) {
        singleton = memnew(SampleOpenXRExtensionWrapperExtension());
    }
    return singleton;
}

SampleOpenXRExtensionWrapperExtension::SampleOpenXRExtensionWrapperExtension() : OpenXRExtensionWrapperExtension() {
    ERR_FAIL_COND_MSG(singleton != nullptr, "An SampleOpenXRExtensionWrapperExtension singleton "
                                            "already exists.");

    singleton = this;
}

SampleOpenXRExtensionWrapperExtension::~SampleOpenXRExtensionWrapperExtension() {}

void SampleOpenXRExtensionWrapperExtension::_bind_methods() {
    ClassDB::bind_static_method("SampleOpenXRExtensionWrapperExtension", D_METHOD("get_singleton"), &SampleOpenXRExtensionWrapperExtension::get_singleton);
}

void SampleOpenXRExtensionWrapperExtension::_on_instance_created(uint64_t instance) {
    UtilityFunctions::print("SampleOpenXRExtensionWrapperExtension: On instance created");
}

void SampleOpenXRExtensionWrapperExtension::_on_instance_destroyed() {
    UtilityFunctions::print("SampleOpenXRExtensionWrapperExtension: On instance destroyed");
}

bool SampleOpenXRExtensionWrapperExtension::_on_event_polled(const void *event) {
    UtilityFunctions::print("SampleOpenXRExtensionWrapperExtension: On event polled");
    return false;
}
