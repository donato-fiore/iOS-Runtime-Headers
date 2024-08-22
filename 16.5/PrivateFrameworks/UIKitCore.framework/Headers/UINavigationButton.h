// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UINAVIGATIONBUTTON_H
#define UINAVIGATIONBUTTON_H

@class NSSet, NSDictionary, NSString;


#import "UIButton.h"
#import "UIColor.h"
#import "_UIBarButtonItemAppearanceStorage.h"
#import "UIView.h"
#import "UIImage.h"
#import "UIBarButtonItem.h"
#import "UINavigationItem.h"

@interface UINavigationButton : UIButton {
    NSSet *_possibleTitles;
    UIColor *_navigationBarTintColor;
    CGSize _boundsAdjustment;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    NSSet *_possibleSystemItems;
    BOOL _size;
    BOOL _wantsLetterpressContent;
}


@property (retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor; // ivar: _accessibilityBackgroundTintColor
@property (nonatomic, setter=_setAdditionalSelectionInsets:) UIEdgeInsets _additionalSelectionInsets; // ivar: __additionalSelectionInsets
@property (retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // ivar: _appearanceGuideClass
@property (nonatomic, setter=_setBarItemHidden:) BOOL _barItemHidden; // ivar: __barItemHidden
@property (nonatomic, setter=_setButtonItemStyle:) NSInteger _buttonItemStyle; // ivar: _buttonItemStyle
@property (nonatomic, setter=_setCreatedByBarButtonItem:) BOOL _createdByBarButtonItem; // ivar: _createdByBarButtonItem
@property (weak, nonatomic, setter=_setEnclosingBar:) UIView *_enclosingBar; // ivar: __enclosingBar
@property (nonatomic, setter=_setFontScaleAdjustment:) CGFloat _fontScaleAdjustment; // ivar: _fontScaleAdjustment
@property (nonatomic, setter=_setFontScaleInvalid:) BOOL _isFontScaleInvalid; // ivar: _isFontScaleInvalid
@property (copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // ivar: _stylesForSizingTitles
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) BOOL _wantsBlendModeForAccessibilityBackgrounds; // ivar: _wantsBlendModeForAccessibilityBackgrounds
@property (nonatomic) NSInteger barStyle; // ivar: _barStyle
@property (nonatomic) int controlSize;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) CGFloat maximumWidth; // ivar: _maximumWidth
@property (nonatomic) CGFloat minimumWidth; // ivar: _minimumWidth
@property (weak, nonatomic) UIBarButtonItem *originatingButtonItem; // ivar: _originatingButtonItem
@property (weak, nonatomic) UINavigationItem *originatingNavigationItem; // ivar: _originatingNavigationItem
@property (nonatomic) int style; // ivar: _style
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSString *title;


+(id)defaultFont;
+(void)_resetRenderingModesForBackgroundImageView:(id)arg0 inBarStyle:(NSInteger)arg1 isEnabled:(BOOL)arg2 withAccessibilityBackground:(BOOL)arg3 wantsBlendModeForAccessibilityBackgrounds:(BOOL)arg4 accessibilityBackgroundTintColor:(id)arg5 ;
-(BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint )arg0 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_hasBaselineAlignedAbsoluteVerticalPosition:(*CGFloat)arg0 withinNavBar:(id)arg1 forSize:(struct CGSize )arg2 ;
-(BOOL)_isCarPlaySystemTypeButton;
-(BOOL)_isExternalRoundedRectButton;
-(BOOL)_isModernButton;
-(BOOL)_showsAccessibilityBackgroundWhenEnabled;
-(BOOL)_supportsMacIdiom;
-(BOOL)_wantsAccessibilityButtonShapes;
-(BOOL)canBecomeFocused;
-(BOOL)contentsEqualTo:(id)arg0 withStyle:(int)arg1 ;
-(CGFloat)_backgroundVerticalPositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(NSInteger)_activeBarMetrics;
-(NSInteger)_barButtonItemStyle;
-(NSInteger)_externalDrawingStyleForState:(NSUInteger)arg0 ;
-(NSInteger)buttonType;
-(id)_activeVisualStyle;
-(id)_adjustedDefaultTitleFont;
-(id)_appearanceStorage;
-(id)_backgroundImageForState:(NSUInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)_customOrAccessibilityBackgroundImageForState:(NSUInteger)arg0 style:(NSInteger)arg1 isMini:(BOOL)arg2 ;
-(id)_defaultTitleColorForState:(NSUInteger)arg0 isTintColor:(*BOOL)arg1 ;
-(id)_defaultTitleShadowColorForState:(NSUInteger)arg0 ;
-(id)_externalTitleColorForState:(NSUInteger)arg0 isTintColor:(*BOOL)arg1 ;
-(id)_externalUnfocusedBorderColor;
-(id)_titleTextAttributesForState:(NSUInteger)arg0 ;
-(id)_visualStyleForMetrics:(NSInteger)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 style:(int)arg1 ;
-(id)initWithImage:(id)arg0 width:(CGFloat)arg1 style:(int)arg2 ;
-(id)initWithImage:(id)arg0 width:(CGFloat)arg1 style:(int)arg2 applyBezel:(BOOL)arg3 forBarStyle:(NSInteger)arg4 buttonItemStyle:(NSInteger)arg5 ;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 possibleTitles:(id)arg1 style:(int)arg2 ;
-(id)initWithTitle:(id)arg0 style:(int)arg1 ;
-(id)initWithValue:(id)arg0 width:(CGFloat)arg1 style:(int)arg2 barStyle:(NSInteger)arg3 possibleTitles:(id)arg4 possibleSystemItems:(id)arg5 tintColor:(id)arg6 applyBezel:(BOOL)arg7 forButtonItemStyle:(NSInteger)arg8 ;
-(id)initWithValue:(id)arg0 width:(CGFloat)arg1 style:(int)arg2 barStyle:(NSInteger)arg3 possibleTitles:(id)arg4 tintColor:(id)arg5 ;
-(struct CGRect )_selectedIndicatorBounds;
-(struct CGSize )_defaultTitleShadowOffsetForState:(NSUInteger)arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_buttonTitleEdgeInsets;
-(struct UIEdgeInsets )_pathImageEdgeInsets;
-(struct UIEdgeInsets )_pathTitleEdgeInsets;
-(struct UIOffset )_titlePositionAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 style:(NSInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg0 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_adjustBounds;
-(void)_applyBarButtonAppearanceStorage:(id)arg0 withTaggedSelectors:(id)arg1 ;
-(void)_didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
-(void)_setBackButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBackButtonTitlePositionAdjustment:(struct UIOffset )arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 barMetrics:(NSInteger)arg2 ;
-(void)_setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 style:(NSInteger)arg2 barMetrics:(NSInteger)arg3 ;
-(void)_setBackgroundVerticalPositionAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;
-(void)_setBoundsAdjustment:(struct CGSize )arg0 ;
-(void)_setFrame:(struct CGRect )arg0 deferLayout:(BOOL)arg1 ;
-(void)_setGroupName:(id)arg0 forNavigationBar:(id)arg1 ;
-(void)_setWantsLetterpressContent;
-(void)_uinavigationbar_prepareToAppearInNavigationItem:(id)arg0 onLeft:(BOOL)arg1 ;
-(void)_updateContentInsets;
-(void)_updateShadowOffsetWithAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_updateStyle;
-(void)_updateTitleColorsForState:(NSUInteger)arg0 ;
-(void)_updateTitleForLetterpress;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setNavigationBarTintColor:(id)arg0 ;
-(void)setPointerInteractionEnabled:(BOOL)arg0 ;


@end


#endif