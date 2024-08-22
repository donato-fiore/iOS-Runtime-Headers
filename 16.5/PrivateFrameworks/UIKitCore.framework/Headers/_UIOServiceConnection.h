// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIOSERVICECONNECTION_H
#define _UIOSERVICECONNECTION_H

@class NSHashTable, NSString, BSServiceConnection<BSServiceConnectionHost>;
@protocol _UIOverlayServiceClientToServerInterface;

#import <Foundation/Foundation.h>

#import "UIOServer.h"

@interface _UIOServiceConnection : NSObject <_UIOverlayServiceClientToServerInterface>

 {
    NSHashTable *_observers;
}


@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, weak, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger pid;
@property (readonly, weak, nonatomic) UIOServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)connectionWithBSServiceConnection:(id)arg0 toServer:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)performOverlayAction:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)sendResponse:(id)arg0 ;
-(void)serviceConnectionDidInvalidate;


@end


#endif