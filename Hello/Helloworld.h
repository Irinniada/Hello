#pragma once

#ifdef HELLOWORLD_EXPORTS
#define HELLOWORLD_API __declspec(dllexport)
#else
#define HELLOWORLD_API __declspec(dllimport)
#endif#pragma once

extern "C" HELLOWORLD_API const char* myfunc();
