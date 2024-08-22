// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPPOLICYVERSION_H
#define TPPOLICYVERSION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TPPolicyVersion : NSObject <NSSecureCoding>



@property (readonly, retain) NSString *policyHash; // ivar: _policyHash
@property (readonly) NSUInteger versionNumber; // ivar: _versionNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(NSUInteger)arg0 hash:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif