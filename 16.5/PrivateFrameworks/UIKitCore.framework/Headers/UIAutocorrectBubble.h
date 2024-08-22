// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIAUTOCORRECTBUBBLE_H
#define UIAUTOCORRECTBUBBLE_H



#import "UIView.h"
#import "UIImageView.h"
#import "UILabel.h"

@interface UIAutocorrectBubble : UIView

@property (readonly, nonatomic) UIImageView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)init;
-(id)lastBaselineAnchor;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)updateWithAutocorrectionText:(id)arg0 ;


@end


#endif