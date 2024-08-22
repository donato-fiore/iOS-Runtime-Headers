// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDEMOJISECTIONHEADER_H
#define UIKEYBOARDEMOJISECTIONHEADER_H

@class NSString;


#import "UICollectionReusableView.h"
#import "UILabel.h"
#import "UIColor.h"

@interface UIKeyboardEmojiSectionHeader : UICollectionReusableView {
    UILabel *_emojiSectionHeader;
}


@property (nonatomic) CGFloat headerFontSize;
@property (copy, nonatomic) NSString *headerName;
@property (nonatomic) CGFloat headerOpacity;
@property (copy, nonatomic) UIColor *headerTextColor;
@property (nonatomic) BOOL useVibrantBlend;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif