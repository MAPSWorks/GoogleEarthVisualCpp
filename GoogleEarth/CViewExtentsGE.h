// ��ǻ�Ϳ��� ���� ���̺귯�� �������� [Ŭ���� �߰�]�� ����Ͽ� ������ IDispatch ���� Ŭ�����Դϴ�.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CViewExtentsGE ���� Ŭ����

class CViewExtentsGE : public COleDispatchDriver
{
public:
	CViewExtentsGE() {} // COleDispatchDriver �⺻ �����ڸ� ȣ���մϴ�.
	CViewExtentsGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CViewExtentsGE(const CViewExtentsGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Ư��
public:

	// �۾�
public:


	// IViewExtentsGE �޼���
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

	// IViewExtentsGE �Ӽ�
public:

};
