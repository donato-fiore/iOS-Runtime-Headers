// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTVIEWSETPLACEMENTASSISTANTONSCREEN_H
#define UIINPUTVIEWSETPLACEMENTASSISTANTONSCREEN_H

@class NSArray;
@protocol NSSecureCoding;


#import "UIInputViewSetPlacement.h"
#import "UIInputViewSetPlacementAccessoryOnScreen.h"

@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <NSSecureCoding>

 {
    UIInputViewSetPlacementAccessoryOnScreen *_cachedSecondaryPlacement;
    NSArray *_subPlacements;
}




+(BOOL)supportsSecureCoding;
+(id)infoWithPoint:(struct CGPoint )arg0 isCompact:(BOOL)arg1 frame:(struct CGRect )arg2 position:(NSUInteger)arg3 ;
-(BOOL)accessoryViewWillAppear;
-(BOOL)inputViewWillAppear;
-(BOOL)isFloatingAssistantView;
-(BOOL)showsEditItems;
-(BOOL)showsInputOrAssistantViews;
-(BOOL)showsInputViews;
-(CGFloat)inputAssistantViewHeightForInputViewSet:(id)arg0 ;
-(CGFloat)verticalOffset;
-(Class)applicatorClassForKeyboard:(BOOL)arg0 ;
-(NSUInteger)indexForPurpose:(NSUInteger)arg0 ;
-(id)subPlacements;
-(id)subPlacementsForInputViewSet:(id)arg0 ;
-(id)verticalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(struct CGRect )remoteIntrinsicContentSizeForInputViewInSet:(id)arg0 includingIAV:(BOOL)arg1 ;
-(struct UIEdgeInsets )inputAccessoryViewPadding;


@end


#endif