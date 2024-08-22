// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWCONTROLLERTRANSITIONCOORDINATORCONTEXTDESCRIPTION_H
#define _UIVIEWCONTROLLERTRANSITIONCOORDINATORCONTEXTDESCRIPTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIViewControllerTransitionCoordinatorContextDescription : NSObject <NSSecureCoding>



@property (nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (nonatomic) NSInteger completionCurve; // ivar: _completionCurve
@property (nonatomic) CGFloat completionVelocity; // ivar: _completionVelocity
@property (nonatomic) NSInteger fromOrientation; // ivar: _fromOrientation
@property (nonatomic, getter=isInteractive) BOOL interactive; // ivar: _interactive
@property (nonatomic) CGFloat percentComplete; // ivar: _percentComplete
@property (nonatomic) CGAffineTransform targetTransform; // ivar: _targetTransform
@property (nonatomic) NSInteger toOrientation; // ivar: _toOrientation
@property (nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration


+(BOOL)supportsSecureCoding;
+(id)descriptionForTransitionCoordinatorContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif