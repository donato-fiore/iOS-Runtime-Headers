// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIHYPERPOINT_H
#define _UIHYPERPOINT_H

@class NSString;
@protocol _UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _UIHyperpoint : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying>

 {
    *CGFloat __value;
}


@property (readonly, nonatomic) NSUInteger _dimensions; // ivar: __dimensions
@property (readonly, nonatomic) *CGFloat _value;
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
-(id)initWithValue:(*CGFloat)arg0 dimensions:(NSUInteger)arg1 ;
-(id)initWithValue:(*CGFloat)arg0 objCType:(char *)arg1 ;
-(void)_closestPoint:(*CGFloat)arg0 toPoint:(*CGFloat)arg1 ;
-(void)_copyValue:(*CGFloat)arg0 ;
-(void)_mutateValue:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif