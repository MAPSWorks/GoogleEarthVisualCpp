// ��ǻ�Ϳ��� ���� ���̺귯�� �������� [Ŭ���� �߰�]�� ����Ͽ� ������ IDispatch ���� Ŭ�����Դϴ�.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CPointOnTerrainGE ���� Ŭ����

class CPointOnTerrainGE : public COleDispatchDriver
{
public:
	CPointOnTerrainGE() {} // COleDispatchDriver �⺻ �����ڸ� ȣ���մϴ�.
	CPointOnTerrainGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CPointOnTerrainGE(const CPointOnTerrainGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Ư��
public:

	// �۾�
public:


	// IPointOnTerrainGE �޼���
public:
	double get_Latitude()
	{
		double result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	double get_Longitude()
	{
		double result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	double get_Altitude()
	{
		double result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	long get_ProjectedOntoGlobe()
	{
		long result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}
	long get_ZeroElevationExaggeration()
	{
		long result;
		InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	// IPointOnTerrainGE �Ӽ�
public:

};
