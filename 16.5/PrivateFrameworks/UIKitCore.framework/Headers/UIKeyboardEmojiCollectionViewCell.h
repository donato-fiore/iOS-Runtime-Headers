// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDEMOJICOLLECTIONVIEWCELL_H
#define UIKEYBOARDEMOJICOLLECTIONVIEWCELL_H



#import "UICollectionViewCell.h"
#import "UILabel.h"
#import "UIKeyboardEmoji.h"
#import "UIView.h"

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {
    UILabel *_emojiLabel;
}


@property (copy, nonatomic) UIKeyboardEmoji *emoji; // ivar: _emoji
@property (nonatomic) NSInteger emojiFontSize;
@property (retain, nonatomic) UIView *navigationHighlightView; // ivar: _navigationHighlightView
@property (nonatomic) BOOL noResultsCell; // ivar: _noResultsCell
@property (retain, nonatomic) UILabel *noResultsLabel; // ivar: _noResultsLabel
@property (retain, nonatomic) UILabel *unreleasedBanner; // ivar: _unreleasedBanner
@property (nonatomic) BOOL unreleasedHighlight; // ivar: _unreleasedHighlight


-(id)debugDescription;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif