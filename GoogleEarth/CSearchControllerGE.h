// ��ǻ�Ϳ��� ���� ���̺귯�� �������� [Ŭ���� �߰�]�� ����Ͽ� ������ IDispatch ���� Ŭ�����Դϴ�.

#import "C:\\Program Files (x86)\\Google\\Google Earth Pro\\client\\googleearth.exe" no_namespace
// CSearchControllerGE ���� Ŭ����

class CSearchControllerGE : public COleDispatchDriver
{
public:
	CSearchControllerGE() {} // COleDispatchDriver �⺻ �����ڸ� ȣ���մϴ�.
	CSearchControllerGE(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CSearchControllerGE(const CSearchControllerGE& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Ư��
public:

	// �۾�
public:


	// ISearchControllerGE �޼���
public:
	void Search(LPCTSTR searchString)
	{
		static BYTE parms[] = VTS_BSTR;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, nullptr, parms, searchString);
	}
	long IsSearchInProgress()
	{
		long result;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_I4, (void*)&result, nullptr);
		return result;
	}
	LPDISPATCH GetResults()
	{
		LPDISPATCH result;
		InvokeHelper(0x3, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, nullptr);
		return result;
	}
	void ClearResults()
	{
		InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, nullptr, nullptr);
	}

	// ISearchControllerGE �Ӽ�
public:

};
