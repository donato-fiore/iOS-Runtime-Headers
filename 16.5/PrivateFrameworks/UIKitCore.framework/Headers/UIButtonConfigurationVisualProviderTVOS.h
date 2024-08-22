// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIBUTTONCONFIGURATIONVISUALPROVIDERTVOS_H
#define UIBUTTONCONFIGURATIONVISUALPROVIDERTVOS_H

@class NSString;
@protocol _UIFloatingContentViewDelegate;


#import "UIButtonConfigurationVisualProvider.h"
#import "_UIFloatingContentView.h"

@interface UIButtonConfigurationVisualProviderTVOS : UIButtonConfigurationVisualProvider <_UIFloatingContentViewDelegate>

 {
    _UIFloatingContentView *_floatingContentView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_floatingContentView;
-(id)effectiveContentView;
-(void)_layoutFloatingContentView;
-(void)_updateBackgroundViewWithConfiguration:(id)arg0 ;
-(void)_updateContentBackdropView;
-(void)cleanupForVisualProvider:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)floatingContentView:(id)arg0 isTransitioningFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif