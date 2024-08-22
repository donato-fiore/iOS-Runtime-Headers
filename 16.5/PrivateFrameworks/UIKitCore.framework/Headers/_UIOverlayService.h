// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIOVERLAYSERVICE_H
#define _UIOVERLAYSERVICE_H

@class NSString, BSServiceConnection<BSServiceConnectionClient>;
@protocol _UIOverlayServiceServerToClientInterface, OS_dispatch_queue, _UIOverlayServiceDelegate;

#import <Foundation/Foundation.h>


@interface _UIOverlayService : NSObject <_UIOverlayServiceServerToClientInterface>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIOverlayServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *serviceConnection; // ivar: _serviceConnection
@property (readonly) Class superclass;


-(id)init;
-(void)_asyncTargetWithHandler:(id)arg0 ;
-(void)_makeConnectionIfNecessaryWithConnectionHandler:(id)arg0 ;
-(void)dealloc;
-(void)handleOverlayResponse:(id)arg0 ;
-(void)prewarmConnection;
-(void)sendOverlayAction:(id)arg0 ;


@end


#endif