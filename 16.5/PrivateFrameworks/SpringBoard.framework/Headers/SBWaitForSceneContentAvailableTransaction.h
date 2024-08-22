// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWAITFORSCENECONTENTAVAILABLETRANSACTION_H
#define SBWAITFORSCENECONTENTAVAILABLETRANSACTION_H

@class NSString, SBSceneHandle;
@protocol SBSceneHandleObserver;


#import "SBTransaction.h"

@interface SBWaitForSceneContentAvailableTransaction : SBTransaction <SBSceneHandleObserver>

 {
    BOOL _isContentStateReady;
    BOOL _manualListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SBSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly) Class superclass;


-(BOOL)_canBeInterrupted;
-(id)initWithSceneHandle:(id)arg0 manualListener:(BOOL)arg1 ;
-(void)_begin;
-(void)_didComplete;
-(void)_noteSceneContentReadinessDidChange:(BOOL)arg0 ;
-(void)dealloc;
-(void)noteSceneContentIsReady:(BOOL)arg0 ;
-(void)sceneHandle:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateContentState:(NSInteger)arg1 ;


@end


#endif