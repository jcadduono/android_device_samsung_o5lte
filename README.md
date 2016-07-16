## TWRP device tree for Galaxy On5 & Galaxy On5 Pro (Exynos)

Add to `.repo/local_manifests/o5lte.xml`:

```xml
<?xml version="1.0" encoding="UTF-8"?>
<manifest>
	<project path="device/samsung/o5lte" name="android_device_samsung_o5lte" remote="TeamWin" revision="android-6.0" />
</manifest>
```

Then run `repo sync` to check it out.

Kernel sources are available at: https://github.com/jcadduono/twrp_kernel_samsung_gteslte/tree/twrp-6.0

