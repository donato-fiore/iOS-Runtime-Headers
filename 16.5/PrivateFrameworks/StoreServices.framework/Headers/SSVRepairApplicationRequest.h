// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVREPAIRAPPLICATIONREQUEST_H
#define SSVREPAIRAPPLICATIONREQUEST_H

@class NSNumber, NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSVRepairApplicationRequest : SSRequest <SSXPCCoding>



@property (readonly, nonatomic) NSNumber *accountDSID; // ivar: _accountDSID
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSInteger claimStyle; // ivar: _claimStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithBundleID:(id)arg0 accountIdentifier:(id)arg1 claimStyle:(NSInteger)arg2 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithResponseBlock:(id)arg0 ;


@end


#endif