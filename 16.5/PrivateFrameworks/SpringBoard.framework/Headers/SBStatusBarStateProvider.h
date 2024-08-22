// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTATUSBARSTATEPROVIDER_H
#define SBSTATUSBARSTATEPROVIDER_H

@class NSHashTable, NSMutableArray, NSString;
@protocol SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider;

#import <Foundation/Foundation.h>

#import "SBStatusBarStateAggregator.h"

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider>

 {
    NSHashTable *_stateObservers;
    ? _aggregatorData;
    int _aggregatorActions;
    ? _lastPost;
    NSUInteger _coalescentBlockDepth;
    BOOL _itemNeedsPost;
    BOOL _anyItemNeedsPost;
    BOOL _nonItemDataNeedsPost;
    BOOL _posting;
    NSMutableArray *_stylesWithDetailUpdates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBStatusBarStateAggregator *stateAggregator; // ivar: _stateAggregator
@property (readonly) Class superclass;


-(BOOL)_shouldPostForUpdatesToNonItemData:(struct ? *)arg0 ;
-(BOOL)_shouldPostForVisitedItem:(int)arg0 withUpdates:(BOOL)arg1 toAggregatorData:(struct ? *)arg2 lastPost:(struct ? *)arg3 ;
-(id)init;
-(void)_composePostActionsFromAggregatorActions:(*int)arg0 ;
-(void)_composePostDataFromAggregatorData:(struct ? *)arg0 ;
-(void)_didChangeDoubleHeightStatusStringForStyle:(NSInteger)arg0 ;
-(void)_didFinishPost;
-(void)addStatusBarStateObserver:(id)arg0 ;
-(void)beginCoalescentBlock;
-(void)dealloc;
-(void)endCoalescentBlock;
-(void)getStatusBarData:(struct ? *)arg0 ;
-(void)removeStatusBarStateObserver:(id)arg0 ;
-(void)statusBarStateAggregator:(id)arg0 didUpdateNonItemData:(struct ? *)arg1 ;
-(void)statusBarStateAggregator:(id)arg0 didVisitItem:(int)arg1 withUpdates:(BOOL)arg2 toData:(struct ? *)arg3 ;
-(void)statusBarStateAggregatorDidFinishPost:(id)arg0 withData:(struct ? *)arg1 actions:(int)arg2 ;
-(void)statusBarStateAggregatorDidStartPost:(id)arg0 ;
-(void)updateStatusBarItem:(int)arg0 ;


@end


#endif