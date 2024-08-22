// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WGWIDGETPERSISTENTSTATECONTROLLER_H
#define WGWIDGETPERSISTENTSTATECONTROLLER_H

@class NSXPCListener, NSMutableDictionary, NSString;
@protocol _NCWidgetController_Host_IPC, NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WGWidgetDiscoveryController.h"

@interface WGWidgetPersistentStateController : NSObject <_NCWidgetController_Host_IPC, NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    WGWidgetDiscoveryController *_discoveryController;
    NSMutableDictionary *_widgetIdentifiersToCachedState;
    BOOL _canCacheState;
    *_MKBEvent _keybagEvent;
    NSObject<OS_dispatch_queue> *_keybagQueue;
    NSObject<OS_dispatch_queue> *_diskWriteQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_setHasContent:(BOOL)arg0 forWidgetWithIdentifier:(id)arg1 ;
-(BOOL)doesWidgetWithIdentifierHaveContent:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)setLargestAvailableDisplayMode:(NSInteger)arg0 forWidgetWithIdentifier:(id)arg1 ;
-(NSInteger)largestAvailableDisplayModeForWidgetWithIdentifier:(id)arg0 ;
-(id)_persistentStateForWidgetWithIdentifier:(id)arg0 containingBundleIdentifier:(id)arg1 ;
-(id)_updateCachedStateForWidgetWithIdentifier:(id)arg0 containingBundleID:(id)arg1 ;
-(id)_valueForKey:(id)arg0 forWidgetWithIdentifier:(id)arg1 ;
-(id)initWithDiscoveryController:(id)arg0 ;
-(void)__requestRefreshAfterDate:(id)arg0 forWidgetWithBundleIdentifier:(id)arg1 ;
-(void)__setHasContent:(BOOL)arg0 forWidgetWithBundleIdentifier:(id)arg1 ;
-(void)_setValue:(id)arg0 forKey:(id)arg1 forWidgetWithIdentifier:(id)arg2 containingBundleID:(id)arg3 ;
-(void)_synchronizePersistentStateForWidgetWithIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif