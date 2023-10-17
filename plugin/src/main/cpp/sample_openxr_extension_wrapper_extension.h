#ifndef SAMPLE_OPENXR_EXTENSION_WRAPPER_EXTENSION_H
#define SAMPLE_OPENXR_EXTENSION_WRAPPER_EXTENSION_H

#include <godot_cpp/classes/open_xr_extension_wrapper_extension.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <openxr/openxr.h>

#include <map>

using namespace godot;

/// Showcase how to create an OpenXR extension wrapper
class SampleOpenXRExtensionWrapperExtension : public OpenXRExtensionWrapperExtension {
    GDCLASS(SampleOpenXRExtensionWrapperExtension, OpenXRExtensionWrapperExtension);

public:
    void _on_instance_created(uint64_t instance) override;

    void _on_instance_destroyed() override;

    virtual bool _on_event_polled(const void *event) override;

    static SampleOpenXRExtensionWrapperExtension *get_singleton();

    SampleOpenXRExtensionWrapperExtension();
    ~SampleOpenXRExtensionWrapperExtension();

protected:
    static void _bind_methods();

private:
    static SampleOpenXRExtensionWrapperExtension *singleton;
};

#endif // SAMPLE_OPENXR_EXTENSION_WRAPPER_EXTENSION_H
