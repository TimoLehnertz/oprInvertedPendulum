///////////////////////////////////////////////////////////////////////////////
// PLC_SteuerungClassFactory.cpp
#include "TcPch.h"
#pragma hdrstop

#include "PLC_SteuerungClassFactory.h"
#include "PLC_SteuerungServices.h"
#include "PLC_SteuerungVersion.h"
#include "KM_App_Main.h"

BEGIN_CLASS_MAP(CPLC_SteuerungClassFactory)
///<AutoGeneratedContent id="ClassMap">
	CLASS_ENTRY(CID_PLC_SteuerungCKM_App_Main, SRVNAME_PLC_STEUERUNG "!CKM_App_Main", CKM_App_Main)
///</AutoGeneratedContent>
END_CLASS_MAP()

CPLC_SteuerungClassFactory::CPLC_SteuerungClassFactory() : CObjClassFactory()
{
  TcDbgUnitSetImageName(TCDBG_UNIT_IMAGE_NAME(SRVNAME_PLC_STEUERUNG)); 
#if defined(TCDBG_UNIT_VERSION)
  TcDbgUnitSetVersion(TCDBG_UNIT_VERSION(PLC_Steuerung));
#endif //defined(TCDBG_UNIT_VERSION)
}
