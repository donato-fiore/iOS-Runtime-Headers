// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEDITMENULISTVIEWCELL_H
#define _UIEDITMENULISTVIEWCELL_H

@class NSArray, NSLayoutConstraint;


#import "UICollectionViewCell.h"
#import "UIStackView.h"
#import "UIView.h"
#import "UIImageView.h"
#import "_UIEditMenuListItem.h"
#import "_UISlotView.h"
#import "UILabel.h"

@interface _UIEditMenuListViewCell : UICollectionViewCell

@property (nonatomic) UIEdgeInsets arrowEdgeInsets; // ivar: _arrowEdgeInsets
@property (readonly, nonatomic) NSArray *contentConstraints; // ivar: _contentConstraints
@property (readonly, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (readonly, nonatomic) UIView *customView; // ivar: _customView
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) _UIEditMenuListItem *item; // ivar: _item
@property (nonatomic) CGFloat maximumContentWidth; // ivar: _maximumContentWidth
@property (readonly, nonatomic) NSLayoutConstraint *maximumWidthConstraint; // ivar: _maximumWidthConstraint
@property (readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // ivar: _minimumWidthConstraint
@property (readonly, nonatomic) _UISlotView *securePasteButtonSlotView; // ivar: _securePasteButtonSlotView
@property (readonly, nonatomic) NSLayoutConstraint *slotViewCenterYConstraint; // ivar: _slotViewCenterYConstraint
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(struct CGSize )layoutSizeForItem:(id)arg0 traitCollection:(id)arg1 containerSize:(struct CGSize )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(unsigned int)_secureName;
-(void)_createViewHierarchy;
-(void)_hideContents;
-(void)_overlaySlotView:(id)arg0 ;
-(void)_setupSlotView;
-(void)_updateConstraints;
-(void)_updateFont;
-(void)_updateLayoutMargins;
-(void)prepareForReuse;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif