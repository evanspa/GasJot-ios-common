//
//  FPTransactionCodes.h
//  PEFuelPurchase-Common
//
//  Created by Evans, Paul on 3/26/14.
//  Copyright (c) 2014 Paul Evans. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma mark - Application Transaction Use Cases

typedef NS_ENUM(NSInteger, FPAppTxnUsecase) {
  // User related (All user-related use cases happen in real-time vis-a-vis
  // the server; i.e., there are no "LocalXXXUser" use cases).
  FPTxnCreateAccount,
  FPTxnLogin,
  FPTxnEditUser,
  FPTxnSyncUser,
  
  // Vehicle related
  FPTxnLocalCreateVehicle,
  FPTxnLocalEditVehicle,
  FPTxnSyncVehicle,
  
  // Fuel Station related
  FPTxnLocalCreateFuelStation,
  FPTxnLocalEditFuelStation,
  FPTxnSyncFuelStation,
  
  // Fuel Purchase Log related
  FPTxnLocalCreateFpLog,
  FPTxnLocalEditFpLog,
  FPTxnSyncFpLog,
  
  // Environment Log related
  FPTxnLocalCreateEnvLog,
  FPTxnLocalEditEnvLog,
  FPTxnSyncEnvLog
};

// -----------------------------------------------------------------------------
//   User-related Use Case Events
// -----------------------------------------------------------------------------

#pragma mark - User Account Creation Use Case Events

typedef NS_ENUM(NSInteger, FPTxnCreateUserUsecaseEvent) {
  FPTxnCreateUserEvtInitiated,
  FPTxnCreateUserEvtCanceled,
  FPTxnCreateUserEvtRemoteAttempted,
  FPTxnCreateUserEvtRemoteProcStarted,        // recorded server-side
  FPTxnCreateUserEvtRemoteProcDoneErrOccured, // recorded server-side
  FPTxnCreateUserEvtRemoteProcDoneSuccess,    // recorded server-side
  FPTxnCreateUserEvtRemoteAttemptRespReceived
};

#pragma mark - User Login Use Case Events

typedef NS_ENUM(NSInteger, FPTxnLoginUsecaseEvent) {
  FPTxnLoginEvtInitiated,
  FPTxnLoginEvtCanceled,
  FPTxnLoginEvtRemoteAttempted,
  FPTxnLoginEvtRemoteProcStarted,        // recorded server-side
  FPTxnLoginEvtRemoteProcDoneErrOccured, // recorded server-side
  FPTxnLoginEvtRemoteProcDoneInvalid,    // recorded server-side
  FPTxnLoginEvtRemoteProcDoneSuccess,    // recorded server-side
  FPTxnLoginEvtRemoteAttemptRespReceived
};

#pragma mark - User Edit Use Case Events

typedef NS_ENUM(NSInteger, FPTxnEditUserUsecaseEvent) {
  FPTxnEditUserEvtInitiated,
  FPTxnEditUserEvtCanceled,
  FPTxnEditUserEvtRemoteAttempted,
  FPTxnEditUserEvtRemoteProcStarted,        // recorded server-side
  FPTxnEditUserEvtRemoteProcDoneErrOccured, // recorded server-side
  FPTxnEditUserEvtRemoteProcDoneSuccess,    // recorded server-side
  FPTxnEditUserEvtRemoteAttemptRespReceived
};

#pragma mark - User Sync transaction events

typedef NS_ENUM(NSInteger, FPTxnSyncUserUsecaseEvent) {
  FPTxnSyncUserEvtInitiated,
  FPTxnSyncUserEvtRemoteAttempted,
  FPTxnSyncUserEvtRemoteSkippedDueToNoConn,
  __FPTxnSyncUserEvtRemoteProcStarted,        // recorded server-side
  __FPTxnSyncUserEvtRemoteProcDoneErrOccured, // recorded server-side
  __FPTxnSyncUserEvtRemoteProcDoneSuccess,    // recorded server-side
  FPTxnSyncUserEvtSaveToRemoteRespReceived
};

// -----------------------------------------------------------------------------
//   Vehicle-related Use Case Events
// -----------------------------------------------------------------------------

#pragma mark - Vehicle Local Creation Use Case Events

typedef NS_ENUM(NSInteger, FPTxnLocalCreateVehicleUsecaseEvent) {
  FPTxnLocalCreateVehicleEvtInitiated,
  FPTxnLocalCreateVehicleEvtDone,
  FPTxnLocalCreateVehicleEvtCanceled
};

#pragma mark - Vehicle Local Edit Use Case Events

typedef NS_ENUM(NSInteger, FPTxnLocalEditVehicleUsecaseEvent) {
  FPTxnLocalEditVehicleEvtInitiated,
  FPTxnLocalEditVehicleEvtDone,
  FPTxnLocalEditVehicleEvtCanceled
};

#pragma mark - Vehicle Sync Use Case Events

