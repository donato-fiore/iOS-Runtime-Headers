// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIRUNTIMEOUTLETCOLLECTIONCONNECTION_H
#define UIRUNTIMEOUTLETCOLLECTIONCONNECTION_H

@class NSString;


#import "UIRuntimeConnection.h"

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection

@property BOOL addsContentToExistingCollection; // ivar: addsContentToExistingCollection
@property (copy) NSString *runtimeCollectionClassName; // ivar: runtimeCollectionClassName


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)connect;
-(void)connectForSimulator;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performConnect;


@end


#endif