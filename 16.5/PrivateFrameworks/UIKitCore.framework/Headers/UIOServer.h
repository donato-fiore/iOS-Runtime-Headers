// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIOSERVER_H
#define UIOSERVER_H

@class BSServiceConnectionListener, NSMutableSet, NSMapTable, NSString;
@protocol BSServiceConnectionListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UIOServer : NSObject <BSServiceConnectionListenerDelegate>

 {
    BOOL _activated;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableSet *_connections;
    NSMapTable *_displayDelegateTable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_identifierForSceneType:(NSInteger)arg0 displayHardwareIdentifier:(id)arg1 ;
+(id)displayDelegateIdentifierForScene:(id)arg0 ;
+(id)sharedInstance;
-(id)displayDelegateForAction:(id)arg0 ;
-(id)displayDelegateForAction:(id)arg0 sceneType:(NSInteger)arg1 ;
-(id)displayDelegateForIdentifier:(id)arg0 ;
-(id)init;
-(void)activate;
-(void)invalidate;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)registerDisplayDelegate:(id)arg0 forIdentifier:(id)arg1 ;
-(void)unregisterDisplayDelegateForIdentifier:(id)arg0 ;


@end


#endif