typedef NS_ENUM(NSInteger, FPTxnSyncVehicleUsecaseEvent) {
  FPTxnSyncVehicleEvtInitiated,
  FPTxnSyncVehicleEvtSaveToRemoteStoreAttempted,
  FPTxnSyncVehicleEvtSaveToRemoteStoreSkippedDueToNoConn,
  __FPTxnSyncVehicleEvtRemoteProcStarted,        // recorded server-side
  __FPTxnSyncVehicleEvtRemoteProcDoneErrOccured, // recorded server-side
  __FPTxnSyncVehicleEvtRemoteProcDoneSuccess,    // recorded server-side
  FPTxnSyncVehicleEvtSaveToRemoteRespReceived
};

// -----------------------------------------------------------------------------
//   Fuel Station-related Use Case Events
// -----------------------------------------------------------------------------

#pragma mark - Fuel Station Local Creation Use Case Events

typedef NS_ENUM(NSInteger, FPTxnLocalCreateFuelStationUsecaseEvent) {
  FPTxnLocalCreateFuelStationEvtInitiated,
  FPTxnLocalCreateFuelStationEvtDone,
  FPTxnLocalCreateFuelStationEvtCanceled
};

#pragma mark - Fuel Station Local Edit Use Case Events

typedef NS_ENUM(NSInteger, FPTxnLocalEditFuelStationUsecaseEvent) {
  FPTxnLocalEditFuelStationEvtInitiated,
  FPTxnLocalEditFuelStationEvtDone,
  FPTxnLocalEditFuelStationEvtCanceled
};

#pragma mark - Fuel Station Sync Use Case Events

typedef NS_ENUM(NSInteger, FPTxnSyncFuelStationUsecaseEvent) {
  FPTxnSyncFuelStationEvtInitiated,
  FPTxnSyncFuelStationEvtSaveToRemoteStoreAttempted,
  FPTxnSyncFuelStationEvtSaveToRemoteStoreSkippedDueToNoConn,
  __FPTxnSyncFuelStationEvtRemoteProcStarted,        // recorded server-side
  __FPTxnSyncFuelStationEvtRemoteProcDoneErrOccured, // recorded server-side
  __FPTxnSyncFuelStationEvtRemoteProcDoneSuccess,    // recorded server-side
  FPTxnSyncFuelStationEvtSaveToRemoteRespReceived
};

// -----------------------------------------------------------------------------
//   Fuel Purchase Log-related Use Case Events
// -----------------------------------------------------------------------------

#pragma mark - Fuel Purchase Log Local Creation Use Case Events

typedef NS_ENUM(NSInteger, FPTxnLocalCreateFpLogUsecaseEvent) {
  FPTxnLocalCreateFpLogEvtInitiated,
  FPTxnLocalCreateFpLogEvtDone,
  FPTxnLocalCreateFpLogEvtCanceled
};

#pragma mark - Fuel Purchase Log Local Edit Use Case Events

typedef NS_ENUM(NSInteger, FPTxnEditFpLogUsecaseEvent) {
  FPTxnLocalEditFpLogEvtInitiated,
  FPTxnLocalEditFpLogEvtDone,
  FPTxnLocalEditFpLogEvtCanceled
};

#pragma mark - Fuel Purchase Log Sync Use Case Events

typedef NS_ENUM(NSInteger, FPTxnSyncFpLogUsecaseEvent) {
  FPTxnSyncFpLogEvtInitiated,
  FPTxnSyncFpLogEvtSaveToRemoteStoreAttempted,
  FPTxnSyncFpLogEvtSaveToRemoteStoreSkippedDueToNoConn,
  __FPTxnSyncFpLogEvtRemoteProcStarted,        // recorded server-side
  __FPTxnSyncFpLogEvtRemoteProcDoneErrOccured, // recorded server-side
  __FPTxnSyncFpLogEvtRemoteProcDoneSuccess,    // recorded server-side
  FPTxnSyncFpLogEvtSaveToRemoteRespReceived
};

// -----------------------------------------------------------------------------
//   Environment Log-related Use Case Events
// -----------------------------------------------------------------------------

#pragma mark - Environment Log Local Creation transaction events

typedef NS_ENUM(NSInteger, FPTxnLocalCreateEnvLogUsecaseEvent) {
  FPTxnLocalCreateEnvLogEvtInitiated,
  FPTxnLocalCreateEnvLogEvtDone,
  FPTxnLocalCreateEnvLogEvtCanceled
};

#pragma mark - Environment Log Local Edit Use Case Events

typedef NS_ENUM(NSInteger, FPTxnEditEnvLogUsecaseEvent) {
  FPTxnLocalEditEnvLogEvtInitiated,
  FPTxnLocalEditEnvLogEvtDone,
  FPTxnLocalEditEnvLogEvtCanceled
};

#pragma mark - Environment Log Sync Use Case Events

typedef NS_ENUM(NSInteger, FPTxnSyncEnvLogUsecaseEvent) {
  FPTxnSyncEnvLogEvtInitiated,
  FPTxnSyncEnvLogEvtSaveToRemoteStoreAttempted,
  FPTxnSyncEnvLogEvtSaveToRemoteStoreSkippedDueToNoConn,
  __FPTxnSyncEnvLogEvtRemoteProcStarted,        // recorded server-side
  __FPTxnSyncEnvLogEvtRemoteProcDoneErrOccured, // recorded server-side
  __FPTxnSyncEnvLogEvtRemoteProcDoneSuccess,    // recorded server-side
  FPTxnSyncEnvLogEvtSaveToRemoteRespReceived
};
