// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHPORTALEDSHADOWEDWIDGETVIEW_H
#define SBHPORTALEDSHADOWEDWIDGETVIEW_H

@class _UIPortalView;


#import "SBHShadowedWidgetView.h"

@interface SBHPortaledShadowedWidgetView : SBHShadowedWidgetView

@property (retain, nonatomic) _UIPortalView *contentView;
@property (nonatomic) BOOL hidesSourceViews;
@property (retain, nonatomic) _UIPortalView *shadowView;


-(id)initWithContentView:(id)arg0 shadowView:(id)arg1 perspectiveEnabled:(BOOL)arg2 ;


@end


#endif