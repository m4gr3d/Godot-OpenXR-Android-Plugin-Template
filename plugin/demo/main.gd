extends Node3D

# TODO: Update to match your plugin's name
var _plugin_name = "GodotOpenXRAndroidPluginTemplate"
var _android_plugin

var xr_interface: XRInterface = null

func _ready():
	xr_interface = XRServer.find_interface("OpenXR")
	if xr_interface and xr_interface.is_initialized():
		print("Initialized OpenXR interface")
		var vp: Viewport = get_viewport()
		vp.use_xr = true
		
	if Engine.has_singleton(_plugin_name):
		_android_plugin = Engine.get_singleton(_plugin_name)
		print("Retrieved Android plugin singleton")
	else:
		printerr("Couldn't find plugin " + _plugin_name)

