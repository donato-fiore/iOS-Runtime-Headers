// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBUTTONBARBUTTONVISUALPROVIDER_H
#define _UIBUTTONBARBUTTONVISUALPROVIDER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UIButtonBarButton.h"
#import "UIBarButtonItem.h"
#import "UIView.h"
#import "UIColor.h"

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying>

 {
    _UIButtonBarButton *_button;
    UIBarButtonItem *_barButtonItem;
}


@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonLeading;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonTrailing;
@property (nonatomic) BOOL backButtonConstraintsActive;
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (readonly, nonatomic) UIView *backIndicatorView;
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)visualProviderForIdiom:(NSInteger)arg0 ;
+(void)registerPlatformVisualProviderClass:(Class)arg0 forIdiom:(NSInteger)arg1 ;
-(BOOL)buttonEnabledState:(id)arg0 forRequestedState:(BOOL)arg1 ;
-(BOOL)buttonHighlitedState:(id)arg0 forRequestedState:(BOOL)arg1 ;
-(BOOL)buttonSelectionState:(id)arg0 forRequestedState:(BOOL)arg1 ;
-(BOOL)canUpdateMenuInPlace;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldLift;
-(BOOL)shouldSuppressPointerSpecularFilter;
-(BOOL)supportsBackButtons;
-(Class)buttonBarButtonClass;
-(Class)buttonControlClass;
-(NSUInteger)hash;
-(id)buttonContextMenuInteractionConfiguration;
-(id)buttonContextMenuStyleFromDefaultStyle:(id)arg0 ;
-(id)buttonContextMenuTargetedPreview;
-(id)buttonSpringLoadedInteractionBehavior;
-(id)buttonSpringLoadedInteractionEffect;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)focusEffect;
-(id)matchingPointerShapeForView:(id)arg0 rect:(struct CGRect )arg1 inContainer:(id)arg2 ;
-(id)pointerPreviewParameters;
-(id)pointerShapeInContainer:(id)arg0 ;
-(struct CGPoint )menuAnchorPoint;
-(struct CGSize )buttonImageViewSize:(id)arg0 ;
-(struct CGSize )buttonIntrinsicContentSize:(id)arg0 ;
-(struct UIEdgeInsets )buttonAlignmentRectInsets:(id)arg0 ;
-(void)buttonLayoutSubviews:(id)arg0 baseImplementation:(id)arg1 ;
-(void)buttonWillMoveToSuperview:(id)arg0 ;
-(void)buttonWillMoveToWindow:(id)arg0 ;
-(void)configureButton:(id)arg0 withAppearanceDelegate:(id)arg1 fromBarItem:(id)arg2 ;
-(void)pointerWillEnter:(id)arg0 ;
-(void)pointerWillExit:(id)arg0 ;
-(void)resetButtonHasHighlighted;
-(void)traitCollectionChangedInSubtreeFrom:(id)arg0 to:(id)arg1 ;
-(void)updateButton:(id)arg0 appearance:(id)arg1 ;
-(void)updateButton:(id)arg0 forEnabledState:(BOOL)arg1 ;
-(void)updateButton:(id)arg0 forFocusedState:(BOOL)arg1 ;
-(void)updateButton:(id)arg0 forHighlightedState:(BOOL)arg1 ;
-(void)updateButton:(id)arg0 forSelectedState:(BOOL)arg1 ;
-(void)updateButton:(id)arg0 toUseButtonShapes:(BOOL)arg1 ;
-(void)updateMenu;


@end


#endif