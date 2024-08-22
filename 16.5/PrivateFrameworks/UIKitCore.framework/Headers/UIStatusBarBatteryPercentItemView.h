// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARBATTERYPERCENTITEMVIEW_H
#define UISTATUSBARBATTERYPERCENTITEMVIEW_H

@class NSString;


#import "UIStatusBarItemView.h"

@interface UIStatusBarBatteryPercentItemView : UIStatusBarItemView {
    NSString *_percentString;
}




-(BOOL)animatesDataChange;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)extraRightPadding;
-(NSInteger)textAlignment;
-(NSInteger)textStyle;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;


@end


#endif