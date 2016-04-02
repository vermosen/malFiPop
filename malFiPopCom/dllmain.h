// dllmain.h : Declaration of module class.

class CmalFiPopComModule : public ATL::CAtlDllModuleT< CmalFiPopComModule >
{
public :
	DECLARE_LIBID(LIBID_malFiPopComLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MALFIPOPCOM, "{C9E1B318-35BB-4B1B-8E45-1C16820099C8}")
};

extern class CmalFiPopComModule _AtlModule;
