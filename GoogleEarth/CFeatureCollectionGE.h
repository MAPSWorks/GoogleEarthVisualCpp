// ��ǻ�Ϳ��� ���� ���̺귯�� �������� [Ŭ���� �߰�]�� ����Ͽ� ������ IDispatch ���� Ŭ�����Դϴ�.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CFeatureCollectionGE ���� Ŭ����

class CFeatureCollectionGE : public COleDispatchDriver
{
public:
	CFeatureCollectionGE() {} // COleDispatchDriver �⺻ �����ڸ� ȣ���մϴ�.
	CFeatureCollectionGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CFeatureCollectionGE(const CFeatureCollectionGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Ư��
public:

	// �۾�
public:


	// IFeatureCollectionGE �޼���
public:
	LPUNKNOWN get__NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH get_Item(long index)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, index);
		return result;
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	// IFeatureCollectionGE �Ӽ�
public:

};
