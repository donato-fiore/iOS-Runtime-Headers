// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCIDAPPLICATIONSYNCSTATE_H
#define VCIDAPPLICATIONSYNCSTATE_H

@class MTLModel, NSString, NSDictionary, NSDate;
@protocol MTLJSONSerializing;



@interface VCIDApplicationSyncState : MTLModel <MTLJSONSerializing>



@property (copy, nonatomic) NSString *checksum; // ivar: _checksum
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *registeredDate; // ivar: _registeredDate
@property (readonly) Class superclass;


+(id)JSONKeyPathsByPropertyKey;


@end


#endif