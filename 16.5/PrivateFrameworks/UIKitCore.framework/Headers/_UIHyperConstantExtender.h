// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIHYPERCONSTANTEXTENDER_H
#define _UIHYPERCONSTANTEXTENDER_H

@class NSString;
@protocol _UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIHyperConstantExtender : NSObject <_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (nonatomic, setter=_setMaximumDistance:) CGFloat _maximumDistance; // ivar: __maximumDistance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDimensions:(NSUInteger)arg0 ;
-(void)_getExtentVector:(*CGFloat)arg0 forUnconstrainedPoint:(*CGFloat)arg1 closestPoint:(*CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif