//This file is automatically generated by generator.lua from https://github.com/cimgui/cimplot
//based on implot.h file version 0.4 WIP from Dear ImGui https://github.com/ocornut/imgui

#include "./implot/implot.h"
#include "cimplot.h"



CIMGUI_API ImPlotPoint* ImPlotPoint_ImPlotPointNil(void)
{
    return IM_NEW(ImPlotPoint)();
}
CIMGUI_API void ImPlotPoint_destroy(ImPlotPoint* self)
{
    IM_DELETE(self);
}
CIMGUI_API ImPlotPoint* ImPlotPoint_ImPlotPointdouble(double _x,double _y)
{
    return IM_NEW(ImPlotPoint)(_x,_y);
}
CIMGUI_API ImPlotRange* ImPlotRange_ImPlotRange(void)
{
    return IM_NEW(ImPlotRange)();
}
CIMGUI_API void ImPlotRange_destroy(ImPlotRange* self)
{
    IM_DELETE(self);
}
CIMGUI_API bool ImPlotRange_Contains(ImPlotRange* self,double value)
{
    return self->Contains(value);
}
CIMGUI_API double ImPlotRange_Size(ImPlotRange* self)
{
    return self->Size();
}
CIMGUI_API ImPlotLimits* ImPlotLimits_ImPlotLimits(void)
{
    return IM_NEW(ImPlotLimits)();
}
CIMGUI_API void ImPlotLimits_destroy(ImPlotLimits* self)
{
    IM_DELETE(self);
}
CIMGUI_API bool ImPlotLimits_ContainsPlotPoInt(ImPlotLimits* self,const ImPlotPoint p)
{
    return self->Contains(p);
}
CIMGUI_API bool ImPlotLimits_Containsdouble(ImPlotLimits* self,double x,double y)
{
    return self->Contains(x,y);
}
CIMGUI_API ImPlotStyle* ImPlotStyle_ImPlotStyle(void)
{
    return IM_NEW(ImPlotStyle)();
}
CIMGUI_API void ImPlotStyle_destroy(ImPlotStyle* self)
{
    IM_DELETE(self);
}
CIMGUI_API ImPlotInputMap* ImPlotInputMap_ImPlotInputMap(void)
{
    return IM_NEW(ImPlotInputMap)();
}
CIMGUI_API void ImPlotInputMap_destroy(ImPlotInputMap* self)
{
    IM_DELETE(self);
}
CIMGUI_API bool ImPlot_BeginPlot(const char* title_id,const char* x_label,const char* y_label,const ImVec2 size,ImPlotFlags flags,ImPlotAxisFlags x_flags,ImPlotAxisFlags y_flags,ImPlotAxisFlags y2_flags,ImPlotAxisFlags y3_flags)
{
    return ImPlot::BeginPlot(title_id,x_label,y_label,size,flags,x_flags,y_flags,y2_flags,y3_flags);
}
CIMGUI_API void ImPlot_EndPlot()
{
    return ImPlot::EndPlot();
}
CIMGUI_API void ImPlot_PlotLineFloatPtrInt(const char* label_id,const float* values,int count,int offset,int stride)
{
    return ImPlot::PlotLine(label_id,values,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotLinedoublePtrInt(const char* label_id,const double* values,int count,int offset,int stride)
{
    return ImPlot::PlotLine(label_id,values,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotLineFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys,int count,int offset,int stride)
{
    return ImPlot::PlotLine(label_id,xs,ys,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotLinedoublePtrdoublePtr(const char* label_id,const double* xs,const double* ys,int count,int offset,int stride)
{
    return ImPlot::PlotLine(label_id,xs,ys,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotLineVec2Ptr(const char* label_id,const ImVec2* data,int count,int offset)
{
    return ImPlot::PlotLine(label_id,data,count,offset);
}
CIMGUI_API void ImPlot_PlotLinePlotPoIntPtr(const char* label_id,const ImPlotPoint* data,int count,int offset)
{
    return ImPlot::PlotLine(label_id,data,count,offset);
}
CIMGUI_API void ImPlot_PlotLineFnPlotPoIntPtr(const char* label_id,ImPlotPoint(*getter)(void* data,int idx),void* data,int count,int offset)
{
    return ImPlot::PlotLine(label_id,getter,data,count,offset);
}
CIMGUI_API void ImPlot_PlotScatterFloatPtrInt(const char* label_id,const float* values,int count,int offset,int stride)
{
    return ImPlot::PlotScatter(label_id,values,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotScatterdoublePtrInt(const char* label_id,const double* values,int count,int offset,int stride)
{
    return ImPlot::PlotScatter(label_id,values,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotScatterFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys,int count,int offset,int stride)
{
    return ImPlot::PlotScatter(label_id,xs,ys,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotScatterdoublePtrdoublePtr(const char* label_id,const double* xs,const double* ys,int count,int offset,int stride)
{
    return ImPlot::PlotScatter(label_id,xs,ys,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotScatterVec2Ptr(const char* label_id,const ImVec2* data,int count,int offset)
{
    return ImPlot::PlotScatter(label_id,data,count,offset);
}
CIMGUI_API void ImPlot_PlotScatterPlotPoIntPtr(const char* label_id,const ImPlotPoint* data,int count,int offset)
{
    return ImPlot::PlotScatter(label_id,data,count,offset);
}
CIMGUI_API void ImPlot_PlotScatterFnPlotPoIntPtr(const char* label_id,ImPlotPoint(*getter)(void* data,int idx),void* data,int count,int offset)
{
    return ImPlot::PlotScatter(label_id,getter,data,count,offset);
}
CIMGUI_API void ImPlot_PlotShadedFloatPtrFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys1,const float* ys2,int count,int offset,int stride)
{
    return ImPlot::PlotShaded(label_id,xs,ys1,ys2,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotShadeddoublePtrdoublePtrdoublePtr(const char* label_id,const double* xs,const double* ys1,const double* ys2,int count,int offset,int stride)
{
    return ImPlot::PlotShaded(label_id,xs,ys1,ys2,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotShadedFloatPtrFloatPtrIntFloat(const char* label_id,const float* xs,const float* ys,int count,float y_ref,int offset,int stride)
{
    return ImPlot::PlotShaded(label_id,xs,ys,count,y_ref,offset,stride);
}
CIMGUI_API void ImPlot_PlotShadeddoublePtrdoublePtrIntdouble(const char* label_id,const double* xs,const double* ys,int count,double y_ref,int offset,int stride)
{
    return ImPlot::PlotShaded(label_id,xs,ys,count,y_ref,offset,stride);
}
CIMGUI_API void ImPlot_PlotBarsFloatPtrIntFloat(const char* label_id,const float* values,int count,float width,float shift,int offset,int stride)
{
    return ImPlot::PlotBars(label_id,values,count,width,shift,offset,stride);
}
CIMGUI_API void ImPlot_PlotBarsdoublePtrIntdouble(const char* label_id,const double* values,int count,double width,double shift,int offset,int stride)
{
    return ImPlot::PlotBars(label_id,values,count,width,shift,offset,stride);
}
CIMGUI_API void ImPlot_PlotBarsFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys,int count,float width,int offset,int stride)
{
    return ImPlot::PlotBars(label_id,xs,ys,count,width,offset,stride);
}
CIMGUI_API void ImPlot_PlotBarsdoublePtrdoublePtr(const char* label_id,const double* xs,const double* ys,int count,double width,int offset,int stride)
{
    return ImPlot::PlotBars(label_id,xs,ys,count,width,offset,stride);
}
CIMGUI_API void ImPlot_PlotBarsFnPlotPoIntPtr(const char* label_id,ImPlotPoint(*getter)(void* data,int idx),void* data,int count,double width,int offset)
{
    return ImPlot::PlotBars(label_id,getter,data,count,width,offset);
}
CIMGUI_API void ImPlot_PlotBarsHFloatPtrIntFloat(const char* label_id,const float* values,int count,float height,float shift,int offset,int stride)
{
    return ImPlot::PlotBarsH(label_id,values,count,height,shift,offset,stride);
}
CIMGUI_API void ImPlot_PlotBarsHdoublePtrIntdouble(const char* label_id,const double* values,int count,double height,double shift,int offset,int stride)
{
    return ImPlot::PlotBarsH(label_id,values,count,height,shift,offset,stride);
}
CIMGUI_API void ImPlot_PlotBarsHFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys,int count,float height,int offset,int stride)
{
    return ImPlot::PlotBarsH(label_id,xs,ys,count,height,offset,stride);
}
CIMGUI_API void ImPlot_PlotBarsHdoublePtrdoublePtr(const char* label_id,const double* xs,const double* ys,int count,double height,int offset,int stride)
{
    return ImPlot::PlotBarsH(label_id,xs,ys,count,height,offset,stride);
}
CIMGUI_API void ImPlot_PlotBarsHFnPlotPoIntPtr(const char* label_id,ImPlotPoint(*getter)(void* data,int idx),void* data,int count,double height,int offset)
{
    return ImPlot::PlotBarsH(label_id,getter,data,count,height,offset);
}
CIMGUI_API void ImPlot_PlotErrorBarsFloatPtrFloatPtrFloatPtrInt(const char* label_id,const float* xs,const float* ys,const float* err,int count,int offset,int stride)
{
    return ImPlot::PlotErrorBars(label_id,xs,ys,err,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotErrorBarsdoublePtrdoublePtrdoublePtrInt(const char* label_id,const double* xs,const double* ys,const double* err,int count,int offset,int stride)
{
    return ImPlot::PlotErrorBars(label_id,xs,ys,err,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotErrorBarsFloatPtrFloatPtrFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys,const float* neg,const float* pos,int count,int offset,int stride)
{
    return ImPlot::PlotErrorBars(label_id,xs,ys,neg,pos,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotErrorBarsdoublePtrdoublePtrdoublePtrdoublePtr(const char* label_id,const double* xs,const double* ys,const double* neg,const double* pos,int count,int offset,int stride)
{
    return ImPlot::PlotErrorBars(label_id,xs,ys,neg,pos,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotErrorBarsHFloatPtrFloatPtrFloatPtrInt(const char* label_id,const float* xs,const float* ys,const float* err,int count,int offset,int stride)
{
    return ImPlot::PlotErrorBarsH(label_id,xs,ys,err,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotErrorBarsHdoublePtrdoublePtrdoublePtrInt(const char* label_id,const double* xs,const double* ys,const double* err,int count,int offset,int stride)
{
    return ImPlot::PlotErrorBarsH(label_id,xs,ys,err,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotErrorBarsHFloatPtrFloatPtrFloatPtrFloatPtr(const char* label_id,const float* xs,const float* ys,const float* neg,const float* pos,int count,int offset,int stride)
{
    return ImPlot::PlotErrorBarsH(label_id,xs,ys,neg,pos,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotErrorBarsHdoublePtrdoublePtrdoublePtrdoublePtr(const char* label_id,const double* xs,const double* ys,const double* neg,const double* pos,int count,int offset,int stride)
{
    return ImPlot::PlotErrorBarsH(label_id,xs,ys,neg,pos,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotPieChartFloatPtr(const char** label_ids,const float* values,int count,float x,float y,float radius,bool normalize,const char* label_fmt,float angle0)
{
    return ImPlot::PlotPieChart(label_ids,values,count,x,y,radius,normalize,label_fmt,angle0);
}
CIMGUI_API void ImPlot_PlotPieChartdoublePtr(const char** label_ids,const double* values,int count,double x,double y,double radius,bool normalize,const char* label_fmt,double angle0)
{
    return ImPlot::PlotPieChart(label_ids,values,count,x,y,radius,normalize,label_fmt,angle0);
}
CIMGUI_API void ImPlot_PlotHeatmapFloatPtr(const char* label_id,const float* values,int rows,int cols,float scale_min,float scale_max,const char* label_fmt,const ImPlotPoint bounds_min,const ImPlotPoint bounds_max)
{
    return ImPlot::PlotHeatmap(label_id,values,rows,cols,scale_min,scale_max,label_fmt,bounds_min,bounds_max);
}
CIMGUI_API void ImPlot_PlotHeatmapdoublePtr(const char* label_id,const double* values,int rows,int cols,double scale_min,double scale_max,const char* label_fmt,const ImPlotPoint bounds_min,const ImPlotPoint bounds_max)
{
    return ImPlot::PlotHeatmap(label_id,values,rows,cols,scale_min,scale_max,label_fmt,bounds_min,bounds_max);
}
CIMGUI_API void ImPlot_PlotDigitalFloatPtr(const char* label_id,const float* xs,const float* ys,int count,int offset,int stride)
{
    return ImPlot::PlotDigital(label_id,xs,ys,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotDigitaldoublePtr(const char* label_id,const double* xs,const double* ys,int count,int offset,int stride)
{
    return ImPlot::PlotDigital(label_id,xs,ys,count,offset,stride);
}
CIMGUI_API void ImPlot_PlotDigitalFnPlotPoIntPtr(const char* label_id,ImPlotPoint(*getter)(void* data,int idx),void* data,int count,int offset)
{
    return ImPlot::PlotDigital(label_id,getter,data,count,offset);
}
CIMGUI_API void ImPlot_PlotTextFloat(const char* text,float x,float y,bool vertical,const ImVec2 pixel_offset)
{
    return ImPlot::PlotText(text,x,y,vertical,pixel_offset);
}
CIMGUI_API void ImPlot_PlotTextdouble(const char* text,double x,double y,bool vertical,const ImVec2 pixel_offset)
{
    return ImPlot::PlotText(text,x,y,vertical,pixel_offset);
}
CIMGUI_API bool ImPlot_IsPlotHovered()
{
    return ImPlot::IsPlotHovered();
}
CIMGUI_API bool ImPlot_IsPlotXAxisHovered()
{
    return ImPlot::IsPlotXAxisHovered();
}
CIMGUI_API bool ImPlot_IsPlotYAxisHovered(int y_axis)
{
    return ImPlot::IsPlotYAxisHovered(y_axis);
}
CIMGUI_API void ImPlot_GetPlotMousePos(ImPlotPoint *pOut,int y_axis)
{
    *pOut = ImPlot::GetPlotMousePos(y_axis);
}
CIMGUI_API void ImPlot_GetPlotLimits(ImPlotLimits *pOut,int y_axis)
{
    *pOut = ImPlot::GetPlotLimits(y_axis);
}
CIMGUI_API bool ImPlot_IsPlotQueried()
{
    return ImPlot::IsPlotQueried();
}
CIMGUI_API void ImPlot_GetPlotQuery(ImPlotLimits *pOut,int y_axis)
{
    *pOut = ImPlot::GetPlotQuery(y_axis);
}
CIMGUI_API bool ImPlot_IsLegendEntryHovered(const char* label_id)
{
    return ImPlot::IsLegendEntryHovered(label_id);
}
CIMGUI_API ImPlotInputMap* ImPlot_GetInputMap()
{
    return &ImPlot::GetInputMap();
}
CIMGUI_API ImPlotStyle* ImPlot_GetStyle()
{
    return &ImPlot::GetStyle();
}
CIMGUI_API void ImPlot_PushStyleColorU32(ImPlotCol idx,ImU32 col)
{
    return ImPlot::PushStyleColor(idx,col);
}
CIMGUI_API void ImPlot_PushStyleColorVec4(ImPlotCol idx,const ImVec4 col)
{
    return ImPlot::PushStyleColor(idx,col);
}
CIMGUI_API void ImPlot_PopStyleColor(int count)
{
    return ImPlot::PopStyleColor(count);
}
CIMGUI_API void ImPlot_PushStyleVarFloat(ImPlotStyleVar idx,float val)
{
    return ImPlot::PushStyleVar(idx,val);
}
CIMGUI_API void ImPlot_PushStyleVarInt(ImPlotStyleVar idx,int val)
{
    return ImPlot::PushStyleVar(idx,val);
}
CIMGUI_API void ImPlot_PopStyleVar(int count)
{
    return ImPlot::PopStyleVar(count);
}
CIMGUI_API void ImPlot_SetColormapPlotColormap(ImPlotColormap colormap,int samples)
{
    return ImPlot::SetColormap(colormap,samples);
}
CIMGUI_API void ImPlot_SetColormapVec4Ptr(const ImVec4* colors,int num_colors)
{
    return ImPlot::SetColormap(colors,num_colors);
}
CIMGUI_API int ImPlot_GetColormapSize()
{
    return ImPlot::GetColormapSize();
}
CIMGUI_API void ImPlot_GetColormapColor(ImVec4 *pOut,int index)
{
    *pOut = ImPlot::GetColormapColor(index);
}
CIMGUI_API void ImPlot_LerpColormap(ImVec4 *pOut,float t)
{
    *pOut = ImPlot::LerpColormap(t);
}
CIMGUI_API void ImPlot_SetNextPlotLimits(double x_min,double x_max,double y_min,double y_max,ImGuiCond cond)
{
    return ImPlot::SetNextPlotLimits(x_min,x_max,y_min,y_max,cond);
}
CIMGUI_API void ImPlot_SetNextPlotLimitsX(double x_min,double x_max,ImGuiCond cond)
{
    return ImPlot::SetNextPlotLimitsX(x_min,x_max,cond);
}
CIMGUI_API void ImPlot_SetNextPlotLimitsY(double y_min,double y_max,ImGuiCond cond,int y_axis)
{
    return ImPlot::SetNextPlotLimitsY(y_min,y_max,cond,y_axis);
}
CIMGUI_API void ImPlot_SetNextPlotTicksXdoublePtr(const double* values,int n_ticks,const char** labels,bool show_default)
{
    return ImPlot::SetNextPlotTicksX(values,n_ticks,labels,show_default);
}
CIMGUI_API void ImPlot_SetNextPlotTicksXdouble(double x_min,double x_max,int n_ticks,const char** labels,bool show_default)
{
    return ImPlot::SetNextPlotTicksX(x_min,x_max,n_ticks,labels,show_default);
}
CIMGUI_API void ImPlot_SetNextPlotTicksYdoublePtr(const double* values,int n_ticks,const char** labels,bool show_default,int y_axis)
{
    return ImPlot::SetNextPlotTicksY(values,n_ticks,labels,show_default,y_axis);
}
CIMGUI_API void ImPlot_SetNextPlotTicksYdouble(double y_min,double y_max,int n_ticks,const char** labels,bool show_default,int y_axis)
{
    return ImPlot::SetNextPlotTicksY(y_min,y_max,n_ticks,labels,show_default,y_axis);
}
CIMGUI_API void ImPlot_SetPlotYAxis(int y_axis)
{
    return ImPlot::SetPlotYAxis(y_axis);
}
CIMGUI_API void ImPlot_GetPlotPos(ImVec2 *pOut)
{
    *pOut = ImPlot::GetPlotPos();
}
CIMGUI_API void ImPlot_GetPlotSize(ImVec2 *pOut)
{
    *pOut = ImPlot::GetPlotSize();
}
CIMGUI_API void ImPlot_PixelsToPlot(ImPlotPoint *pOut,const ImVec2 pix,int y_axis)
{
    *pOut = ImPlot::PixelsToPlot(pix,y_axis);
}
CIMGUI_API void ImPlot_PlotToPixels(ImVec2 *pOut,const ImPlotPoint plt,int y_axis)
{
    *pOut = ImPlot::PlotToPixels(plt,y_axis);
}
CIMGUI_API void ImPlot_ShowColormapScale(double scale_min,double scale_max,float height)
{
    return ImPlot::ShowColormapScale(scale_min,scale_max,height);
}
CIMGUI_API void ImPlot_PushPlotClipRect()
{
    return ImPlot::PushPlotClipRect();
}
CIMGUI_API void ImPlot_PopPlotClipRect()
{
    return ImPlot::PopPlotClipRect();
}
CIMGUI_API void ImPlot_ShowDemoWindow(bool* p_open)
{
    return ImPlot::ShowDemoWindow(p_open);
}



