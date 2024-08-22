// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENUCELLCONTENTVIEW_H
#define _UICONTEXTMENUCELLCONTENTVIEW_H

@class NSLayoutConstraint, UISPasteVariant;
@protocol _UIContextMenuCellLayout;


#import "UIView.h"
#import "UIButton.h"
#import "UIImageView.h"
#import "UILabel.h"
#import "UIStackView.h"
#import "_UISlotView.h"

@interface _UIContextMenuCellContentView : UIView

@property (retain, nonatomic) UIButton *accessoryButton; // ivar: _accessoryButton
@property (retain, nonatomic) UIImageView *decorationImageView; // ivar: _decorationImageView
@property (readonly, nonatomic) UIView *decorationView;
@property (retain, nonatomic) UILabel *emphasizedTitleLabel; // ivar: _emphasizedTitleLabel
@property (retain, nonatomic) UIImageView *emphasizediconImageView; // ivar: _emphasizediconImageView
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (readonly, nonatomic) UIView *iconView;
@property (nonatomic) BOOL isEmphasized; // ivar: _isEmphasized
@property (readonly, nonatomic) UIStackView *labelStackView; // ivar: _labelStackView
@property (readonly, nonatomic) NSObject<_UIContextMenuCellLayout> *layout; // ivar: _layout
@property (readonly, nonatomic) NSUInteger measuredNumberOfTitleLines;
@property (nonatomic) BOOL needsConstraintRebuild; // ivar: _needsConstraintRebuild
@property (retain, nonatomic) NSLayoutConstraint *nonSymbolImageHeight; // ivar: _nonSymbolImageHeight
@property (retain, nonatomic) NSLayoutConstraint *nonSymbolImageWidth; // ivar: _nonSymbolImageWidth
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSUInteger overrideNumberOfTitleLines; // ivar: _overrideNumberOfTitleLines
@property (retain, nonatomic) UISPasteVariant *pasteVariant; // ivar: _pasteVariant
@property (nonatomic) NSUInteger preferredLineLimit; // ivar: _preferredLineLimit
@property (weak, nonatomic) _UISlotView *securePasteButtonSlotView; // ivar: _securePasteButtonSlotView
@property (readonly, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_hasTrailingAccessory;
-(id)_childIndicatorImage;
-(id)_contentImageViewForImage:(id)arg0 ;
-(id)_decorationSymbolImageConfiguration;
-(id)_iconSymbolConfigurationForCurrentTraitsUsingBoldFont:(BOOL)arg0 ;
-(id)_mixedSelectionImage;
-(id)_primaryContentColorForCurrentState;
-(id)_primaryTitleLabel;
-(id)_selectionImage;
-(id)_subtitleTextColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_maxImageSize;
-(unsigned int)_secureName;
-(void)_createLabelStackViewIfNeeded;
-(void)_hideContents;
-(void)_installTitleLabelIfNeeded;
-(void)_setDecorationImage:(id)arg0 ;
-(void)_updateAppearanceForStateChange;
-(void)_updateAttachedConstraintsForViewHierarchyChange;
-(void)_updateForOptionsChangeFromPreviousOptions:(NSUInteger)arg0 ;
-(void)_updateSecureView;
-(void)_updateTitleLabelNumberOfLines;
-(void)prepareForReuse;
-(void)setAccessoryAction:(id)arg0 ;
-(void)setAttributedTitle:(id)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif