// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KTSELFVERIFICATIONHEALABLEERRORS_H
#define KTSELFVERIFICATIONHEALABLEERRORS_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KTSelfVerificationHealableErrors : NSObject <NSSecureCoding>



@property (retain) NSMutableArray *_accountHealableErrors; // ivar: __accountHealableErrors
@property (retain) NSMutableDictionary *_deviceIdToHealableErrors; // ivar: __deviceIdToHealableErrors
@property (readonly) NSArray *accountHealableErrors;
@property (readonly) NSDictionary *deviceIdToHealableErrors;
@property NSUInteger healableState; // ivar: _healableState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addAccountHealableError:(NSUInteger)arg0 ;
-(void)addDeviceHealableError:(NSUInteger)arg0 deviceId:(id)arg1 ;
-(void)addHealableState:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeHealableState:(NSUInteger)arg0 ;


@end


#endif