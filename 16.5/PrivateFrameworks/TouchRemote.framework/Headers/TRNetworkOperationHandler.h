// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRNETWORKOPERATIONHANDLER_H
#define TRNETWORKOPERATIONHANDLER_H

@class NSString;
@protocol TROperationHandler;

#import <Foundation/Foundation.h>


@interface TRNetworkOperationHandler : NSObject <TROperationHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *joinNetworkHandler; // ivar: _joinNetworkHandler
@property (readonly) Class superclass;


-(id)initWithJoinNetworkHandler:(id)arg0 ;
-(void)_handleNetworkRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg0 ;


@end


#endif