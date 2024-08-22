// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHADDWIDGETSHEETAPPCOLLECTIONVIEWCELL_H
#define SBHADDWIDGETSHEETAPPCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSLayoutConstraint, NSString, UILabel, UIStackView, UIImageView, UIView, MTVisualStylingProvider;
@protocol SBHAddWidgetSheetAppCollectionViewCellConfigurable;



@interface SBHAddWidgetSheetAppCollectionViewCell : UICollectionViewCell <SBHAddWidgetSheetAppCollectionViewCellConfigurable>

 {
    BOOL _isFocused;
}


@property (nonatomic) NSUInteger addWidgetSheetStyle; // ivar: _addWidgetSheetStyle
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (nonatomic) CGFloat contentHorizontalSpacing;
@property (nonatomic) NSDirectionalEdgeInsets contentInsets; // ivar: _contentInsets
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UILabel *detailTextLabel; // ivar: _detailTextLabel
@property (retain, nonatomic) UIStackView *horizontalStackView; // ivar: _horizontalStackView
@property (retain, nonatomic) NSLayoutConstraint *iconHeightConstraint; // ivar: _iconHeightConstraint
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (retain, nonatomic) NSLayoutConstraint *iconWidthConstraint; // ivar: _iconWidthConstraint
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL imageViewHasVisualStyling; // ivar: _imageViewHasVisualStyling
@property (nonatomic) BOOL imageViewRequiresVisualStyling; // ivar: _imageViewRequiresVisualStyling
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (nonatomic, getter=isSeparatorAlignedToLabels) BOOL separatorAlignedToLabels; // ivar: _separatorAlignedToLabels
@property (retain, nonatomic) NSLayoutConstraint *separatorLeadingConstraint; // ivar: _separatorLeadingConstraint
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible; // ivar: _separatorVisible
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (nonatomic) BOOL textLabelHasVisualStyling; // ivar: _textLabelHasVisualStyling
@property (retain, nonatomic) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint; // ivar: _trailingConstraint
@property (retain, nonatomic) UIStackView *verticalStackView; // ivar: _verticalStackView
@property (weak, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider


-(NSInteger)_uiHIFontStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_updateAppearanceForFocus;
-(void)_updateSeparatorLeadingConstraint;
-(void)_updateTableViewStyle;
-(void)_updateVisualStylingForImageView;
-(void)_updateVisualStylingForTextLabel;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)prepareForReuse;
-(void)setAddWidgetSheetAppCollectionViewCellIconImage:(id)arg0 ;
-(void)setAddWidgetSheetAppCollectionViewCellTitle:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif