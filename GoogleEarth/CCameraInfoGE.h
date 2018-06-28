// ��ǻ�Ϳ��� ���� ���̺귯�� �������� [Ŭ���� �߰�]�� ����Ͽ� ������ IDispatch ���� Ŭ�����Դϴ�.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CCameraInfoGE ���� Ŭ����

class CCameraInfoGE : public COleDispatchDriver
{
public:
	CCameraInfoGE() {} // COleDispatchDriver �⺻ �����ڸ� ȣ���մϴ�.
	CCameraInfoGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCameraInfoGE(const CCameraInfoGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Ư��
public:

	// �۾�
public:


	// ICameraInfoGE �޼���
public:
	double get_FocusPointLatitude()
	{
		double result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_FocusPointLatitude(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	double get_FocusPointLongitude()
	{
		double result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_FocusPointLongitude(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	double get_FocusPointAltitude()
	{
		double result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_FocusPointAltitude(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	long get_FocusPointAltitudeMode()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}
	void put_FocusPointAltitudeMode(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	double get_Range()
	{
		double result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_Range(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	double get_Tilt()
	{
		double result;
		InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_Tilt(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	double get_Azimuth()
	{
		double result;
		InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_Azimuth(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	// ICameraInfoGE �Ӽ�
public:

};
