// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSSIZES_H
#define TPSSIZES_H

@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"
#import "TPSSize.h"

@interface TPSSizes : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) TPSSize *compact; // ivar: _compact
@property (copy, nonatomic) TPSSize *regular; // ivar: _regular


+(BOOL)supportsSecureCoding;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)heightToWidthRatioForViewMode:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif