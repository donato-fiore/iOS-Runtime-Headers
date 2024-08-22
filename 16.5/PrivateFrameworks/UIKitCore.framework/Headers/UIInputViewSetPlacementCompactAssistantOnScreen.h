// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTVIEWSETPLACEMENTCOMPACTASSISTANTONSCREEN_H
#define UIINPUTVIEWSETPLACEMENTCOMPACTASSISTANTONSCREEN_H



#import "UIInputViewSetPlacementAssistantOnScreen.h"

@interface UIInputViewSetPlacementCompactAssistantOnScreen : UIInputViewSetPlacementAssistantOnScreen

@property (nonatomic) CGPoint offset; // ivar: _offset


+(BOOL)supportsSecureCoding;
-(BOOL)isCompactAssistantView;
-(CGFloat)verticalOffset;
-(id)applicatorInfoForOwner:(id)arg0 ;
-(id)horizontalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(id)widthConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;


@end


#endif