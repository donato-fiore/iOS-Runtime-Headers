// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWITCHERDEMOCOMMANDSSERVER_H
#define SBSWITCHERDEMOCOMMANDSSERVER_H

@class FBServiceClientAuthenticator, BSServiceConnectionListener, NSMutableArray, NSString;
@protocol BSServiceConnectionListenerDelegate, SBSSwitcherDemoCommandsClientToServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBAppSwitcherSettings.h"
#import "SBSwitcherDemoFilteringController.h"
#import "SBRecentAppLayouts.h"

@interface SBSwitcherDemoCommandsServer : NSObject <BSServiceConnectionListenerDelegate, SBSSwitcherDemoCommandsClientToServerInterface>

 {
    SBAppSwitcherSettings *_switcherSettings;
    FBServiceClientAuthenticator *_clientAuthenticator;
    BSServiceConnectionListener *_connectionListener;
    SBSwitcherDemoFilteringController *_demoFilteringController;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    SBRecentAppLayouts *_recents;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadStashedSwitcherModelFromPath:(id)arg0 ;
-(BOOL)setShouldDisableSwitcherModelUpdates:(id)arg0 ;
-(BOOL)stashSwitcherModelToPath:(id)arg0 ;
-(BOOL)updateHiddenApplicationBundleIDs:(id)arg0 ;
-(id)initWithRecentAppLayouts:(id)arg0 demoFilteringController:(id)arg1 ;
-(void)_queue_addConnection:(id)arg0 ;
-(void)_queue_removeConnection:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif