// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICOVERSHEETBUTTON_H
#define UICOVERSHEETBUTTON_H

@class NSArray, NSString;
@protocol _UIClickInteractionDelegateInternal;


#import "UIControl.h"
#import "UIView.h"
#import "UIImageView.h"
#import "UIVisualEffectView.h"
#import "_UIClickInteraction.h"
#import "UIImage.h"
#import "UIColor.h"

@interface UICoverSheetButton : UIControl <_UIClickInteractionDelegateInternal>

 {
    UIView *_containerView;
    UIImageView *_contentView;
    UIVisualEffectView *_backgroundEffectView;
    NSArray *_backgroundEffects;
    NSArray *_selectedBackgroundEffects;
    UIView *_backgroundHighlightView;
    _UIClickInteraction *_clickInteraction;
    BOOL _interactive;
    BOOL _didActivateDuringInteraction;
    CGFloat _maxForceDuringInteraction;
    CGFloat _highlightProgress;
}


@property (copy, nonatomic) NSString *backgroundEffectViewGroupName; // ivar: _backgroundEffectViewGroupName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSInteger imageContentMode;
@property (nonatomic, getter=isLatching) BOOL latching; // ivar: _latching
@property (copy, nonatomic) NSString *localizedAccessoryTitle; // ivar: _localizedAccessoryTitle
@property (nonatomic, getter=isPronounced) BOOL pronounced; // ivar: _pronounced
@property (retain, nonatomic) UIImage *selectedImage; // ivar: _selectedImage
@property (retain, nonatomic) UIColor *selectedTintColor; // ivar: _selectedTintColor
@property (nonatomic) BOOL shouldUseContinuousCorners; // ivar: _shouldUseContinuousCorners
@property (copy, nonatomic) NSString *statisticsIdentifier; // ivar: _statisticsIdentifier
@property (readonly) Class superclass;


-(BOOL)clickInteractionShouldBegin:(id)arg0 ;
-(NSUInteger)_clickInteractionDefaultDriverType:(id)arg0 ;
-(id)_backgroundEffectsWithBrightness:(CGFloat)arg0 ;
-(id)_firstActivationDurationStat;
-(id)_interactionCountStatWithActivation:(BOOL)arg0 ;
-(id)_interactionDurationStat;
-(id)_maxForceStatWithActivation:(BOOL)arg0 ;
-(id)highlightEffectForClickInteraction:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animateEffectUpdateWithProgress:(CGFloat)arg0 ended:(BOOL)arg1 ;
-(void)clickInteraction:(id)arg0 didObserveForce:(CGFloat)arg1 ;
-(void)clickInteractionDidClickUp:(id)arg0 ;
-(void)clickInteractionDidEnd:(id)arg0 ;
-(void)layoutIfNeededAnimated;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif