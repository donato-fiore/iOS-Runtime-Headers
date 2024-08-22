// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIVIEWVECTORANIMATABLEPROPERTY_H
#define UIVIEWVECTORANIMATABLEPROPERTY_H



#import "UIAnimatablePropertyWrapper.h"

@interface UIViewVectorAnimatableProperty : UIAnimatablePropertyWrapper

@property (readonly, nonatomic) NSUInteger _length; // ivar: __length
@property (readonly, nonatomic) *CGFloat _presentationValue;
@property (readonly, nonatomic) *CGFloat _value;
@property (readonly, nonatomic) *CGFloat _velocity;


-(id)_initWithLength:(NSUInteger)arg0 ;
-(id)_vectorAnimatableProperty;
-(void)_copyValue:(*CGFloat)arg0 ;
-(void)_copyVelocity:(*CGFloat)arg0 ;
-(void)_mutateValue:(id)arg0 ;
-(void)_mutateVelocity:(id)arg0 ;


@end


#endif