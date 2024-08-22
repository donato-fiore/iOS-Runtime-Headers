// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSPURCHASEINTENTACTIONREQUEST_H
#define SSPURCHASEINTENTACTIONREQUEST_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSPurchaseIntentActionRequest : SSRequest <SSXPCCoding>



@property (nonatomic) NSUInteger action; // ivar: _action
@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif