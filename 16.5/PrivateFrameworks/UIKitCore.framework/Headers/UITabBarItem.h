// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABBARITEM_H
#define UITABBARITEM_H

@class NSString;
@protocol _UIPopoverPresentationControllerSourceItem_Internal, _UIBarAppearanceChangeObserver;


#import "UIBarItem.h"
#import "UIImage.h"
#import "UITabBarButton.h"
#import "_UITabBarItemAppearanceStorage.h"
#import "UIColor.h"
#import "UITabBarAppearance.h"

@interface UITabBarItem : UIBarItem <_UIPopoverPresentationControllerSourceItem_Internal, _UIBarAppearanceChangeObserver>

 {
    NSString *_title;
    SEL _action;
    id *_target;
    UIImage *_templateImage;
    UIImage *_selectedTemplateImage;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    UIEdgeInsets _imageInsets;
    UIImage *_landscapeTemplateImage;
    UIImage *_landscapeSelectedTemplateImage;
    UIImage *_landscapeSelectedImage;
    UIEdgeInsets _landscapeImageInsets;
    UITabBarButton *_view;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    ? _tabBarItemFlags;
    BOOL _springLoaded;
    UIOffset _badgeOffset;
}


@property (nonatomic, setter=_setBarMetrics:) NSInteger _barMetrics; // ivar: __barMetrics
@property (nonatomic, setter=_setImageStyle:) NSInteger _imageStyle; // ivar: __imageStyle
@property (readonly, nonatomic) UIImage *_internalLandscapeSelectedImagePhone;
@property (nonatomic, getter=_isSelected, setter=_setSelected:) BOOL _selected;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor; // ivar: __tintColor
@property (nonatomic, setter=_setUsesModernAppearance:) BOOL _usesModernAppearance; // ivar: __usesModernAppearance
@property (copy, nonatomic) UIColor *badgeColor;
@property (nonatomic) UIOffset badgeOffset;
@property (copy, nonatomic) NSString *badgeValue; // ivar: _badgeValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIOffset landscapePhoneBadgeOffset;
@property (retain, nonatomic) UIImage *landscapeSelectedImagePhone;
@property (copy, nonatomic) UITabBarAppearance *scrollEdgeAppearance; // ivar: _scrollEdgeAppearance
@property (retain, nonatomic) UIImage *selectedImage;
@property (copy, nonatomic) UITabBarAppearance *standardAppearance; // ivar: _standardAppearance
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) UIOffset titlePositionAdjustment;


+(id)_appearanceBlindViewClasses;
-(BOOL)animatedBadge;
-(BOOL)hasTitle;
-(BOOL)isEnabled;
-(BOOL)isSpringLoaded;
-(BOOL)isSystemItem;
-(NSInteger)systemItem;
-(SEL)action;
-(id)_createViewForTabBar:(id)arg0 asProxyView:(BOOL)arg1 ;
-(id)_internalLandscapeTemplateImage;
-(id)_internalLandscapeTemplateImages;
-(id)_internalLargeContentSizeImage;
-(id)_internalTemplateImage;
-(id)_internalTemplateImages;
-(id)_internalTemplateImagesForTabBarDisplayStyle:(NSInteger)arg0 ;
-(id)_internalTitle;
-(id)_internalTitleForTabBarDisplayStyle:(NSInteger)arg0 ;
-(id)_sourceViewForPresentationInWindow:(id)arg0 ;
-(id)badgeTextAttributesForState:(NSUInteger)arg0 ;
-(id)finishedSelectedImage;
-(id)image;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTabBarSystemItem:(NSInteger)arg0 tag:(NSInteger)arg1 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 selectedImage:(id)arg2 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 tag:(NSInteger)arg2 ;
-(id)landscapeImagePhone;
-(id)largeContentSizeImage;
-(id)resolvedTitle;
-(id)target;
-(id)title;
-(id)titleTextAttributesForState:(NSUInteger)arg0 ;
-(id)view;
-(struct CGRect )_sourceRectForPresentationInWindow:(id)arg0 ;
-(struct UIEdgeInsets )imageInsets;
-(struct UIEdgeInsets )landscapeImagePhoneInsets;
-(struct UIEdgeInsets )largeContentSizeImageInsets;
-(void)_setInternalLandscapeTemplateImage:(id)arg0 ;
-(void)_setInternalTemplateImage:(id)arg0 ;
-(void)_setInternalTitle:(id)arg0 ;
-(void)_setTitleTextAttributeValue:(id)arg0 forAttributeKey:(id)arg1 state:(NSUInteger)arg2 ;
-(void)_showSelectedIndicator:(BOOL)arg0 changeSelection:(BOOL)arg1 ;
-(void)_updateToMatchCurrentState;
-(void)_updateView;
-(void)_updateViewAndPositionItems:(BOOL)arg0 ;
-(void)_updateViewBadge;
-(void)appearance:(id)arg0 categoriesChanged:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAction:(SEL)arg0 ;
-(void)setAnimatedBadge:(BOOL)arg0 ;
-(void)setBadgeTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFinishedSelectedImage:(id)arg0 withFinishedUnselectedImage:(id)arg1 ;
-(void)setImage:(id)arg0 ;
-(void)setImageInsets:(struct UIEdgeInsets )arg0 ;
-(void)setLandscapeImagePhone:(id)arg0 ;
-(void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets )arg0 ;
-(void)setLargeContentSizeImage:(id)arg0 ;
-(void)setLargeContentSizeImageInsets:(struct UIEdgeInsets )arg0 ;
-(void)setSpringLoaded:(BOOL)arg0 ;
-(void)setTarget:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setUnselectedImage:(id)arg0 ;
-(void)setView:(id)arg0 ;


@end


#endif