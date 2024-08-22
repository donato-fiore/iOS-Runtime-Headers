// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKEMBOSSEDLABEL_H
#define TLKEMBOSSEDLABEL_H

@class UIColor, UIFont;


#import "TLKView.h"
#import "TLKProminenceView.h"
#import "TLKLabel.h"
#import "TLKMultilineText.h"

@interface TLKEmbossedLabel : TLKView

@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (retain, nonatomic) TLKProminenceView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGSize customInsetSize; // ivar: _customInsetSize
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic) TLKLabel *label; // ivar: _label
@property (nonatomic) BOOL shouldBadge; // ivar: _shouldBadge
@property (retain, nonatomic) TLKMultilineText *text; // ivar: _text
@property (nonatomic) CGSize textOffset; // ivar: _textOffset


-(CGFloat)effectiveBaselineOffsetFromBottom;
-(CGFloat)effectiveFirstBaselineOffsetFromTop;
-(id)init;
-(struct CGSize )effectiveLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)observedPropertiesChanged;


@end


#endif