// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARDATETIMEITEMVIEW_H
#define UISTATUSBARDATETIMEITEMVIEW_H

@class NSString;


#import "UIStatusBarItemView.h"

@interface UIStatusBarDateTimeItemView : UIStatusBarItemView

@property (copy, nonatomic) NSString *dateTimeString; // ivar: _dateTimeString
@property (nonatomic) BOOL useCustomFadeAnimation; // ivar: _useCustomFadeAnimation


+(char *)_cStringFromData:(struct ? *)arg0 ;
-(BOOL)shouldTintContentImage;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)extraRightPadding;
-(NSInteger)textStyle;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setVisible:(BOOL)arg0 frame:(struct CGRect )arg1 duration:(CGFloat)arg2 ;


@end


#endif