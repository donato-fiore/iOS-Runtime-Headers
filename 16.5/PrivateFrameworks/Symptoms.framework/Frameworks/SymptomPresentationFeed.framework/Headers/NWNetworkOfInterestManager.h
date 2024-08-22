// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWNETWORKOFINTERESTMANAGER_H
#define NWNETWORKOFINTERESTMANAGER_H

@class AnalyticsWorkspace, NSMutableSet, NSXPCConnection, NSString;
@protocol SFClientInterfaceProxy, OS_dispatch_queue, SFServiceInterface;

#import <Foundation/Foundation.h>


@interface NWNetworkOfInterestManager : NSObject <SFClientInterfaceProxy>

 {
    AnalyticsWorkspace *workspace;
    NSMutableSet *registryNOI;
    int notifyToken;
    BOOL closing;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callerQueue; // ivar: _callerQueue
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SFServiceInterface> *service; // ivar: _service
@property (readonly) Class superclass;


-(BOOL)_connect;
-(BOOL)_validateKeyPath:(id)arg0 ;
-(BOOL)isClosing;
-(id)init;
-(void)_commonFinalizeRequestFor:(id)arg0 orPredicate:(id)arg1 options:(id)arg2 isStaged:(BOOL)arg3 ;
-(void)_commonTrackRequestFor:(unsigned char)arg0 isAny:(BOOL)arg1 isBuiltin:(BOOL)arg2 options:(id)arg3 isCustom:(id)arg4 ;
-(void)_unloadState;
-(void)auditableLinkQualityForNOI:(id)arg0 reply:(id)arg1 ;
-(void)canUseOnAlternateNOI:(id)arg0 appStates:(id)arg1 reply:(id)arg2 ;
-(void)canUseOnAlternateNOI:(id)arg0 apps:(id)arg1 reply:(id)arg2 ;
-(void)dayOfWeekPredictionGroupingForNOI:(id)arg0 reply:(id)arg1 ;
-(void)dealloc;
-(void)destroy;
-(void)errorPredictionsForNOI:(id)arg0 reply:(id)arg1 ;
-(void)estimatedDataTransferTimeOnNOI:(id)arg0 withPayloadInfo:(id)arg1 reply:(id)arg2 ;
-(void)foregroundNetworkActivityUnderwayOn:(id)arg0 reply:(id)arg1 ;
-(void)inquireNOIFor:(id)arg0 orPredicate:(id)arg1 requestedKeys:(id)arg2 options:(id)arg3 reply:(id)arg4 ;
-(void)instantQualityForNOI:(id)arg0 reply:(id)arg1 ;
-(void)interfaceTimelineForNOI:(id)arg0 reply:(id)arg1 ;
-(void)linkThroughputOnNOI:(id)arg0 reply:(id)arg1 ;
-(void)networkAttachmentInfoForScopedNOI:(id)arg0 reply:(id)arg1 ;
-(void)proxyHaveNOIs:(id)arg0 tornDown:(BOOL)arg1 ;
-(void)proxyUpdateNOI:(id)arg0 keyPath:(id)arg1 change:(id)arg2 ;
-(void)setQueue:(id)arg0 ;
-(void)stopTrackingNOIs:(id)arg0 ;
-(void)trackAllBuiltinNOIsForInterfaceType:(NSInteger)arg0 options:(id)arg1 ;
-(void)trackCustomNOI:(id)arg0 options:(id)arg1 ;
-(void)trackNOIAnyForInterfaceSubtype:(NSInteger)arg0 options:(id)arg1 ;
-(void)trackNOIAnyForInterfaceType:(NSInteger)arg0 options:(id)arg1 ;
-(void)trafficInvitesHourlyDistributionForNOI:(id)arg0 reply:(id)arg1 ;
-(void)trainingProgressForNOI:(id)arg0 reply:(id)arg1 ;
-(void)updatePredictionsForNOI:(id)arg0 reply:(id)arg1 ;


@end


#endif