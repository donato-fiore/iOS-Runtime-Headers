// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIMOTIONEFFECTACCELERATEDOUTPUTRANGE_H
#define _UIMOTIONEFFECTACCELERATEDOUTPUTRANGE_H

@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying>

 {
    UIOffset _referenceOffset;
    CGPoint _referenceAcceleration;
}


@property (readonly, nonatomic) CGPoint acceleration; // ivar: _acceleration


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct UIOffset )acceleratedOutputForViewerOffset:(struct UIOffset )arg0 accelerationBoostFactor:(struct CGPoint )arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;


@end


#endif