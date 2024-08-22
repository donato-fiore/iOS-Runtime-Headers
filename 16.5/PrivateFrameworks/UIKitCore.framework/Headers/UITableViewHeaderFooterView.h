// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLEVIEWHEADERFOOTERVIEW_H
#define UITABLEVIEWHEADERFOOTERVIEW_H

@class NSString;
@protocol UITableConstantsHeaderFooterProviding, UITableViewSubviewReusing, _UIContentViewInternal, UITableConstants, _UIContentViewConfiguration, UIContentConfiguration, UITable;


#import "UIView.h"
#import "_UITableViewHeaderFooterViewLabel.h"
#import "_UISystemBackgroundView.h"
#import "_UIBackgroundViewConfiguration.h"
#import "UIBackgroundConfiguration.h"
#import "UIImage.h"
#import "UIViewConfigurationState.h"
#import "UILabel.h"
#import "UITableView.h"

@interface UITableViewHeaderFooterView : UIView <UITableConstantsHeaderFooterProviding, UITableViewSubviewReusing>

 {
    NSInteger _tableViewStyle;
    CGRect _frame;
    NSInteger _textAlignment;
    UIView *_backgroundView;
    _UITableViewHeaderFooterViewLabel *_label;
    _UITableViewHeaderFooterViewLabel *_detailLabel;
    CGFloat _leadingMarginWidth;
    CGFloat _trailingMarginWidth;
    id<_UIContentViewInternal> *_viewForContentConfiguration;
    id *_contentViewConfigurationProvider;
    _UISystemBackgroundView *_systemBackgroundView;
    id *_backgroundViewConfigurationProvider;
    id<UITableConstants> *_constants;
    ? _headerFooterFlags;
}


@property (nonatomic, setter=_setAutomaticIntrinsicContentSizeInvalidationEnabled:) BOOL _automaticIntrinsicContentSizeInvalidationEnabled;
@property (nonatomic, getter=_automaticallyUpdatesBackgroundViewConfiguration, setter=_setAutomaticallyUpdatesBackgroundViewConfiguration:) BOOL _automaticallyUpdatesBackgroundViewConfiguration;
@property (nonatomic, getter=_automaticallyUpdatesContentViewConfiguration, setter=_setAutomaticallyUpdatesContentViewConfiguration:) BOOL _automaticallyUpdatesContentViewConfiguration;
@property (copy, nonatomic, getter=_backgroundViewConfiguration, setter=_setBackgroundViewConfiguration:) _UIBackgroundViewConfiguration *_backgroundViewConfiguration;
@property (copy, nonatomic, getter=_backgroundViewConfigurationProvider, setter=_setBackgroundViewConfigurationProvider:) id *_backgroundViewConfigurationProvider;
@property (copy, nonatomic, getter=_contentViewConfiguration, setter=_setContentViewConfiguration:) NSObject<_UIContentViewConfiguration> *_contentViewConfiguration;
@property (copy, nonatomic, getter=_contentViewConfigurationProvider, setter=_setContentViewConfigurationProvider:) id *_contentViewConfigurationProvider;
@property (readonly, nonatomic) NSUInteger _viewConfigurationState;
@property (nonatomic) BOOL automaticallyUpdatesBackgroundConfiguration;
@property (nonatomic) BOOL automaticallyUpdatesContentConfiguration;
@property (copy, nonatomic) UIBackgroundConfiguration *backgroundConfiguration;
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIViewConfigurationState *configurationState;
@property (copy, nonatomic) id *configurationUpdateHandler; // ivar: _configurationUpdateHandler
@property (retain, nonatomic, getter=_constants, setter=_setConstants:) NSObject<UITableConstants> *constants;
@property (copy, nonatomic) NSObject<UIContentConfiguration> *contentConfiguration;
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (readonly, nonatomic, getter=_effectiveSafeAreaInsets) UIEdgeInsets effectiveSafeAreaInsets;
@property (nonatomic) BOOL floating;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_insetsContentViewsToSafeArea, setter=_setInsetsContentViewsToSafeArea:) BOOL insetsContentViewsToSafeArea;
@property (nonatomic, getter=_marginWidth, setter=_setMarginWidth:) CGFloat marginWidth;
@property (nonatomic) CGFloat maxTitleWidth; // ivar: _maxTitleWidth
@property (copy, nonatomic) NSString *reuseIdentifier; // ivar: _reuseIdentifier
@property (nonatomic, getter=_rightMarginWidth, setter=_setRightMarginWidth:) CGFloat rightMarginWidth;
@property (nonatomic) BOOL sectionHeader;
@property (nonatomic, getter=_stripPadding, setter=_setStripPadding:) BOOL stripPadding;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<UITable> *table; // ivar: _table
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) NSInteger tableViewStyle;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic, getter=_isTopHeader, setter=_setTopHeader:) BOOL topHeader;


+(CGFloat)defaultFooterHeightForStyle:(NSInteger)arg0 ;
+(CGFloat)defaultHeaderHeightForStyle:(NSInteger)arg0 ;
+(id)_defaultFontForHeaderFooterView:(id)arg0 ;
+(id)_defaultFontForTableViewStyle:(NSInteger)arg0 isSectionHeader:(BOOL)arg1 ;
+(id)_defaultPlainHeaderFooterFont;
+(id)_defaultTextColorForTableViewStyle:(NSInteger)arg0 isSectionHeader:(BOOL)arg1 ;
-(BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg0 ;
-(BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
-(BOOL)_isFloating;
-(BOOL)_isSourceListOrMacIdiom;
-(BOOL)_isTransparentFocusRegion;
-(BOOL)_tintColorAffectsBackgroundColor;
-(BOOL)_useDetailText;
-(BOOL)_usingBackgroundConfigurationOrDefaultBackgroundConfiguration;
-(BOOL)_usingBackgroundViewConfiguration;
-(NSInteger)_contentViewListStyleFromTableViewStyle:(NSInteger)arg0 ;
-(id)_customViewForDefaultBackgroundAppearance;
-(id)_defaultBackgroundConfiguration;
-(id)_defaultTextColor;
-(id)_label:(BOOL)arg0 ;
-(id)defaultBackgroundConfiguration;
-(id)defaultContentConfiguration;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGRect )_backgroundRect;
-(struct CGRect )_backgroundRectForWidth:(CGFloat)arg0 ;
-(struct CGRect )_contentRect;
-(struct CGRect )_contentRectForWidth:(CGFloat)arg0 ;
-(struct CGRect )_detailLabelFrame;
-(struct CGRect )_labelFrame;
-(struct CGRect )_updatedContentViewFrameForTargetWidth:(CGFloat)arg0 ;
-(struct CGSize )_detailTextSizeForWidth:(CGFloat)arg0 ;
-(struct CGSize )_sizeThatFits:(struct CGSize )arg0 stripPaddingForAbuttingView:(BOOL)arg1 isTopHeader:(BOOL)arg2 ;
-(struct CGSize )_textSizeForWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct UIEdgeInsets )_concreteDefaultLayoutMargins;
-(struct UIEdgeInsets )_insetsToBounds;
-(struct UIEdgeInsets )_insetsToContentRect;
-(void)_applyBackgroundViewConfiguration:(id)arg0 withState:(id)arg1 ;
-(void)_applyContentViewConfiguration:(id)arg0 withState:(id)arg1 usingSPI:(BOOL)arg2 ;
-(void)_clearChangeHandlersForOldContentView:(id)arg0 ;
-(void)_configureDefaultContentViewLayoutMargins;
-(void)_didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)_invalidateDetailLabelBackgroundColor;
-(void)_invalidateLabelBackgroundColor;
-(void)_layoutSystemBackgroundView;
-(void)_notifyIsDisplaying:(BOOL)arg0 ;
-(void)_performConfigurationStateUpdate;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_prepareForConfigurationStateUpdate;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets )arg0 ;
-(void)_setNeedsConfigurationStateUpdate;
-(void)_setupBackgroundView;
-(void)_setupChangeHandlersForNewContentView:(id)arg0 ;
-(void)_setupDefaultsIfNecessary;
-(void)_setupLabelAppearance;
-(void)_setupLabelForSourceList:(id)arg0 ;
-(void)_updateBackgroundView;
-(void)_updateBackgroundViewConfigurationForState:(id)arg0 ;
-(void)_updateConfigurationUsingState:(id)arg0 ;
-(void)_updateContentAndBackgroundView;
-(void)_updateContentViewConfigurationForState:(id)arg0 ;
-(void)_updateDefaultBackgroundAppearance;
-(void)_updateDetailLabelBackgroundColor;
-(void)_updateDetailLabelBackgroundColorIfNeeded;
-(void)_updateViewConfigurationsWithState:(NSUInteger)arg0 ;
-(void)_willUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsUpdateConfiguration;
-(void)setNeedsUpdateConstraints;
-(void)setTintColor:(id)arg0 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif