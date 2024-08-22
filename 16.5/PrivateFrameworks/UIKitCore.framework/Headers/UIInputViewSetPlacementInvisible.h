// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTVIEWSETPLACEMENTINVISIBLE_H
#define UIINPUTVIEWSETPLACEMENTINVISIBLE_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacementWrapper.h"

@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacementWrapper <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)placementWithPlacement:(id)arg0 ;
-(BOOL)inputViewWillAppear;
-(BOOL)isInteractive;
-(BOOL)isUndocked;
-(BOOL)isVisible;
-(BOOL)showsInputOrAssistantViews;
-(BOOL)showsInputViews;
-(BOOL)showsKeyboard;
-(CGFloat)alpha;
-(id)applicatorInfoForOwner:(id)arg0 ;
-(struct CGAffineTransform )transform;


@end


#endif