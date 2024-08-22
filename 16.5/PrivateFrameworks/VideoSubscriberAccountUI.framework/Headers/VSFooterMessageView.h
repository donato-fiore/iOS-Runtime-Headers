// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSFOOTERMESSAGEVIEW_H
#define VSFOOTERMESSAGEVIEW_H

@class UIView, NSString;
@protocol PSHeaderFooterView;


#import "VSFontCenter.h"

@interface VSFooterMessageView : UIView <PSHeaderFooterView>



@property (retain, nonatomic) VSFontCenter *fontCenter; // ivar: _fontCenter
@property (copy, nonatomic) NSString *primaryMessage; // ivar: _primaryMessage
@property (copy, nonatomic) NSString *secondaryMessage; // ivar: _secondaryMessage
@property (copy, nonatomic) NSString *tertiaryMessage; // ivar: _tertiaryMessage


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif