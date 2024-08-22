// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBVIEWTREESNAPSHOTTER_H
#define UIKBVIEWTREESNAPSHOTTER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIKBViewTreeSnapshotter : NSObject {
    NSMutableArray *_inputViews;
}


@property (readonly, nonatomic) UIView *snapshotView; // ivar: _snapshotView


+(id)snapshotterForKeyboardView:(id)arg0 afterScreenUpdates:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif