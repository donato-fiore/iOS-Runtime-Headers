// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBAREXTERNALFOREGROUNDSTYLEATTRIBUTES_H
#define UISTATUSBAREXTERNALFOREGROUNDSTYLEATTRIBUTES_H



#import "UIStatusBarForegroundStyleAttributes.h"

@interface UIStatusBarExternalForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes



-(BOOL)usesVerticalLayout;
-(CGFloat)leftEdgePadding;
-(CGFloat)middlePadding;
-(CGFloat)rightEdgePadding;
-(CGFloat)scale;
-(CGFloat)standardPadding;
-(CGFloat)textOffsetForStyle:(NSInteger)arg0 ;
-(NSInteger)activityIndicatorStyleWithSyncActivity:(BOOL)arg0 ;
-(id)makeTextFontForStyle:(NSInteger)arg0 ;
-(id)textForNetworkType:(int)arg0 ;
-(id)uniqueIdentifier;
-(struct UIEdgeInsets )edgeInsetsForBatteryInsides;
-(struct UIEdgeInsets )edgeInsetsForBluetoothBatteryInsides;


@end


#endif