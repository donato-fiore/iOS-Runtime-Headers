// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCROLLTOTOPSCENEPROXYVIEW_H
#define SBSCROLLTOTOPSCENEPROXYVIEW_H

@class UIView, SBSceneHandle;
@protocol _UIScrollToTopView, SBScrollToTopSceneProxyViewDelegate;



@interface SBScrollToTopSceneProxyView : UIView <_UIScrollToTopView>



@property (weak, nonatomic) NSObject<SBScrollToTopSceneProxyViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SBSceneHandle *sceneHandle; // ivar: _sceneHandle


-(BOOL)isScrollEnabled;
-(void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint )arg0 resultHandler:(id)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif