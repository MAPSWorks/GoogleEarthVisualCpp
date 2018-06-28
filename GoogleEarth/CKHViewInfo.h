// ��ǻ�Ϳ��� ���� ���̺귯�� �������� [Ŭ���� �߰�]�� ����Ͽ� ������ IDispatch ���� Ŭ�����Դϴ�.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CKHViewInfo ���� Ŭ����

class CKHViewInfo : public COleDispatchDriver
{
public:
	CKHViewInfo() {} // COleDispatchDriver �⺻ �����ڸ� ȣ���մϴ�.
	CKHViewInfo(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CKHViewInfo(const CKHViewInfo& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Ư��
public:

	// �۾�
public:


	// IKHViewInfo �޼���
public:
	double get_Latitude()
	{
		double result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_Latitude(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	double get_Longitude()
	{
		double result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_Longitude(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	double get_Range()
	{
		double result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_Range(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	double get_Tilt()
	{
		double result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_Tilt(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	double get_Azimuth()
	{
		double result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	void put_Azimuth(double newValue)
	{
		static BYTE parms[] = VTS_R8;
		InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}

	// IKHViewInfo �Ӽ�
public:

};
