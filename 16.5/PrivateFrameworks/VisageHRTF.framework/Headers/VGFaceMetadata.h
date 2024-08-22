// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGFACEMETADATA_H
#define VGFACEMETADATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VGFaceMetadata : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) NSInteger faceID; // ivar: _faceID
@property (readonly, nonatomic) CGFloat rollAngle; // ivar: _rollAngle
@property (readonly, nonatomic) CGFloat yawAngle; // ivar: _yawAngle


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFaceId:(NSInteger)arg0 bounds:(struct CGRect )arg1 yawAngle:(CGFloat)arg2 rollAngle:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif