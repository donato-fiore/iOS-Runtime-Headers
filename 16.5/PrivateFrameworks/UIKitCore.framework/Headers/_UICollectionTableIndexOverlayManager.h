// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONTABLEINDEXOVERLAYMANAGER_H
#define _UICOLLECTIONTABLEINDEXOVERLAYMANAGER_H

@class UIView<_UICollectionTableIndexOverlayHost>, NSTimer, NSString;

#import <Foundation/Foundation.h>

#import "_UICollectionTableIndexOverlayIndicatorView.h"
#import "_UICollectionTableIndexOverlaySelectionView.h"

@interface _UICollectionTableIndexOverlayManager : NSObject {
    UIView<_UICollectionTableIndexOverlayHost> *_host;
    _UICollectionTableIndexOverlayIndicatorView *_indicatorView;
    _UICollectionTableIndexOverlaySelectionView *_selectionView;
    NSTimer *_indicatorHideTimer;
    CGFloat _mediaTimeWhenIndicatorWasFirstPresentedInResponseToWheelEvent;
    ? _flags;
    NSString *_indexOverlayIndicatorViewText;
}






@end


#endif