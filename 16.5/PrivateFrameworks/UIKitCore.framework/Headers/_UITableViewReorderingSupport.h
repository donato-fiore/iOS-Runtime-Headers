// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITABLEVIEWREORDERINGSUPPORT_H
#define _UITABLEVIEWREORDERINGSUPPORT_H

@class NSIndexPath, NSTimer;

#import <Foundation/Foundation.h>

#import "UITableViewCell.h"
#import "UIShadowView.h"

@interface _UITableViewReorderingSupport : NSObject {
    UITableViewCell *_reorderedCell;
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_targetIndexPath;
    BOOL _oldShowHorizontalScrollIndicator;
    BOOL _oldShowVerticalScrollIndicator;
    BOOL _reloadDataCalled;
    BOOL _reorderingCancelled;
    NSTimer *_autoscrollTimer;
    UIShadowView *_topShadowView;
    UIShadowView *_bottomShadowView;
    BOOL _wasScrollingEnabled;
}






@end


#endif