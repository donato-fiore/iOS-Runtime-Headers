// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDOWNLOADSHOWTABLEHEADERVIEW_H
#define VUIDOWNLOADSHOWTABLEHEADERVIEW_H

@class UITableViewHeaderFooterView, NSString, UIButton;


#import "VUISeparatorView.h"
#import "VUILabel.h"

@interface VUIDownloadShowTableHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (retain, nonatomic) UIButton *headerButton; // ivar: _headerButton
@property (retain, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel


-(id)_buttonWithString:(id)arg0 existingButton:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )_layoutWithSize:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_selectButtonAction:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif