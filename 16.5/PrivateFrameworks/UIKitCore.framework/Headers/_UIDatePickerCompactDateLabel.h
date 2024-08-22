// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERCOMPACTDATELABEL_H
#define _UIDATEPICKERCOMPACTDATELABEL_H

@class NSString, NSDictionary, NSArray;
@protocol _UIControlEventsGestureRecognizerDelegate, UIPointerInteractionDelegate, _UIDatePickerCompactDateLabelDelegate;


#import "UIView.h"
#import "_UIDatePickerOverlayPresentation.h"
#import "_UIDatePickerLinkedLabel.h"

@interface _UIDatePickerCompactDateLabel : UIView <_UIControlEventsGestureRecognizerDelegate, UIPointerInteractionDelegate>



@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIDatePickerCompactDateLabelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL highlightedForTouch; // ivar: _highlightedForTouch
@property (nonatomic) CGFloat minimumScaleFactor;
@property (weak, nonatomic) _UIDatePickerOverlayPresentation *overlayPresentation; // ivar: _overlayPresentation
@property (retain, nonatomic) NSDictionary *overrideAttributes;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tapInteractionControlledExternally; // ivar: _tapInteractionControlledExternally
@property (nonatomic) NSInteger textAlignment;
@property (nonatomic) BOOL textColorFollowsTintColor;
@property (retain, nonatomic) _UIDatePickerLinkedLabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) NSArray *titles;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_didTapTextLabel;
-(void)activateLabel;
-(void)controlEventsGestureRecognizer:(id)arg0 recognizedControlEvent:(NSUInteger)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif