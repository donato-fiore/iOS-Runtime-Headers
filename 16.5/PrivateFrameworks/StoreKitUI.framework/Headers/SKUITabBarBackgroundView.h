// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITABBARBACKGROUNDVIEW_H
#define SKUITABBARBACKGROUNDVIEW_H

@class UIView, _UIBackdropView, _UINavigationBarAppearanceStorage, NSString, UIColor;



@interface SKUITabBarBackgroundView : UIView {
    _UIBackdropView *_backdropView;
    UIView *_borderView;
}


@property (retain, nonatomic, setter=_setShadowView:) UIView *_shadowView; // ivar: _shadowView
@property (retain, nonatomic) _UINavigationBarAppearanceStorage *appearanceStorage; // ivar: appearanceStorage
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) NSInteger backdropStyle; // ivar: _backdropStyle
@property (nonatomic) NSInteger barStyle; // ivar: barStyle
@property (retain, nonatomic) UIColor *barTintColor; // ivar: barTintColor
@property (nonatomic) BOOL barWantsAdaptiveBackdrop; // ivar: barWantsAdaptiveBackdrop
@property (nonatomic, getter=isTranslucent) BOOL translucent; // ivar: translucent


-(id)_currentCustomBackground;
-(id)_currentCustomBackgroundRespectOversize_legacy:(*BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setFrame:(struct CGRect )arg0 forceUpdateBackgroundImage:(BOOL)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)updateBackgroundImage;


@end


#endif