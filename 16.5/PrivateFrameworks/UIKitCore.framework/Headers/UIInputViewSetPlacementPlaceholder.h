// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTVIEWSETPLACEMENTPLACEHOLDER_H
#define UIINPUTVIEWSETPLACEMENTPLACEHOLDER_H



#import "UIInputViewSetPlacementOnScreen.h"

@interface UIInputViewSetPlacementPlaceholder : UIInputViewSetPlacementOnScreen {
    CGFloat _height;
}




+(id)placementWithHeight:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)verticalConstraintForInputViewSet:(id)arg0 hostView:(id)arg1 containerView:(id)arg2 ;
-(struct CGRect )remoteIntrinsicContentSizeForInputViewInSet:(id)arg0 includingIAV:(BOOL)arg1 ;


@end


#endif