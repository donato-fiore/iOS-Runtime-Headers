// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARLOCATIONITEMVIEW_H
#define UISTATUSBARLOCATIONITEMVIEW_H



#import "UIStatusBarItemView.h"

@interface UIStatusBarLocationItemView : UIStatusBarItemView {
    int _iconType;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(id)_imageName;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;


@end


#endif