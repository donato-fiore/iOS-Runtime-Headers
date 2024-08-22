// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIALIBRARYFETCHCONTROLLERQUEUE_H
#define VUIMEDIALIBRARYFETCHCONTROLLERQUEUE_H

@class NSString, VUIDelayOperation, NSArray, NSMutableArray, NSOperationQueue;
@protocol VUINowPlayingObserverDelegate, VUIMediaLibraryFetchControllerQueueDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VUIMediaLibraryFetchControllerQueueOperation.h"
#import "VUIMediaLibrary.h"
#import "VUINowPlayingObserver.h"

@interface VUIMediaLibraryFetchControllerQueue : NSObject <VUINowPlayingObserverDelegate>



@property (retain, nonatomic) VUIMediaLibraryFetchControllerQueueOperation *currentFetchOperation; // ivar: _currentFetchOperation
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VUIDelayOperation *delayContentsChangeOperation; // ivar: _delayContentsChangeOperation
@property (weak, nonatomic) NSObject<VUIMediaLibraryFetchControllerQueueDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *fetchControllers;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (nonatomic) NSUInteger mediaLibraryRevision; // ivar: _mediaLibraryRevision
@property (retain, nonatomic) NSMutableArray *mutableFetchControllers; // ivar: _mutableFetchControllers
@property (retain, nonatomic) VUINowPlayingObserver *nowPlayingObserver; // ivar: _nowPlayingObserver
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (retain, nonatomic) NSOperationQueue *serialFetchOperationQueue; // ivar: _serialFetchOperationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue
@property (nonatomic) BOOL shouldFetchOnResume; // ivar: _shouldFetchOnResume
@property (readonly) Class superclass;


+(id)defaultQueueWithMediaLibrary:(id)arg0 ;
-(id)init;
-(id)initWithMediaLibrary:(id)arg0 ;
-(void)_addStateObserverForFetchControllers:(id)arg0 ;
-(void)_delayContentsChangeOperationDidComplete:(id)arg0 ;
-(void)_enqueueAsyncProcessingQueueBlock:(id)arg0 ;
-(void)_enqueueControllerFetchOperation;
// -(void)_enqueueProcessingQueueBlock:(id)arg0 synchronous:(unk)arg1  ;
-(void)_enqueueSyncProcessingQueueBlock:(id)arg0 ;
-(void)_handleMediaLibraryContentsChange;
-(void)_handleMediaLibraryContentsDidChangeNotification:(id)arg0 ;
-(void)_notifyDelegateFetchDidComplete;
-(void)_queueOperationDidComplete:(id)arg0 ;
-(void)_removeStateObserverForFetchControllers:(id)arg0 ;
-(void)addFetchController:(id)arg0 ;
-(void)addFetchControllers:(id)arg0 ;
-(void)dealloc;
-(void)nowPlayingObserver:(id)arg0 latestObservationDidChange:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseFetching;
-(void)removeFetchController:(id)arg0 ;
-(void)removeFetchControllers:(id)arg0 ;
-(void)resumeFetching;


@end


#endif