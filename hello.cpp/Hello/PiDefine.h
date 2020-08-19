

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Oct 20 13:01:50 2016
 */
/* Compiler settings for PiDefine.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __PiDefine_h_h__
#define __PiDefine_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_PiDefine_0000_0000 */
/* [local] */ 

typedef /* [context_handle] */ void *PCONTEXT_HDL_TYPE;

#define	BENCHMARK_PII_SCHEMA_VERSION	( 6 )

#define	BENCHMARK_PII_MAX_BARCODE_LEN	( 100 )

#define	BENCHMARK_PII_MAX_OBJ_NAME_LEN	( 64 )

#define	BENCHMARK_PII_GUID_LEN	( 39 )

#define	BENCHMARK_PII_MAX_VALUE_NAME_LEN	( 256 )

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0001
    {
        ePICallStatAOK	= 0,
        ePICallStatNotAuthorized	= ( ePICallStatAOK + 1 ) ,
        ePICallStatNotLicensed	= ( ePICallStatNotAuthorized + 1 ) ,
        ePICallStatAlreadyConnected	= ( ePICallStatNotLicensed + 1 ) ,
        ePICallStatInternalError	= ( ePICallStatAlreadyConnected + 1 ) ,
        ePICallStatIncorrectState	= ( ePICallStatInternalError + 1 ) ,
        ePICallStatInvalidContext	= ( ePICallStatIncorrectState + 1 ) ,
        ePICallStatInvalidParameter	= ( ePICallStatInvalidContext + 1 ) ,
        ePICallStatIncorrectHardware	= ( ePICallStatInvalidParameter + 1 ) ,
        ePICallStatProcessProgramNotFound	= ( ePICallStatIncorrectHardware + 1 ) ,
        ePICallStatValueNotFound	= ( ePICallStatProcessProgramNotFound + 1 ) ,
        ePICallStatLast	= ( ePICallStatValueNotFound + 1 ) 
    } 	EPICallStatus;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0002
    {
        ePIMachineTypeAccela	= 0,
        ePIMachineTypeMomentum	= ( ePIMachineTypeAccela + 1 ) ,
        ePIMachineTypeMomentumDualLane	= ( ePIMachineTypeMomentum + 1 ) ,
        ePIMachineTypeEdison	= ( ePIMachineTypeMomentumDualLane + 1 ) ,
        ePIMachineTypeLast	= ( ePIMachineTypeEdison + 1 ) 
    } 	EPIMachineType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0003
    {
        ePINotifyTypeConfiguration	= 0,
        ePINotifyTypeLogin	= ( ePINotifyTypeConfiguration + 1 ) ,
        ePINotifyTypeOperatorValidation	= ( ePINotifyTypeLogin + 1 ) ,
        ePINotifyTypeAlarm	= ( ePINotifyTypeOperatorValidation + 1 ) ,
        ePINotifyTypeState	= ( ePINotifyTypeAlarm + 1 ) ,
        ePINotifyTypeConveyor	= ( ePINotifyTypeState + 1 ) ,
        ePINotifyTypeBoard	= ( ePINotifyTypeConveyor + 1 ) ,
        ePINotifyTypeProcessProgram	= ( ePINotifyTypeBoard + 1 ) ,
        ePINotifyTypeAlignment	= ( ePINotifyTypeProcessProgram + 1 ) ,
        ePINotifyTypeInspection	= ( ePINotifyTypeAlignment + 1 ) ,
        ePINotifyTypeEnvironmental	= ( ePINotifyTypeInspection + 1 ) ,
        ePINotifyTypeTraceability	= ( ePINotifyTypeEnvironmental + 1 ) ,
        ePINotifyTypeMessage	= ( ePINotifyTypeTraceability + 1 ) ,
        ePINotifyTypeValues	= ( ePINotifyTypeMessage + 1 ) ,
        ePINotifyTypeLast	= ( ePINotifyTypeValues + 1 ) 
    } 	EPINotifyType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0004
    {
        ePIAlarmTypeMachineStatus	= 0,
        ePIAlarmTypeSystemComm	= ( ePIAlarmTypeMachineStatus + 1 ) ,
        ePIAlarmTypeAxisMove	= ( ePIAlarmTypeSystemComm + 1 ) ,
        ePIAlarmTypeAxisHome	= ( ePIAlarmTypeAxisMove + 1 ) ,
        ePIAlarmTypeProcessProgram	= ( ePIAlarmTypeAxisHome + 1 ) ,
        ePIAlarmTypeDatabase	= ( ePIAlarmTypeProcessProgram + 1 ) ,
        ePIAlarmTypeMaterial	= ( ePIAlarmTypeDatabase + 1 ) ,
        ePIAlarmTypeBoardTransport	= ( ePIAlarmTypeMaterial + 1 ) ,
        ePIAlarmTypePrintProcedure	= ( ePIAlarmTypeBoardTransport + 1 ) ,
        ePIAlarmTypeAlignment	= ( ePIAlarmTypePrintProcedure + 1 ) ,
        ePIAlarmTypeInspection	= ( ePIAlarmTypeAlignment + 1 ) ,
        ePIAlarmTypeMotionController	= ( ePIAlarmTypeInspection + 1 ) ,
        ePIAlarmTypeIOSensor	= ( ePIAlarmTypeMotionController + 1 ) ,
        ePIAlarmTypeCalibration	= ( ePIAlarmTypeIOSensor + 1 ) ,
        ePIAlarmTypeTandemMode	= ( ePIAlarmTypeCalibration + 1 ) ,
        ePIAlarmTypePlugin	= ( ePIAlarmTypeTandemMode + 1 ) ,
        ePIAlarmTypeEnvironmental	= ( ePIAlarmTypePlugin + 1 ) ,
        ePIAlarmTypeLast	= ( ePIAlarmTypeEnvironmental + 1 ) 
    } 	EPIAlarmType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0005
    {
        ePIAlarmSubTypeAny	= -1,
        ePIAlarmSubTypeNone	= ( ePIAlarmSubTypeAny + 1 ) ,
        ePIAlarmSubTypeCtlrMoveTimeout	= ( ePIAlarmSubTypeNone + 1 ) ,
        ePIAlarmSubTypeCtlrMotorStatusError	= ( ePIAlarmSubTypeCtlrMoveTimeout + 1 ) ,
        ePIAlarmSubTypeWiperPaperOut	= ( ePIAlarmSubTypeCtlrMotorStatusError + 1 ) ,
        ePIAlarmSubTypeBladesNotLeveled	= ( ePIAlarmSubTypeWiperPaperOut + 1 ) ,
        ePIAlarmSubTypeStencilNotClamped	= ( ePIAlarmSubTypeBladesNotLeveled + 1 ) ,
        ePIAlarmSubTypePasteOut	= ( ePIAlarmSubTypeStencilNotClamped + 1 ) ,
        ePIAlarmSubTypePasteOutWhileCharging	= ( ePIAlarmSubTypePasteOut + 1 ) ,
        ePIAlarmSubTypePreviewFailure	= ( ePIAlarmSubTypePasteOutWhileCharging + 1 ) ,
        ePIAlarmSubTypeBoardInspectFailure	= ( ePIAlarmSubTypePreviewFailure + 1 ) ,
        ePIAlarmSubTypeStencilInspectFailure	= ( ePIAlarmSubTypeBoardInspectFailure + 1 ) ,
        ePIAlarmSubTypeConveyorNormalLeft	= ( ePIAlarmSubTypeStencilInspectFailure + 1 ) ,
        ePIAlarmSubTypeConveyorNormalCenter	= ( ePIAlarmSubTypeConveyorNormalLeft + 1 ) ,
        ePIAlarmSubTypeConveyorNormalCenterSingle	= ( ePIAlarmSubTypeConveyorNormalCenter + 1 ) ,
        ePIAlarmSubTypeConveyorNormalRight	= ( ePIAlarmSubTypeConveyorNormalCenterSingle + 1 ) ,
        ePIAlarmSubTypeConveyorNormalLeftCenter	= ( ePIAlarmSubTypeConveyorNormalRight + 1 ) ,
        ePIAlarmSubTypeConveyorNormalRightCenter	= ( ePIAlarmSubTypeConveyorNormalLeftCenter + 1 ) ,
        ePIAlarmSubTypeConveyorProcSegLRSensorSingleTrk	= ( ePIAlarmSubTypeConveyorNormalRightCenter + 1 ) ,
        ePIAlarmSubTypeConveyorProcSegLSensorSingleTrk	= ( ePIAlarmSubTypeConveyorProcSegLRSensorSingleTrk + 1 ) ,
        ePIAlarmSubTypeConveyorProcSegRSensorSingleTrk	= ( ePIAlarmSubTypeConveyorProcSegLSensorSingleTrk + 1 ) ,
        ePIAlarmSubTypeConveyorProcSegLRSensorTripleTrk	= ( ePIAlarmSubTypeConveyorProcSegRSensorSingleTrk + 1 ) ,
        ePIAlarmSubTypeConveyorProcSegLSensorTripleTrk	= ( ePIAlarmSubTypeConveyorProcSegLRSensorTripleTrk + 1 ) ,
        ePIAlarmSubTypeConveyorProcSegRSensorTripleTrk	= ( ePIAlarmSubTypeConveyorProcSegLSensorTripleTrk + 1 ) ,
        ePIAlarmSubTypePromptManualAddPaste	= ( ePIAlarmSubTypeConveyorProcSegRSensorTripleTrk + 1 ) ,
        ePIAlarmSubTypeTrainPasteError	= ( ePIAlarmSubTypePromptManualAddPaste + 1 ) ,
        ePIAlarmSubTypePumpChargeTimeoutError	= ( ePIAlarmSubTypeTrainPasteError + 1 ) ,
        ePIAlarmSubTypeManualTrainPaste	= ( ePIAlarmSubTypePumpChargeTimeoutError + 1 ) ,
        ePIAlarmSubTypeFidNotFoundDuringProd	= ( ePIAlarmSubTypeManualTrainPaste + 1 ) ,
        ePIAlarmSubTypeStencilFidNotFoundDuringProd	= ( ePIAlarmSubTypeFidNotFoundDuringProd + 1 ) ,
        ePIAlarmSubTypeStretchErrDuringProd	= ( ePIAlarmSubTypeStencilFidNotFoundDuringProd + 1 ) ,
        ePIAlarmSubTypeWiperMoveToPosTimeout	= ( ePIAlarmSubTypeStretchErrDuringProd + 1 ) ,
        ePIAlarmSubTypePasteLow	= ( ePIAlarmSubTypeWiperMoveToPosTimeout + 1 ) ,
        ePIAlarmSubTypeWiperSolventLow	= ( ePIAlarmSubTypePasteLow + 1 ) ,
        ePIAlarmSubTypeMissingBarcodeExternal	= ( ePIAlarmSubTypeWiperSolventLow + 1 ) ,
        ePIAlarmSubTypeMissingBarcodeInternal	= ( ePIAlarmSubTypeMissingBarcodeExternal + 1 ) ,
        ePIAlarmSubTypeLess2FidsFoundDuringProd	= ( ePIAlarmSubTypeMissingBarcodeInternal + 1 ) ,
        ePIAlarmSubTypeDidNotConvergeDuringProd	= ( ePIAlarmSubTypeLess2FidsFoundDuringProd + 1 ) ,
        ePIAlarmSubTypePanelBarcodeScanError	= ( ePIAlarmSubTypeDidNotConvergeDuringProd + 1 ) ,
        ePIAlarmSubTypeCameraStrobeTimeout	= ( ePIAlarmSubTypePanelBarcodeScanError + 1 ) ,
        ePIAlarmSubTypeBoardVerifyErrorExternal	= ( ePIAlarmSubTypeCameraStrobeTimeout + 1 ) ,
        ePIAlarmSubTypeBoardVerifyErrorInternal	= ( ePIAlarmSubTypeBoardVerifyErrorExternal + 1 ) ,
        ePIAlarmSubTypePrintLimitReached	= ( ePIAlarmSubTypeBoardVerifyErrorInternal + 1 ) ,
        ePIAlarmSubTypeOpenLoopHeadMfgCalNotDone	= ( ePIAlarmSubTypePrintLimitReached + 1 ) ,
        ePIAlarmSubTypeClosedLoopHeadMfgCalNotDone	= ( ePIAlarmSubTypeOpenLoopHeadMfgCalNotDone + 1 ) ,
        ePIAlarmSubTypeToolingPinsOnTable	= ( ePIAlarmSubTypeClosedLoopHeadMfgCalNotDone + 1 ) ,
        ePIAlarmSubTypeToolingAutoPlacePins	= ( ePIAlarmSubTypeToolingPinsOnTable + 1 ) ,
        ePIAlarmSubTypeToolingAutoRemovePins	= ( ePIAlarmSubTypeToolingAutoPlacePins + 1 ) ,
        ePIAlarmSubTypeToolingCarouselEmpty	= ( ePIAlarmSubTypeToolingAutoRemovePins + 1 ) ,
        ePIAlarmSubTypeToolingCarouselFull	= ( ePIAlarmSubTypeToolingCarouselEmpty + 1 ) ,
        ePIAlarmSubTypeToolingDataFileReadErr	= ( ePIAlarmSubTypeToolingCarouselFull + 1 ) ,
        ePIAlarmSubTypeToolingPinPickupLowerErr	= ( ePIAlarmSubTypeToolingDataFileReadErr + 1 ) ,
        ePIAlarmSubTypeTrackResizeErrorToolingDetected	= ( ePIAlarmSubTypeToolingPinPickupLowerErr + 1 ) ,
        ePIAlarmSubTypeBoardZHeightOutOfRange	= ( ePIAlarmSubTypeTrackResizeErrorToolingDetected + 1 ) ,
        ePIAlarmSubTypeTrackResizeErrToolingPinsDetected	= ( ePIAlarmSubTypeBoardZHeightOutOfRange + 1 ) ,
        ePIAlarmSubTypeBSXChangedWithToolingDownErr	= ( ePIAlarmSubTypeTrackResizeErrToolingPinsDetected + 1 ) ,
        ePIAlarmSubTypeHandScanPasteBarcodeMatchError	= ( ePIAlarmSubTypeBSXChangedWithToolingDownErr + 1 ) ,
        ePIAlarmSubTypePromptManualStencilClean	= ( ePIAlarmSubTypeHandScanPasteBarcodeMatchError + 1 ) ,
        ePIAlarmSubTypePromptRemoveAndCleanStencil	= ( ePIAlarmSubTypePromptManualStencilClean + 1 ) ,
        ePIAlarmSubTypePassiveLaneTransportError	= ( ePIAlarmSubTypePromptRemoveAndCleanStencil + 1 ) ,
        ePIAlarmSubTypeTriggerManualInspect	= ( ePIAlarmSubTypePassiveLaneTransportError + 1 ) ,
        ePIAlarmSubTypeGridToolingNotLocked	= ( ePIAlarmSubTypeTriggerManualInspect + 1 ) ,
        ePIAlarmSubTypeTrainStencilError	= ( ePIAlarmSubTypeGridToolingNotLocked + 1 ) ,
        ePIAlarmSubTypeBDMaterialLow	= ( ePIAlarmSubTypeTrainStencilError + 1 ) ,
        ePIAlarmSubTypePumpFillTimeout	= ( ePIAlarmSubTypeBDMaterialLow + 1 ) ,
        ePIAlarmSubTypeChamberOverpressure	= ( ePIAlarmSubTypePumpFillTimeout + 1 ) ,
        ePIAlarmSubTypeRequiredAppNotConnected	= ( ePIAlarmSubTypeChamberOverpressure + 1 ) ,
        ePIAlarmSubTypeTemperatureOutOfRangeErr	= ( ePIAlarmSubTypeRequiredAppNotConnected + 1 ) ,
        ePIAlarmSubTypeTemperatureOutOfRangeWarn	= ( ePIAlarmSubTypeTemperatureOutOfRangeErr + 1 ) ,
        ePIAlarmSubTypeHumidityOutOfRangeErr	= ( ePIAlarmSubTypeTemperatureOutOfRangeWarn + 1 ) ,
        ePIAlarmSubTypeHumidityOutOfRangeWarn	= ( ePIAlarmSubTypeHumidityOutOfRangeErr + 1 ) ,
        ePIAlarmSubTypeLast	= ( ePIAlarmSubTypeHumidityOutOfRangeWarn + 1 ) 
    } 	EPIAlarmSubType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0006
    {
        ePIAlarmSeverityOperator	= 0,
        ePIAlarmSeverityEquipment	= ( ePIAlarmSeverityOperator + 1 ) ,
        ePIAlarmSeverityMaterial	= ( ePIAlarmSeverityEquipment + 1 ) ,
        ePIAlarmSeverityWarning	= ( ePIAlarmSeverityMaterial + 1 ) ,
        ePIAlarmSeverityLast	= ( ePIAlarmSeverityWarning + 1 ) 
    } 	EPIAlarmSeverity;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0007
    {
        ePIAlarmActionTriggered	= 0,
        ePIAlarmActionCleared	= ( ePIAlarmActionTriggered + 1 ) ,
        ePIAlarmActionLast	= ( ePIAlarmActionCleared + 1 ) 
    } 	EPIAlarmAction;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0008
    {
        ePIAlarmSysStateClear	= 0,
        ePIAlarmSysStateErrUnackd	= ( ePIAlarmSysStateClear + 1 ) ,
        ePIAlarmSysStateError	= ( ePIAlarmSysStateErrUnackd + 1 ) ,
        ePIAlarmSysStateWarngUnackd	= ( ePIAlarmSysStateError + 1 ) ,
        ePIAlarmSysStateWarning	= ( ePIAlarmSysStateWarngUnackd + 1 ) ,
        ePIAlarmSysStateLast	= ( ePIAlarmSysStateWarning + 1 ) 
    } 	EPIAlarmSysState;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0009
    {
        ePISysMSUninitialized	= 0,
        ePISysMSInitializing	= ( ePISysMSUninitialized + 1 ) ,
        ePISysMSWtgConvEmpty	= ( ePISysMSInitializing + 1 ) ,
        ePISysMSWtgConvLoad	= ( ePISysMSWtgConvEmpty + 1 ) ,
        ePISysMSInitFailed	= ( ePISysMSWtgConvLoad + 1 ) ,
        ePISysMSUnlocked	= ( ePISysMSInitFailed + 1 ) ,
        ePISysMSNotReady	= ( ePISysMSUnlocked + 1 ) ,
        ePISysMSReady	= ( ePISysMSNotReady + 1 ) ,
        ePISysMSProcessing	= ( ePISysMSReady + 1 ) ,
        ePISysMSSetup	= ( ePISysMSProcessing + 1 ) ,
        ePISysMSPaused	= ( ePISysMSSetup + 1 ) ,
        ePISysMSPausedOnWaferVacError	= ( ePISysMSPaused + 1 ) ,
        ePISysMSPausedWaitingPaste	= ( ePISysMSPausedOnWaferVacError + 1 ) ,
        ePISysMSPausedWtgDispRefill	= ( ePISysMSPausedWaitingPaste + 1 ) ,
        ePISysMSPausedWtgWiperRefill	= ( ePISysMSPausedWtgDispRefill + 1 ) ,
        ePISysMSWtgBoardForKnead	= ( ePISysMSPausedWtgWiperRefill + 1 ) ,
        ePISysMSWtgKneadOption	= ( ePISysMSWtgBoardForKnead + 1 ) ,
        ePISysMSPausedWithError	= ( ePISysMSWtgKneadOption + 1 ) ,
        ePISysMSLast	= ( ePISysMSPausedWithError + 1 ) 
    } 	EPISysMachineState;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0010
    {
        ePIProcPrgmActionSelected	= 0,
        ePIProcPrgmActionUnselected	= ( ePIProcPrgmActionSelected + 1 ) ,
        ePIProcPrgmActionModified	= ( ePIProcPrgmActionUnselected + 1 ) ,
        ePIProcPrgmActionLast	= ( ePIProcPrgmActionModified + 1 ) 
    } 	EPIProcPrgmAction;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0011
    {
        ePIConveyorDirectionLtoR	= 0,
        ePIConveyorDirectionRtoL	= ( ePIConveyorDirectionLtoR + 1 ) ,
        ePIConveyorDirectionRtoR	= ( ePIConveyorDirectionRtoL + 1 ) ,
        ePIConveyorDirectionLtoL	= ( ePIConveyorDirectionRtoR + 1 ) ,
        ePIConveyorDirectionLast	= ( ePIConveyorDirectionLtoL + 1 ) 
    } 	EPIConveyorDirection;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0012
    {
        ePIPumpBladeTypePump	= 0,
        ePIPumpBladeTypeBlade	= ( ePIPumpBladeTypePump + 1 ) ,
        ePIPumpBladeTypeLast	= ( ePIPumpBladeTypeBlade + 1 ) 
    } 	EPIPumpBladeType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0013
    {
        ePIConvSysStateBlocked	= 0,
        ePIConvSysStateNotBlocked	= ( ePIConvSysStateBlocked + 1 ) ,
        ePIConvSysStateStarved	= ( ePIConvSysStateNotBlocked + 1 ) ,
        ePIConvSysStateNotStarved	= ( ePIConvSysStateStarved + 1 ) ,
        ePIConvSysStateLast	= ( ePIConvSysStateNotStarved + 1 ) 
    } 	EPIConvSysState;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0014
    {
        ePI2dBrdDtypeCtrstCvg	= 0,
        ePI2dBrdDtypeTxturCvg	= ( ePI2dBrdDtypeCtrstCvg + 1 ) ,
        ePI2dBrdDtypePasteXfr	= ( ePI2dBrdDtypeTxturCvg + 1 ) ,
        ePI2dBrdDtypeBridgGap	= ( ePI2dBrdDtypePasteXfr + 1 ) ,
        ePI2dBrdDtypeBrdgSpan	= ( ePI2dBrdDtypeBridgGap + 1 ) ,
        ePI2dBrdDtypeLast	= ( ePI2dBrdDtypeBrdgSpan + 1 ) 
    } 	EPI2dBrdDtype;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0015
    {
        ePI2dDtypeMin	= 0,
        ePI2dDtypeMax	= ( ePI2dDtypeMin + 1 ) ,
        ePI2dDtypeAvg	= ( ePI2dDtypeMax + 1 ) ,
        ePI2dDtypeLast	= ( ePI2dDtypeAvg + 1 ) 
    } 	EPI2dDtype;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0016
    {
        ePI2dStlDtypeBlockage	= 0,
        ePI2dStlDtypeBridgGap	= ( ePI2dStlDtypeBlockage + 1 ) ,
        ePI2dStlDtypeBrdgSpan	= ( ePI2dStlDtypeBridgGap + 1 ) ,
        ePI2dStlDtypeLast	= ( ePI2dStlDtypeBrdgSpan + 1 ) 
    } 	EPI2dStlDtype;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0017
    {
        ePIProcessedStatusAOK	= 0,
        ePIProcessedStatusError	= ( ePIProcessedStatusAOK + 1 ) ,
        ePIProcessedStatusLast	= ( ePIProcessedStatusError + 1 ) 
    } 	EPIProcessedStatus;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0018
    {
        ePIPublishedValueTypeDouble	= 0,
        ePIPublishedValueTypeBool	= ( ePIPublishedValueTypeDouble + 1 ) ,
        ePIPublishedValueTypeInt	= ( ePIPublishedValueTypeBool + 1 ) ,
        ePIPublishedValueTypeString	= ( ePIPublishedValueTypeInt + 1 ) ,
        ePIPublishedValueTypeLast	= ( ePIPublishedValueTypeString + 1 ) 
    } 	EPIPublishedValueType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0019
    {
        ePIPublishedValueUnitsDistanceMm	= 0,
        ePIPublishedValueUnitsSpeedMmPerSec	= ( ePIPublishedValueUnitsDistanceMm + 1 ) ,
        ePIPublishedValueUnitsAccelMmPerSecPerSec	= ( ePIPublishedValueUnitsSpeedMmPerSec + 1 ) ,
        ePIPublishedValueUnitsForceKg	= ( ePIPublishedValueUnitsAccelMmPerSecPerSec + 1 ) ,
        ePIPublishedValueUnitsPressureBar	= ( ePIPublishedValueUnitsForceKg + 1 ) ,
        ePIPublishedValueUnitsAreaMmXMm	= ( ePIPublishedValueUnitsPressureBar + 1 ) ,
        ePIPublishedValueUnitsTempDegC	= ( ePIPublishedValueUnitsAreaMmXMm + 1 ) ,
        ePIPublishedValueUnitsOther	= ( ePIPublishedValueUnitsTempDegC + 1 ) ,
        ePIPublishedValueUnitsLast	= ( ePIPublishedValueUnitsOther + 1 ) 
    } 	EPIPublishedValueUnits;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0020
    {
        ePIWipePaperFeedModeUndefined	= -1,
        ePIWipePaperFeedModeIndex	= ( ePIWipePaperFeedModeUndefined + 1 ) ,
        ePIWipePaperFeedModeContinuous	= ( ePIWipePaperFeedModeIndex + 1 ) ,
        ePIWipePaperFeedModeLast	= ( ePIWipePaperFeedModeContinuous + 1 ) 
    } 	EPIWipePaperFeedMode;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0021
    {
        ePIWipeStrokeTypeUndefined	= -1,
        ePIWipeStrokeTypeDryR2F	= ( ePIWipeStrokeTypeUndefined + 1 ) ,
        ePIWipeStrokeTypeDryF2R	= ( ePIWipeStrokeTypeDryR2F + 1 ) ,
        ePIWipeStrokeTypeSolventR2F	= ( ePIWipeStrokeTypeDryF2R + 1 ) ,
        ePIWipeStrokeTypeSolventF2R	= ( ePIWipeStrokeTypeSolventR2F + 1 ) ,
        ePIWipeStrokeTypeVacuumR2F	= ( ePIWipeStrokeTypeSolventF2R + 1 ) ,
        ePIWipeStrokeTypeVacuumF2R	= ( ePIWipeStrokeTypeVacuumR2F + 1 ) ,
        ePIWipeStrokeTypeVacuumSolventF2R	= ( ePIWipeStrokeTypeVacuumF2R + 1 ) ,
        ePIWipeStrokeTypeLast	= ( ePIWipeStrokeTypeVacuumSolventF2R + 1 ) 
    } 	EPIWipeStrokeType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0022
    {
        PIWipeEventTypeUndefined	= -1,
        PIWipeEventTypeBoard	= ( PIWipeEventTypeUndefined + 1 ) ,
        PIWipeEventTypeInspFail	= ( PIWipeEventTypeBoard + 1 ) ,
        PIWipeEventTypeIdle	= ( PIWipeEventTypeInspFail + 1 ) ,
        PIWipeEventTypeDispense	= ( PIWipeEventTypeIdle + 1 ) ,
        PIWipeEventTypeUserDef	= ( PIWipeEventTypeDispense + 1 ) ,
        PIWipeEventTypeStencilInspFail	= ( PIWipeEventTypeUserDef + 1 ) ,
        PIWipeEventTypeAuerBoatComplete	= ( PIWipeEventTypeStencilInspFail + 1 ) ,
        PIWipeEventTypeManualCleanTimer	= ( PIWipeEventTypeAuerBoatComplete + 1 ) ,
        PIWipeEventTypeCleanAndRemoveTimer	= ( PIWipeEventTypeManualCleanTimer + 1 ) ,
        PIWipeEventTypeWipeNowManualClean	= ( PIWipeEventTypeCleanAndRemoveTimer + 1 ) ,
        PIWipeEventTypeWipeNowManualRemove	= ( PIWipeEventTypeWipeNowManualClean + 1 ) ,
        PIWipeEventTypeWipeTest	= ( PIWipeEventTypeWipeNowManualRemove + 1 ) ,
        PIWipeEventTypeLast	= ( PIWipeEventTypeWipeTest + 1 ) 
    } 	EPIWipeEventType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0023
    {
        PISnapoffMoveTypeUnknown	= 0,
        PISnapoffMoveTypeContinuous	= ( PISnapoffMoveTypeUnknown + 1 ) ,
        PISnapoffMoveTypeStepDown	= ( PISnapoffMoveTypeContinuous + 1 ) ,
        PISnapoffMoveTypeLast	= ( PISnapoffMoveTypeStepDown + 1 ) 
    } 	EPISnapoffMoveType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_PiDefine_0000_0000_0024
    {
        PIBarcodeSourceUndefined	= 0,
        PIBarcodeSourceUpstreamScanner	= ( PIBarcodeSourceUndefined + 1 ) ,
        PIBarcodeSourceInputSegScanner	= ( PIBarcodeSourceUpstreamScanner + 1 ) ,
        PIBarcodeSourceExternalClient	= ( PIBarcodeSourceInputSegScanner + 1 ) ,
        PIBarcodeSourceCamera	= ( PIBarcodeSourceExternalClient + 1 ) ,
        PIBarcodeSourceLast	= ( PIBarcodeSourceCamera + 1 ) 
    } 	EPIBarcodeSource;



extern RPC_IF_HANDLE __MIDL_itf_PiDefine_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PiDefine_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


