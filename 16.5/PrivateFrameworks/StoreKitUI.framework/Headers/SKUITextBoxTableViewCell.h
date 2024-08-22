// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITEXTBOXTABLEVIEWCELL_H
#define SKUITEXTBOXTABLEVIEWCELL_H



#import "SKUITableViewCell.h"
#import "SKUITextBoxView.h"

@interface SKUITextBoxTableViewCell : SKUITableViewCell

@property (nonatomic) UIEdgeInsets textBoxInsets; // ivar: _textBoxInsets
@property (readonly, nonatomic) SKUITextBoxView *textBoxView; // ivar: _textBoxView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif