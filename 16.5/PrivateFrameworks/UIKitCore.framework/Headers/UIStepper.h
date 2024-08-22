// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTEPPER_H
#define UISTEPPER_H

@class NSMutableDictionary, UIView<UIStepperVisualElement>;
@protocol UIStepperControl;


#import "UIControl.h"

@interface UIStepper : UIControl <UIStepperControl>

 {
    NSMutableDictionary *_dividerImages;
    NSMutableDictionary *_incrementImages;
    NSMutableDictionary *_decrementImages;
    NSMutableDictionary *_backgroundImages;
}


@property (nonatomic) BOOL autorepeat; // ivar: _autorepeat
@property (nonatomic, getter=isContinuous) BOOL continuous; // ivar: _continuous
@property (nonatomic) CGFloat maximumValue; // ivar: _maximumValue
@property (nonatomic) CGFloat minimumValue; // ivar: _minimumValue
@property (nonatomic) CGFloat stepValue; // ivar: _stepValue
@property (nonatomic) CGFloat value; // ivar: _value
@property (retain, nonatomic) UIView<UIStepperVisualElement> *visualElement; // ivar: _visualElement
@property (nonatomic) BOOL wraps; // ivar: _wraps


+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(Class)_fallbackVisualElementClass;
+(Class)visualElementClassForTraitCollection:(id)arg0 ;
+(id)visualElementForTraitCollection:(id)arg0 ;
+(void)_registerVisualElementClass:(Class)arg0 forIdiom:(NSInteger)arg1 ;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg0 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)backgroundImageForState:(NSUInteger)arg0 ;
-(id)decrementImageForState:(NSUInteger)arg0 ;
-(id)dividerImageForLeftSegmentState:(NSUInteger)arg0 rightSegmentState:(NSUInteger)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)incrementImageForState:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_commonStepperInit;
-(void)_emitValueChanged;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_refreshVisualElement;
-(void)_refreshVisualElementForTraitCollection:(id)arg0 populatingAPIProperties:(BOOL)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setDecrementImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setDividerImage:(id)arg0 forLeftSegmentState:(NSUInteger)arg1 rightSegmentState:(NSUInteger)arg2 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setIncrementImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTintColor:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)visualElementDidSetValue:(id)arg0 ;
-(void)visualElementSendValueChangedEvent:(id)arg0 ;


@end


#endif