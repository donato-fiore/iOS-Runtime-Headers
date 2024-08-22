// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSMARTCOVERSERVICE_H
#define SBSMARTCOVERSERVICE_H

@class BSServiceConnectionListener, NSMutableSet, NSString;
@protocol BSServiceConnectionListenerDelegate, SBSSmartCoverServiceServerInterface;

#import <Foundation/Foundation.h>


@interface SBSmartCoverService : NSObject <BSServiceConnectionListenerDelegate, SBSSmartCoverServiceServerInterface>

 {
    BSServiceConnectionListener *_listener;
    NSMutableSet *_connections;
    NSMutableSet *_observingConnections;
    NSInteger _lastSmartCoverState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithInitialState:(NSInteger)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)setWantsSmartCoverStateChanges:(id)arg0 ;
-(void)smartCoverStateDidChange:(NSInteger)arg0 ;


@end


#endif