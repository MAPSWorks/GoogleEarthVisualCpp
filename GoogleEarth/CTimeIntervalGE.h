// ��ǻ�Ϳ��� ���� ���̺귯�� �������� [Ŭ���� �߰�]�� ����Ͽ� ������ IDispatch ���� Ŭ�����Դϴ�.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CTimeIntervalGE ���� Ŭ����

class CTimeIntervalGE : public COleDispatchDriver
{
public:
	CTimeIntervalGE() {} // COleDispatchDriver �⺻ �����ڸ� ȣ���մϴ�.
	CTimeIntervalGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CTimeIntervalGE(const CTimeIntervalGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Ư��
public:

	// �۾�
public:


	// ITimeIntervalGE �޼���
public:
	LPDISPATCH get_BeginTime()
	{
		LPDISPATCH result;
		InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH get_EndTime()
	{
		LPDISPATCH result;
		InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}

	// ITimeIntervalGE �Ӽ�
public:

};
