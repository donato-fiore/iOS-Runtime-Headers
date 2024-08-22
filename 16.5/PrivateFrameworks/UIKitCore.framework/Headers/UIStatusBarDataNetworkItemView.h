// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARDATANETWORKITEMVIEW_H
#define UISTATUSBARDATANETWORKITEMVIEW_H



#import "UIStatusBarItemView.h"

@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView {
    int _dataNetworkType;
    int _wifiStrengthRaw;
    int _wifiStrengthBars;
    BOOL _wifiLinkWarning;
    BOOL _enableRSSI;
    BOOL _showRSSI;
}




-(BOOL)_updateWithData:(struct ? *)arg0 networkType:(int)arg1 ;
-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)extraLeftPadding;
-(CGFloat)extraRightPadding;
-(CGFloat)maximumOverlap;
-(id)_dataNetworkImage;
-(id)_dataNetworkImageName;
-(id)_stringForRSSI;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif