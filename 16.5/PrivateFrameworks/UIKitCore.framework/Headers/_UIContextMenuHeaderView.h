// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENUHEADERVIEW_H
#define _UICONTEXTMENUHEADERVIEW_H

@class NSString;


#import "UICollectionReusableView.h"
#import "UIVisualEffectView.h"
#import "UIView.h"
#import "UILabel.h"

@interface _UIContextMenuHeaderView : UICollectionReusableView {
    BOOL _needsConstraintRebuild;
}


@property (retain, nonatomic) UIVisualEffectView *bgView; // ivar: _bgView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIView *separator; // ivar: _separator
@property (nonatomic) NSUInteger separatorStyle; // ivar: _separatorStyle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_isDisplayingTitleLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )layoutMargins;
-(void)_setNeedsConstraintRebuild;
-(void)setBackgroundMaterialGroupName:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif