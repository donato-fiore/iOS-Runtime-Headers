// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSDOWNLOADPOLICYUSERDEFAULTSTATE_H
#define SSDOWNLOADPOLICYUSERDEFAULTSTATE_H

@class NSString, NSNumber;
@protocol NSSecureCoding, SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSDownloadPolicyUserDefaultState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>



@property (readonly, nonatomic) BOOL currentBoolValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (copy, nonatomic) NSNumber *fallbackNumberValue; // ivar: _fallbackNumberValue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) BOOL shouldInvertBoolValue; // ivar: _shouldInvertBoolValue
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif