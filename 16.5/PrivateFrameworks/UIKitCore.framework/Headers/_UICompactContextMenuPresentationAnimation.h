// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOMPACTCONTEXTMENUPRESENTATIONANIMATION_H
#define _UICOMPACTCONTEXTMENUPRESENTATIONANIMATION_H

@class UIContextMenuPresentationAnimation;


#import "_UIContextMenuLayoutArbiterOutput.h"

@interface _UICompactContextMenuPresentationAnimation : UIContextMenuPresentationAnimation

@property (retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout; // ivar: _expandedLayout
@property (nonatomic) BOOL isDismissTransition; // ivar: _isDismissTransition


-(id)_backgroundView;
-(void)_actuallyPerformTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)_performAlongsideAnimations;
-(void)_setBackgroundVisible:(BOOL)arg0 ;
-(void)prepareTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;


@end


#endif