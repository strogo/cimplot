#ifndef CIMGUIPLOT_INCLUDED
#define CIMGUIPLOT_INCLUDED
#include <stdio.h>
#include <stdint.h>
#if defined _WIN32 || defined __CYGWIN__
    #ifdef CIMGUI_NO_EXPORT
        #define API
    #else
        #define API __declspec(dllexport)
    #endif
    #ifndef __GNUC__
    #define snprintf sprintf_s
    #endif
#else
    #ifdef __GNUC__
        #define API  __attribute__((__visibility__("default")))
    #else
        #define API
    #endif
#endif

#if defined __cplusplus
    #define EXTERN extern "C"
#else
    #include <stdarg.h>
    #include <stdbool.h>
    #define EXTERN extern
#endif

#define CIMGUI_API EXTERN API
#define CONST const


#ifdef _MSC_VER
typedef unsigned __int64 ImU64;
#else
//typedef unsigned long long ImU64;
#endif


#ifdef CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include "imgui_structs.h"
#else

#endif // CIMGUI_DEFINE_ENUMS_AND_STRUCTS

#include "auto_funcs.h"

//ImPlotPoint getters manually wrapped
CIMGUI_API void ImPlot_PlotLineG(const char* label_id,ImPlotPoint*(*getter)(void* data,int idx),void* data,int count,int offset);
CIMGUI_API  void ImPlot_PlotScatterG(const char* label_id, ImPlotPoint* (*getter)(void* data, int idx), void* data, int count, int offset);
CIMGUI_API void ImPlot_PlotShadedG(const char* label_id, ImPlotPoint* (*getter1)(void* data, int idx), void* data1, ImPlotPoint* (*getter2)(void* data, int idx), void* data2, int count, int offset);
CIMGUI_API void ImPlot_PlotBarsG(const char* label_id, ImPlotPoint* (*getter)(void* data, int idx), void* data, int count, double width, int offset);
CIMGUI_API void ImPlot_PlotBarsHG(const char* label_id, ImPlotPoint* (*getter)(void* data, int idx), void* data, int count, double height,  int offset);
CIMGUI_API void ImPlot_PlotDigitalG(const char* label_id, ImPlotPoint* (*getter)(void* data, int idx), void* data, int count, int offset);

#endif //CIMGUIPLOT_INCLUDED




