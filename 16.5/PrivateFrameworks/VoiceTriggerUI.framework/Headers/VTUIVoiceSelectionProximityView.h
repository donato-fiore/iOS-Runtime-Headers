// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTUIVOICESELECTIONPROXIMITYVIEW_H
#define VTUIVOICESELECTIONPROXIMITYVIEW_H

@class UIImageView, UILabel, UIView, UIButton, NSArray, NSString;
@protocol VTUIVoiceSelectionContaining;


#import "VTUIProximityView.h"
#import "VTUIProximityContainerView.h"
#import "VTUIStyle.h"

@interface VTUIVoiceSelectionProximityView : VTUIProximityView <VTUIVoiceSelectionContaining>

 {
    UIImageView *_orbImage;
    VTUIProximityContainerView *_containerView;
    UILabel *_titleLabel;
    UIView *_footerView;
    UIView *_contentView;
    VTUIStyle *_vtStyle;
    BOOL _allowsRandomVoiceSelection;
    NSInteger _selectionStyle;
    BOOL _isHidingCompactBackgroundCardView;
}


@property (retain, nonatomic) UIButton *chooseRandomVoiceButton; // ivar: _chooseRandomVoiceButton
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithTitle:(id)arg0 allowsRandomVoiceSelection:(BOOL)arg1 forSelectionStyle:(NSInteger)arg2 ;
-(id)viewConstraints;
-(struct CGSize )intrinsicContentSize;
-(void)_setupConstraintsToSize:(struct CGSize )arg0 ;
-(void)_setupContentWithTitle:(id)arg0 ;
-(void)setContentView:(id)arg0 ;
-(void)setShouldHideCompactBackgroundCardView:(BOOL)arg0 ;


@end


#endif