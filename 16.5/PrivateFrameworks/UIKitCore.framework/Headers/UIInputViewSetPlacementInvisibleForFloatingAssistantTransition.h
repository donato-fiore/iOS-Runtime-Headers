// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTVIEWSETPLACEMENTINVISIBLEFORFLOATINGASSISTANTTRANSITION_H
#define UIINPUTVIEWSETPLACEMENTINVISIBLEFORFLOATINGASSISTANTTRANSITION_H

@protocol NSSecureCoding;


#import "UIInputViewSetPlacementInvisible.h"
#import "UIInputViewSetPlacementInvisibleForFloatingAssistantTransition.h"

@interface UIInputViewSetPlacementInvisibleForFloatingAssistantTransition : UIInputViewSetPlacementInvisible <NSSecureCoding>

 {
    UIInputViewSetPlacementInvisibleForFloatingAssistantTransition *_cachedSecondaryPlacement;
}




+(id)placementWithPlacement:(id)arg0 ;
-(BOOL)isCompactAssistantView;
-(BOOL)isFloatingAssistantView;
-(CGFloat)alpha;
-(id)subPlacements;
-(struct CGAffineTransform )transform;


@end


#endif