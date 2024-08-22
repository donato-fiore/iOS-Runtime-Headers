// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIUIPRESENTERXPCCONNECTION_H
#define WFSIRIUIPRESENTERXPCCONNECTION_H

@class NSString, NSXPCListenerEndpoint, NSXPCConnection;
@protocol WFSiriUIPresenterConnection;

#import <Foundation/Foundation.h>


@interface WFSiriUIPresenterXPCConnection : NSObject <WFSiriUIPresenterConnection>



@property (nonatomic) BOOL connected; // ivar: _connected
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initWithEndpoint:(id)arg0 ;
-(id)presenterWithErrorHandler:(id)arg0 ;
-(void)resumeConnectionIfNecessary;


@end


#endif