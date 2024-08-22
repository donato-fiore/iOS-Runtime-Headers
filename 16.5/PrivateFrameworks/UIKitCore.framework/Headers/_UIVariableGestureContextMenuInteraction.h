// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVARIABLEGESTURECONTEXTMENUINTERACTION_H
#define _UIVARIABLEGESTURECONTEXTMENUINTERACTION_H



#import "UIContextMenuInteraction.h"

@interface _UIVariableGestureContextMenuInteraction : UIContextMenuInteraction {
    ? _flags;
}


@property (nonatomic, setter=_setPrefersCompactAppearance:) BOOL _prefersCompactAppearance; // ivar: __prefersCompactAppearance
@property (nonatomic, setter=_setPresentOnTouchDown:) BOOL _presentOnTouchDown;
@property (weak, nonatomic, setter=_setProxySender:) id *_proxySender; // ivar: __proxySender


-(BOOL)_clickPresentationInteractionShouldPlayFeedback:(id)arg0 ;
-(NSInteger)menuAppearance;
-(id)_interactionDrivers;
-(id)initWithDelegate:(id)arg0 ;
-(void)_willBeginWithConfiguration:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;


@end


#endif