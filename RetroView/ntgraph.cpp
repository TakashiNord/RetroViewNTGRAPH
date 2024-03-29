// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "ntgraph.h"

// Dispatch interfaces referenced by this interface
#include "font.h"
#include "Picture.h"

/////////////////////////////////////////////////////////////////////////////
// CNTGraph

IMPLEMENT_DYNCREATE(CNTGraph, CWnd)

/////////////////////////////////////////////////////////////////////////////
// CNTGraph properties

short CNTGraph::GetAppearance()
{
	short result;
	GetProperty(DISPID_APPEARANCE, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetAppearance(short propVal)
{
	SetProperty(DISPID_APPEARANCE, VT_I2, propVal);
}

CString CNTGraph::GetCaption()
{
	CString result;
	GetProperty(DISPID_CAPTION, VT_BSTR, (void*)&result);
	return result;
}

void CNTGraph::SetCaption(LPCTSTR propVal)
{
	SetProperty(DISPID_CAPTION, VT_BSTR, propVal);
}

BOOL CNTGraph::GetEnabled()
{
	BOOL result;
	GetProperty(DISPID_ENABLED, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetEnabled(BOOL propVal)
{
	SetProperty(DISPID_ENABLED, VT_BOOL, propVal);
}

unsigned long CNTGraph::GetAxisColor()
{
	unsigned long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetAxisColor(unsigned long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

unsigned long CNTGraph::GetGridColor()
{
	unsigned long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetGridColor(unsigned long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

unsigned long CNTGraph::GetLabelColor()
{
	unsigned long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetLabelColor(unsigned long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

unsigned long CNTGraph::GetCursorColor()
{
	unsigned long result;
	GetProperty(0x4, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetCursorColor(unsigned long propVal)
{
	SetProperty(0x4, VT_I4, propVal);
}

COleFont CNTGraph::GetLabelFont()
{
	LPDISPATCH pDispatch;
	GetProperty(0x2b, VT_DISPATCH, (void*)&pDispatch);
	return COleFont(pDispatch);
}

void CNTGraph::SetLabelFont(LPDISPATCH propVal)
{
	SetProperty(0x2b, VT_DISPATCH, propVal);
}

COleFont CNTGraph::GetTickFont()
{
	LPDISPATCH pDispatch;
	GetProperty(0x2c, VT_DISPATCH, (void*)&pDispatch);
	return COleFont(pDispatch);
}

void CNTGraph::SetTickFont(LPDISPATCH propVal)
{
	SetProperty(0x2c, VT_DISPATCH, propVal);
}

COleFont CNTGraph::GetTitleFont()
{
	LPDISPATCH pDispatch;
	GetProperty(0x2d, VT_DISPATCH, (void*)&pDispatch);
	return COleFont(pDispatch);
}

void CNTGraph::SetTitleFont(LPDISPATCH propVal)
{
	SetProperty(0x2d, VT_DISPATCH, propVal);
}

COleFont CNTGraph::GetIdentFont()
{
	LPDISPATCH pDispatch;
	GetProperty(0x2e, VT_DISPATCH, (void*)&pDispatch);
	return COleFont(pDispatch);
}

void CNTGraph::SetIdentFont(LPDISPATCH propVal)
{
	SetProperty(0x2e, VT_DISPATCH, propVal);
}

short CNTGraph::GetXGridNumber()
{
	short result;
	GetProperty(0x5, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetXGridNumber(short propVal)
{
	SetProperty(0x5, VT_I2, propVal);
}

short CNTGraph::GetYGridNumber()
{
	short result;
	GetProperty(0x6, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetYGridNumber(short propVal)
{
	SetProperty(0x6, VT_I2, propVal);
}

BOOL CNTGraph::GetShowGrid()
{
	BOOL result;
	GetProperty(0x7, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetShowGrid(BOOL propVal)
{
	SetProperty(0x7, VT_BOOL, propVal);
}

CString CNTGraph::GetXLabel()
{
	CString result;
	GetProperty(0x8, VT_BSTR, (void*)&result);
	return result;
}

void CNTGraph::SetXLabel(LPCTSTR propVal)
{
	SetProperty(0x8, VT_BSTR, propVal);
}

CString CNTGraph::GetYLabel()
{
	CString result;
	GetProperty(0x9, VT_BSTR, (void*)&result);
	return result;
}

void CNTGraph::SetYLabel(LPCTSTR propVal)
{
	SetProperty(0x9, VT_BSTR, propVal);
}

unsigned long CNTGraph::GetElementLineColor()
{
	unsigned long result;
	GetProperty(0xa, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetElementLineColor(unsigned long propVal)
{
	SetProperty(0xa, VT_I4, propVal);
}

unsigned long CNTGraph::GetElementPointColor()
{
	unsigned long result;
	GetProperty(0xb, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetElementPointColor(unsigned long propVal)
{
	SetProperty(0xb, VT_I4, propVal);
}

long CNTGraph::GetElementLinetype()
{
	long result;
	GetProperty(0xc, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetElementLinetype(long propVal)
{
	SetProperty(0xc, VT_I4, propVal);
}

long CNTGraph::GetElementWidth()
{
	long result;
	GetProperty(0xd, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetElementWidth(long propVal)
{
	SetProperty(0xd, VT_I4, propVal);
}

long CNTGraph::GetElementPointSymbol()
{
	long result;
	GetProperty(0xe, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetElementPointSymbol(long propVal)
{
	SetProperty(0xe, VT_I4, propVal);
}

BOOL CNTGraph::GetElementSolidPoint()
{
	BOOL result;
	GetProperty(0xf, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetElementSolidPoint(BOOL propVal)
{
	SetProperty(0xf, VT_BOOL, propVal);
}

BOOL CNTGraph::GetElementShow()
{
	BOOL result;
	GetProperty(0x10, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetElementShow(BOOL propVal)
{
	SetProperty(0x10, VT_BOOL, propVal);
}

long CNTGraph::GetTrackMode()
{
	long result;
	GetProperty(0x2f, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetTrackMode(long propVal)
{
	SetProperty(0x2f, VT_I4, propVal);
}

CString CNTGraph::GetElementName()
{
	CString result;
	GetProperty(0x11, VT_BSTR, (void*)&result);
	return result;
}

void CNTGraph::SetElementName(LPCTSTR propVal)
{
	SetProperty(0x11, VT_BSTR, propVal);
}

BOOL CNTGraph::GetElementIdentify()
{
	BOOL result;
	GetProperty(0x12, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetElementIdentify(BOOL propVal)
{
	SetProperty(0x12, VT_BOOL, propVal);
}

BOOL CNTGraph::GetXLog()
{
	BOOL result;
	GetProperty(0x13, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetXLog(BOOL propVal)
{
	SetProperty(0x13, VT_BOOL, propVal);
}

BOOL CNTGraph::GetYLog()
{
	BOOL result;
	GetProperty(0x14, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetYLog(BOOL propVal)
{
	SetProperty(0x14, VT_BOOL, propVal);
}

CPicture CNTGraph::GetControlFramePicture()
{
	LPDISPATCH pDispatch;
	GetProperty(0x30, VT_DISPATCH, (void*)&pDispatch);
	return CPicture(pDispatch);
}

void CNTGraph::SetControlFramePicture(LPDISPATCH propVal)
{
	SetProperty(0x30, VT_DISPATCH, propVal);
}

CPicture CNTGraph::GetPlotAreaPicture()
{
	LPDISPATCH pDispatch;
	GetProperty(0x31, VT_DISPATCH, (void*)&pDispatch);
	return CPicture(pDispatch);
}

void CNTGraph::SetPlotAreaPicture(LPDISPATCH propVal)
{
	SetProperty(0x31, VT_DISPATCH, propVal);
}

unsigned long CNTGraph::GetControlFrameColor()
{
	unsigned long result;
	GetProperty(0x15, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetControlFrameColor(unsigned long propVal)
{
	SetProperty(0x15, VT_I4, propVal);
}

unsigned long CNTGraph::GetPlotAreaColor()
{
	unsigned long result;
	GetProperty(0x16, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetPlotAreaColor(unsigned long propVal)
{
	SetProperty(0x16, VT_I4, propVal);
}

long CNTGraph::GetFrameStyle()
{
	long result;
	GetProperty(0x17, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetFrameStyle(long propVal)
{
	SetProperty(0x17, VT_I4, propVal);
}

CString CNTGraph::GetAnnoLabelCaption()
{
	CString result;
	GetProperty(0x18, VT_BSTR, (void*)&result);
	return result;
}

void CNTGraph::SetAnnoLabelCaption(LPCTSTR propVal)
{
	SetProperty(0x18, VT_BSTR, propVal);
}

double CNTGraph::GetAnnoLabelX()
{
	double result;
	GetProperty(0x19, VT_R8, (void*)&result);
	return result;
}

void CNTGraph::SetAnnoLabelX(double propVal)
{
	SetProperty(0x19, VT_R8, propVal);
}

double CNTGraph::GetAnnoLabelY()
{
	double result;
	GetProperty(0x1a, VT_R8, (void*)&result);
	return result;
}

void CNTGraph::SetAnnoLabelY(double propVal)
{
	SetProperty(0x1a, VT_R8, propVal);
}

unsigned long CNTGraph::GetAnnoLabelColor()
{
	unsigned long result;
	GetProperty(0x1b, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetAnnoLabelColor(unsigned long propVal)
{
	SetProperty(0x1b, VT_I4, propVal);
}

BOOL CNTGraph::GetAnnoLabelHorizontal()
{
	BOOL result;
	GetProperty(0x1c, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetAnnoLabelHorizontal(BOOL propVal)
{
	SetProperty(0x1c, VT_BOOL, propVal);
}

short CNTGraph::GetAnnotation()
{
	short result;
	GetProperty(0x1d, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetAnnotation(short propVal)
{
	SetProperty(0x1d, VT_I2, propVal);
}

BOOL CNTGraph::GetAnnoVisible()
{
	BOOL result;
	GetProperty(0x1e, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetAnnoVisible(BOOL propVal)
{
	SetProperty(0x1e, VT_BOOL, propVal);
}

short CNTGraph::GetAnnoCount()
{
	short result;
	GetProperty(0x32, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetAnnoCount(short propVal)
{
	SetProperty(0x32, VT_I2, propVal);
}

short CNTGraph::GetElement()
{
	short result;
	GetProperty(0x1f, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetElement(short propVal)
{
	SetProperty(0x1f, VT_I2, propVal);
}

short CNTGraph::GetElementCount()
{
	short result;
	GetProperty(0x33, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetElementCount(short propVal)
{
	SetProperty(0x33, VT_I2, propVal);
}

unsigned long CNTGraph::GetAnnoLabelBkColor()
{
	unsigned long result;
	GetProperty(0x20, VT_I4, (void*)&result);
	return result;
}

void CNTGraph::SetAnnoLabelBkColor(unsigned long propVal)
{
	SetProperty(0x20, VT_I4, propVal);
}

short CNTGraph::GetCursorCount()
{
	short result;
	GetProperty(0x34, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetCursorCount(short propVal)
{
	SetProperty(0x34, VT_I2, propVal);
}

short CNTGraph::GetCursor()
{
	short result;
	GetProperty(0x21, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetCursor(short propVal)
{
	SetProperty(0x21, VT_I2, propVal);
}

double CNTGraph::GetCursorX()
{
	double result;
	GetProperty(0x22, VT_R8, (void*)&result);
	return result;
}

void CNTGraph::SetCursorX(double propVal)
{
	SetProperty(0x22, VT_R8, propVal);
}

double CNTGraph::GetCursorY()
{
	double result;
	GetProperty(0x23, VT_R8, (void*)&result);
	return result;
}

void CNTGraph::SetCursorY(double propVal)
{
	SetProperty(0x23, VT_R8, propVal);
}

short CNTGraph::GetCursorStyle()
{
	short result;
	GetProperty(0x24, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetCursorStyle(short propVal)
{
	SetProperty(0x24, VT_I2, propVal);
}

BOOL CNTGraph::GetCursorVisible()
{
	BOOL result;
	GetProperty(0x25, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetCursorVisible(BOOL propVal)
{
	SetProperty(0x25, VT_BOOL, propVal);
}

short CNTGraph::GetCursorMode()
{
	short result;
	GetProperty(0x26, VT_I2, (void*)&result);
	return result;
}

void CNTGraph::SetCursorMode(short propVal)
{
	SetProperty(0x26, VT_I2, propVal);
}

CString CNTGraph::GetFormatAxisBottom()
{
	CString result;
	GetProperty(0x27, VT_BSTR, (void*)&result);
	return result;
}

void CNTGraph::SetFormatAxisBottom(LPCTSTR propVal)
{
	SetProperty(0x27, VT_BSTR, propVal);
}

CString CNTGraph::GetFormatAxisLeft()
{
	CString result;
	GetProperty(0x28, VT_BSTR, (void*)&result);
	return result;
}

void CNTGraph::SetFormatAxisLeft(LPCTSTR propVal)
{
	SetProperty(0x28, VT_BSTR, propVal);
}

BOOL CNTGraph::GetYTime()
{
	BOOL result;
	GetProperty(0x29, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetYTime(BOOL propVal)
{
	SetProperty(0x29, VT_BOOL, propVal);
}

BOOL CNTGraph::GetXTime()
{
	BOOL result;
	GetProperty(0x2a, VT_BOOL, (void*)&result);
	return result;
}

void CNTGraph::SetXTime(BOOL propVal)
{
	SetProperty(0x2a, VT_BOOL, propVal);
}

double CNTGraph::GetMinXRange()
{
	double result;
	GetProperty(0x46, VT_R8, (void*)&result);
	return result;
}

void CNTGraph::SetMinXRange(double propVal)
{
	SetProperty(0x46, VT_R8, propVal);
}

double CNTGraph::GetMaxXRange()
{
	double result;
	GetProperty(0x47, VT_R8, (void*)&result);
	return result;
}

void CNTGraph::SetMaxXRange(double propVal)
{
	SetProperty(0x47, VT_R8, propVal);
}

double CNTGraph::GetMinYRange()
{
	double result;
	GetProperty(0x48, VT_R8, (void*)&result);
	return result;
}

void CNTGraph::SetMinYRange(double propVal)
{
	SetProperty(0x48, VT_R8, propVal);
}

double CNTGraph::GetMaxYRange()
{
	double result;
	GetProperty(0x49, VT_R8, (void*)&result);
	return result;
}

void CNTGraph::SetMaxYRange(double propVal)
{
	SetProperty(0x49, VT_R8, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CNTGraph operations

void CNTGraph::SetRange(double xmin, double xmax, double ymin, double ymax)
{
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0x35, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 xmin, xmax, ymin, ymax);
}

void CNTGraph::AutoRange()
{
	InvokeHelper(0x36, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CNTGraph::CopyToClipboard()
{
	InvokeHelper(0x37, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CNTGraph::PrintGraph()
{
	InvokeHelper(0x38, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CNTGraph::AddElement()
{
	InvokeHelper(0x39, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CNTGraph::DeleteElement(short ElementID)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x3a, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ElementID);
}

void CNTGraph::ClearGraph()
{
	InvokeHelper(0x3b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

double CNTGraph::GetElementXValue(long index, short ElementID)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_I2;
	InvokeHelper(0x44, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
		index, ElementID);
	return result;
}

void CNTGraph::SetElementXValue(long index, short ElementID, double newValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_I2 VTS_R8;
	InvokeHelper(0x44, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 index, ElementID, newValue);
}

double CNTGraph::GetElementYValue(long index, short ElementID)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_I2;
	InvokeHelper(0x45, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, parms,
		index, ElementID);
	return result;
}

void CNTGraph::SetElementYValue(long index, short ElementID, double newValue)
{
	static BYTE parms[] =
		VTS_I4 VTS_I2 VTS_R8;
	InvokeHelper(0x45, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 index, ElementID, newValue);
}

void CNTGraph::PlotXY(double X, double Y, short ElementID)
{
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_I2;
	InvokeHelper(0x3c, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 X, Y, ElementID);
}

void CNTGraph::PlotY(double Y, short ElementID)
{
	static BYTE parms[] =
		VTS_R8 VTS_I2;
	InvokeHelper(0x3d, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Y, ElementID);
}

void CNTGraph::ShowProperties()
{
	InvokeHelper(0x3e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CNTGraph::SaveAs(LPCTSTR szFilename)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x3f, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 szFilename);
}

void CNTGraph::AddAnnotation()
{
	InvokeHelper(0x40, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CNTGraph::DeleteAnnotation(short annoID)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x41, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 annoID);
}

void CNTGraph::AddCursor()
{
	InvokeHelper(0x42, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CNTGraph::DeleteCursor(short cursorID)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x43, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 cursorID);
}

void CNTGraph::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}
