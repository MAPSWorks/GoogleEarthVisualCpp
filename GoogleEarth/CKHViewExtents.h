// ��ǻ�Ϳ��� ���� ���̺귯�� �������� [Ŭ���� �߰�]�� ����Ͽ� ������ IDispatch ���� Ŭ�����Դϴ�.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CKHViewExtents ���� Ŭ����

class CKHViewExtents : public COleDispatchDriver
{
public:
	CKHViewExtents() {} // COleDispatchDriver �⺻ �����ڸ� ȣ���մϴ�.
	CKHViewExtents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CKHViewExtents(const CKHViewExtents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Ư��
public:

	// �۾�
public:


	// IKHViewExtents �޼���
public:
	double get_North()
	{
		double result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	double get_South()
	{
		double result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	double get_East()
	{
		double result;
		InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}
	double get_West()
	{
		double result;
		InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, nullptr);
		return result;
	}

	// IKHViewExtents �Ӽ�
public:

};
