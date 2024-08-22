// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHWIDGETCONTAINERVIEW_H
#define SBHWIDGETCONTAINERVIEW_H

@class UIView, UILabel, NSString, MTMaterialView;



@interface SBHWidgetContainerView : UIView {
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    BOOL _lastRequestedClipToBoundsValue;
}


@property (copy, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration; // ivar: _blockedForScreenTimeExpiration
@property (nonatomic) NSUInteger gridSizeClass; // ivar: _gridSizeClass
@property (nonatomic) BOOL requiresClippingToBounds; // ivar: _requiresClippingToBounds
@property (readonly, nonatomic) MTMaterialView *screenTimeLockoutView; // ivar: _screenTimeLockoutView
@property (weak, nonatomic) UIView *widgetView; // ivar: _widgetView


-(id)_fontWithTextStyle:(id)arg0 symbolicTraits:(unsigned int)arg1 maxSizeCategory:(id)arg2 ;
-(id)initWithGridSizeClass:(NSUInteger)arg0 applicationName:(id)arg1 ;
-(void)_updateScreenTimeLockoutView;
-(void)layoutSubviews;
-(void)setClipsToBounds:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif