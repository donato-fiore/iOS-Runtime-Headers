// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURELAYOUTMONITORSERVER_H
#define SBSYSTEMAPERTURELAYOUTMONITORSERVER_H

@class NSMutableArray, BSServiceConnectionListener, NSArray, NSString;
@protocol BSServiceConnectionListenerDelegate, SBSystemApertureLayoutMonitorServerInterface, BSInvalidatable, OS_dispatch_queue, SBSystemApertureLayoutMonitorServerDelegate;

#import <Foundation/Foundation.h>


@interface SBSystemApertureLayoutMonitorServer : NSObject <BSServiceConnectionListenerDelegate, SBSystemApertureLayoutMonitorServerInterface, BSInvalidatable>

 {
    os_unfair_lock_s _clientServiceCollectionLock;
    os_unfair_lock_s _framesCollectionLock;
    NSMutableArray *_connections;
    NSMutableArray *_remoteAssertions;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnectionListener *_connectionListener;
    NSArray *_frames;
    BOOL _isValid;
    id<SBSystemApertureLayoutMonitorServerDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)acquireRestrictSystemApertureLayoutToInertAssertionIdentifierWithReason:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_notifyConnectedListenersOfUpdatedFrames;
-(void)_systemApertureLayoutDidChange:(id)arg0 ;
-(void)invalidate;
-(void)invalidateRestrictSystemApertureLayoutToInertAssertionWithIdentifier:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif