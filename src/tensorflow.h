#pragma once

#ifdef _WIN32
  #define tensorflow_EXPORT __declspec(dllexport)
#else
  #define tensorflow_EXPORT
#endif

tensorflow_EXPORT void tensorflow();
