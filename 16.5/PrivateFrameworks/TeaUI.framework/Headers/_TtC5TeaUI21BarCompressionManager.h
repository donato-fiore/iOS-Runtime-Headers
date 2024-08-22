// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC5TEAUI21BARCOMPRESSIONMANAGER_H
#define _TTC5TEAUI21BARCOMPRESSIONMANAGER_H

@protocol UITableViewDelegate, UICollectionViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtC5TeaUI21BarCompressionManager : NSObject <UITableViewDelegate, UICollectionViewDelegate>

 {
    ? delegate;
    ? isEnabled;
    ? shouldExpandAtBottom;
    ? $__lazy_storage_$_state;
    ? scrollView;
    ? proxyMultiDelegate;
    ? barAnimator;
    ? navigationBarAnimation;
    ? tabBarAnimation;
    ? toolbarAnimation;
    ? barState;
    ? sceneStateManager;
    ? observingToken;
    ? lastContentOffset;
    ? initialContentOffset;
    ? scrollDebounce;
    ? _lastBarCompressEvent;
}




-(id)init;
-(void)voiceOverStatusDidChange;


@end


#endif