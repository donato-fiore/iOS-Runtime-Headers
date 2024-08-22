// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRITASKCAPABILITYMODIFIER_H
#define TRITASKCAPABILITYMODIFIER_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRITaskCapabilityModifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger add; // ivar: _add
@property (readonly, nonatomic) NSUInteger remove; // ivar: _remove


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToModifier:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)updateCapability:(NSUInteger)arg0 ;
-(id)asPersistedModifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAdd:(NSUInteger)arg0 remove:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif