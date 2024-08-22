// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDRAWERNAVIGATIONBARTITLEVIEW_H
#define WFDRAWERNAVIGATIONBARTITLEVIEW_H

@class UINavigationBarTitleView;


#import "WFInspectorPaneSegmentedControlHostingView.h"

@interface WFDrawerNavigationBarTitleView : UINavigationBarTitleView

@property (readonly, nonatomic) WFInspectorPaneSegmentedControlHostingView *hostingView; // ivar: _hostingView


-(id)initWithDelegate:(id)arg0 showsDetailsButton:(BOOL)arg1 ;


@end


#endif