// ��ǻ�Ϳ��� ���� ���̺귯�� �������� [Ŭ���� �߰�]�� ����Ͽ� ������ IDispatch ���� Ŭ�����Դϴ�.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CKHFeature ���� Ŭ����

class CKHFeature : public COleDispatchDriver
{
public:
	CKHFeature() {} // COleDispatchDriver �⺻ �����ڸ� ȣ���մϴ�.
	CKHFeature(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CKHFeature(const CKHFeature& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Ư��
public:

	// �۾�
public:


	// IKHFeature �޼���
public:
	long get_Visibility()
	{
		long result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}
	void put_Visibility(long newValue)
	{
		static BYTE parms[] = VTS_I4;
		InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, nullptr, parms, newValue);
	}
	long get_HasView()
	{
		long result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, nullptr);
		return result;
	}

	// IKHFeature �Ӽ�
public:

};
