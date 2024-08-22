// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTVERIFIER_H
#define KTVERIFIER_H

@class NSString, NSXPCConnection;

#import <Foundation/Foundation.h>

#import "TransparencyApplication.h"

@interface KTVerifier : NSObject

@property (retain) TransparencyApplication *application; // ivar: _application
@property (readonly) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly) NSXPCConnection *connection; // ivar: _connection


+(id)getUIStatusPriority:(NSUInteger)arg0 ;
-(BOOL)ignoreFailure:(id)arg0 uuid:(id)arg1 error:(*id)arg2 ;
-(BOOL)ignoreFailureForResults:(id)arg0 error:(*id)arg1 ;
-(BOOL)markFailureSeenForResults:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)getDisplayStatusForResults:(id)arg0 isSelfOptedIn:(BOOL)arg1 ;
-(id)initWithApplication:(id)arg0 ;
-(id)unimplementedError:(id)arg0 ;
-(id)urisFromResults:(id)arg0 ;
-(id)validateEnrollmentUri:(id)arg0 accountKey:(id)arg1 loggableData:(id)arg2 insertResponse:(id)arg3 error:(*id)arg4 ;
-(id)validateEnrollmentUri:(id)arg0 accountKey:(id)arg1 loggableData:(id)arg2 queryRequest:(id)arg3 insertResponse:(id)arg4 error:(*id)arg5 ;
-(id)validatePeerUri:(id)arg0 accountKey:(id)arg1 loggableDatas:(id)arg2 queryRequest:(id)arg3 queryResponse:(id)arg4 error:(*id)arg5 ;
-(id)validatePeerUri:(id)arg0 accountKey:(id)arg1 loggableDatas:(id)arg2 queryResponse:(id)arg3 error:(*id)arg4 ;
-(void)batchQuery:(id)arg0 userInitiated:(BOOL)arg1 block:(id)arg2 ;
-(void)clearLogClientConfiguration:(id)arg0 ;
-(void)clearPublicKeyStoreState:(id)arg0 ;
-(void)clearState:(id)arg0 ;
-(void)configurationBagFetch:(id)arg0 ;
-(void)convertToSelfRequest:(id)arg0 serverDatas:(id)arg1 syncedDatas:(id)arg2 accountKey:(id)arg3 queryRequest:(id)arg4 queryResponse:(id)arg5 updateCompletionBlock:(id)arg6 ;
-(void)convertToSelfRequest:(id)arg0 serverDatas:(id)arg1 syncedDatas:(id)arg2 accountKey:(id)arg3 queryResponse:(id)arg4 updateCompletionBlock:(id)arg5 ;
-(void)convertToSelfRequest:(id)arg0 serverDatas:(id)arg1 syncedDatas:(id)arg2 queryRequest:(id)arg3 queryResponse:(id)arg4 updateCompletionBlock:(id)arg5 ;
-(void)convertToSelfRequest:(id)arg0 serverDatas:(id)arg1 syncedDatas:(id)arg2 queryResponse:(id)arg3 updateCompletionBlock:(id)arg4 ;
-(void)copyApplicationState:(id)arg0 ;
-(void)copyApplicationTranscript:(id)arg0 ;
-(void)copyDaemonState:(id)arg0 ;
-(void)copyDataStoreStatistics:(id)arg0 ;
-(void)copyDeviceStatus:(id)arg0 complete:(id)arg1 ;
-(void)copyKeyStoreState:(id)arg0 ;
-(void)copyKeyStoreStateFromDisk:(id)arg0 ;
-(void)copyLogClientConfiguration:(id)arg0 ;
-(void)forceApplicationConfig:(id)arg0 ;
-(void)forceApplicationKeysDownload:(id)arg0 ;
-(void)forceApplicationKeysFetch:(id)arg0 ;
-(void)forceCloudConfigUpdate:(id)arg0 ;
-(void)forceConfigUpdate:(id)arg0 ;
-(void)forceDutyCycle:(id)arg0 ;
-(void)forceValidateUUID:(id)arg0 uri:(id)arg1 block:(id)arg2 ;
-(void)forceValidateUUID:(id)arg0 uri:(id)arg1 completionBlock:(id)arg2 ;
-(void)getCachedValidatePeerResults:(id)arg0 completionBlock:(id)arg1 ;
-(void)getValidatePeerResult:(id)arg0 uuid:(id)arg1 completionBlock:(id)arg2 ;
-(void)getValidatePeerResult:(id)arg0 uuid:(id)arg1 fetchNow:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)initiateQueryForUris:(id)arg0 completionBlock:(id)arg1 ;
// -(void)invokeXPCAsynchronousCallWithBlock:(id)arg0 failureBlock:(unk)arg1  ;
// -(void)invokeXPCSynchronousCallWithBlock:(id)arg0 failureBlock:(unk)arg1  ;
-(void)resetRequestToPending:(id)arg0 block:(id)arg1 ;
-(void)validateEnrollmentResult:(id)arg0 uuid:(id)arg1 completionBlock:(id)arg2 ;
-(void)validateEnrollmentUri:(id)arg0 accountKey:(id)arg1 loggableData:(id)arg2 insertResponse:(id)arg3 promiseCompletionBlock:(id)arg4 ;
-(void)validatePeerResult:(id)arg0 uuid:(id)arg1 completionBlock:(id)arg2 ;
-(void)validatePeerUri:(id)arg0 accountKey:(id)arg1 loggableDatas:(id)arg2 queryResponse:(id)arg3 promiseCompletionBlock:(id)arg4 ;
-(void)validatePeers:(id)arg0 fetchNow:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)validateSelfResult:(id)arg0 uuid:(id)arg1 syncedDatas:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif