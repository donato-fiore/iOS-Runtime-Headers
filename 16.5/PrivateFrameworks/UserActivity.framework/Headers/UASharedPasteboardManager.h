// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UASHAREDPASTEBOARDMANAGER_H
#define UASHAREDPASTEBOARDMANAGER_H

@class NSSet, NSXPCConnection, NSString, NSDictionary;
@protocol UASharedPasteboardManagerResponseProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UAPasteboardGeneration.h"

@interface UASharedPasteboardManager : NSObject <UASharedPasteboardManagerResponseProtocol>



@property (retain) NSSet *bomCheckTypes; // ivar: _bomCheckTypes
@property id *completionBlock; // ivar: _completionBlock
@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (retain) NSXPCConnection *controllConnection; // ivar: _controllConnection
@property (retain) id *controllSyncObject; // ivar: _controllSyncObject
@property (retain) UAPasteboardGeneration *currentGeneration; // ivar: _currentGeneration
@property BOOL currentGenerationHasUpdates; // ivar: _currentGenerationHasUpdates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int disableCount; // ivar: _disableCount
@property (retain) NSSet *disallowedTypesForReceiving; // ivar: _disallowedTypesForReceiving
@property (retain) NSSet *disallowedTypesForSending; // ivar: _disallowedTypesForSending
@property (readonly) NSUInteger hash;
@property (copy) id *localPasteboardWasFetched; // ivar: _localPasteboardWasFetched
@property (retain) NSObject<OS_dispatch_queue> *pasteboardReadQ; // ivar: _pasteboardReadQ
@property BOOL remotePasteboardAvailable; // ivar: _remotePasteboardAvailable
@property (retain) NSObject<OS_dispatch_queue> *serverQ; // ivar: _serverQ
@property (readonly) Class superclass;
@property (retain) NSDictionary *typeAliases; // ivar: _typeAliases
@property (retain) NSDictionary *typeBOMs; // ivar: _typeBOMs
@property BOOL updateScheduled; // ivar: _updateScheduled


+(BOOL)dontConnectToServer;
+(id)sharedManager;
+(void)initialize;
-(BOOL)addData:(id)arg0 toItemAtIndex:(NSUInteger)arg1 generation:(NSUInteger)arg2 ;
-(BOOL)isRemotePasteboardAvailable;
-(BOOL)requestPasteboardFetchReturnEarly;
-(BOOL)typeIsDisallowedForReceiving:(id)arg0 ;
-(BOOL)typeIsDisallowedForSending:(id)arg0 ;
-(id)currentRemoteDeviceName;
-(id)fetchRemoteName;
-(id)init;
-(id)serializeFileType:(id)arg0 intoInfo:(id)arg1 withFile:(id)arg2 intoDir:(id)arg3 ;
-(id)serializeItem:(id)arg0 intoInfo:(id)arg1 withFile:(id)arg2 intoDir:(id)arg3 ;
-(id)serializeType:(id)arg0 intoInfo:(id)arg1 withFile:(id)arg2 ;
-(void)clearLocalPasteboardInformation;
-(void)dealloc;
-(void)doClearLocalPasteboardInfo;
-(void)fetchPasteboardDataForProcess:(int)arg0 withCompletion:(id)arg1 ;
-(void)fetchPasteboardStatus:(id)arg0 ;
-(void)fetchPasteboardTypesForProcess:(int)arg0 withCompletion:(id)arg1 ;
-(void)pickupLocalChanges:(id)arg0 iterNumber:(NSInteger)arg1 cloneDir:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestRemotePasteboardDataForProcess:(int)arg0 withCompletion:(id)arg1 ;
-(void)requestRemotePasteboardTypesForProcess:(int)arg0 withCompletion:(id)arg1 ;
-(void)sendUpdateToServer:(id)arg0 ;
-(void)startPreventingPasteboardSharing;
-(void)stopPreventingPasteboardSharing;
-(void)tellClientDebuggingEnabled:(BOOL)arg0 logFileHandle:(id)arg1 ;
-(void)writeLocalPasteboardToFile:(id)arg0 itemDir:(id)arg1 extension:(id)arg2 withCompletion:(id)arg3 ;
-(void)writeLocalPasteboardToFile:(id)arg0 itemDir:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif