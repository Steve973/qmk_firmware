#pragma once

// NOTE: The following list of effects will increase the size of the firmware, so only enable what you really want to
// use, and be aware of the firmware size, once you compile it.

#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE         // Pulses keys hit to hue & value then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE                // Static single hue, pulses keys hit to shifted hue then fades to current hue
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE           // Hue & value pulse near a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE      // Hue & value pulse near multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS          // Hue & value pulse the same column and row of a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS     // Hue & value pulse the same column and row of multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS          // Hue & value pulse away on the same column and row of a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS     // Hue & value pulse away on the same column and row of multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SPLASH                        // Full gradient & value pulse away from a single key hit then fades value out
#define ENABLE_RGB_MATRIX_MULTISPLASH                   // Full gradient & value pulse away from multiple key hits then fades value out
#define ENABLE_RGB_MATRIX_SOLID_SPLASH                  // Hue & value pulse away from a single key hit then fades value out
#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH             // Hue & value pulse away from multiple key hits then fades value out
