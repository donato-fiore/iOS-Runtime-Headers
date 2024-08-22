// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIHYPERSPHERE_H
#define _UIHYPERSPHERE_H

@class NSString;
@protocol _UIHyperregion_Internal, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIHypersphere : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying>

 {
    *CGFloat __center;
}


@property (readonly, nonatomic) *CGFloat _center;
@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (nonatomic, setter=_setRadius:) CGFloat _radius; // ivar: __radius
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
-(void)_closestPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(void)_mutateCenter:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif