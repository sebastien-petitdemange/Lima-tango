static const char *RcsId = "$Id $";
//+=============================================================================
//
// file :         PrincetonCCDStateMachine.cpp
//
// description :  C++ source for the PrincetonCCD and its alowed
//                methods for commands and attributes
//
// project :      TANGO Device Server
//
// $Author:  $
//
// $Revision:  $
// $Date:  $
//
// SVN only:
// $HeadURL: $
//
// CVS only:
// $Source:  $
// $Log:  $
//
// copyleft :     European Synchrotron Radiation Facility
//                BP 220, Grenoble 38043
//                FRANCE
//
//-=============================================================================
//
//  		This file is generated by POGO
//	(Program Obviously used to Generate tango Object)
//
//         (c) - Software Engineering Group - ESRF
//=============================================================================
#ifdef WIN32
#include "tango.h"
#endif

#include <PrincetonCCD.h>
#include <PrincetonCCDClass.h>

#ifndef WIN32
#include "tango.h"
#endif


/*====================================================================
 *	This file contains the methods to allow commands and attributes
 * read or write execution.
 *
 * If you wand to add your own code, add it between 
 * the "End/Re-Start of Generated Code" comments.
 *
 * If you want, you can also add your own methods.
 *====================================================================
 */

namespace PrincetonCCD_ns
{

//=================================================
//		Attributes Allowed Methods
//=================================================



//+----------------------------------------------------------------------------
//
// method : 		PrincetonCCD::is_temperature_allowed
// 
// description : 	Read/Write allowed for temperature attribute.
//
//-----------------------------------------------------------------------------
bool PrincetonCCD::is_temperature_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
		{
           return true;
		}
		
		if ( get_state()==Tango::FAULT && is_device_initialized() )
		{
           return true;
		}
		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		PrincetonCCD::is_temperatureTarget_allowed
// 
// description : 	Read/Write allowed for temperatureTarget attribute.
//
//-----------------------------------------------------------------------------
bool PrincetonCCD::is_temperatureTarget_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
		{
           return true;
		}
		
		if ( get_state()==Tango::FAULT && is_device_initialized() )
		{
           return true;
		}
		//	Re-Start of Generated Code
		return false;
	}
	return true;
}

//+----------------------------------------------------------------------------
//
// method : 		PrincetonCCD::is_shutterMode_allowed
// 
// description : 	Read/Write allowed for shutterMode attribute.
//
//-----------------------------------------------------------------------------
bool PrincetonCCD::is_shutterMode_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
		{
           return true;
		}
		
		if ( get_state()==Tango::FAULT && is_device_initialized() )
		{
           return true;
		}
		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		PrincetonCCD::is_internalAcquisitionMode_allowed
// 
// description : 	Read/Write allowed for internalAcquisitionMode attribute.
//
//-----------------------------------------------------------------------------
bool PrincetonCCD::is_internalAcquisitionMode_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
		{
           return true;
		}
		
		if ( get_state()==Tango::FAULT && is_device_initialized() )
		{
           return true;
		}
		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		PrincetonCCD::is_currentRate_allowed
// 
// description : 	Read/Write allowed for currentRate attribute.
//
//-----------------------------------------------------------------------------
bool PrincetonCCD::is_currentRate_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
		{
           return true;
		}
		
		if ( get_state()==Tango::FAULT && is_device_initialized() )
		{
           return true;
		}
		//	Re-Start of Generated Code
		return false;
	}
	return true;
}
//+----------------------------------------------------------------------------
//
// method : 		PrincetonCCD::is_gain_allowed
// 
// description : 	Read/Write allowed for gain attribute.
//
//-----------------------------------------------------------------------------
bool PrincetonCCD::is_gain_allowed(Tango::AttReqType type)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code
		if ( get_state()==Tango::RUNNING && type==Tango::READ_REQ )
		{
           return true;
		}
		
		if ( get_state()==Tango::FAULT && is_device_initialized() )
		{
           return true;
		}
		//	Re-Start of Generated Code
		return false;
	}
	return true;
}

//=================================================
//		Commands Allowed Methods
//=================================================

//+----------------------------------------------------------------------------
//
// method : 		PrincetonCCD::is_SetADCMode_allowed
// 
// description : 	Execution allowed for SetADCMode command.
//
//-----------------------------------------------------------------------------
bool PrincetonCCD::is_SetADCMode_allowed(const CORBA::Any &any)
{
	if (get_state() == Tango::INIT	||
		get_state() == Tango::FAULT	||
		get_state() == Tango::RUNNING)
	{
		//	End of Generated Code

		//	Re-Start of Generated Code
		return false;
	}
	return true;
}

}	// namespace PrincetonCCD_ns
