// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISYSTEMBASELINECONSTRAINT_H
#define _UISYSTEMBASELINECONSTRAINT_H

@class NSLayoutConstraint;
@protocol NSCoding;



@interface _UISystemBaselineConstraint : NSLayoutConstraint <NSCoding>





+(id)constraintWithAnchor:(id)arg0 relatedBy:(NSInteger)arg1 toAnchor:(id)arg2 withSystemSpacingMultipliedBy:(CGFloat)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif