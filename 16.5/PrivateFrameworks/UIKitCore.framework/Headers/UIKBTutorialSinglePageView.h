// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBTUTORIALSINGLEPAGEVIEW_H
#define UIKBTUTORIALSINGLEPAGEVIEW_H



#import "UIView.h"
#import "UILabel.h"

@interface UIKBTutorialSinglePageView : UIView

@property (retain, nonatomic) UILabel *textBody; // ivar: _textBody
@property (retain, nonatomic) UILabel *textTitle; // ivar: _textTitle
@property (nonatomic) BOOL useAlertStyle; // ivar: _useAlertStyle
@property (retain, nonatomic) UIView *visualDisplayView; // ivar: _visualDisplayView


-(id)initWithImageView:(id)arg0 ;
-(void)configPageView;
-(void)layoutSubviews;


@end


#endif