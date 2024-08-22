// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIMEDIAPLAYERINTERFACE_H
#define SKUIMEDIAPLAYERINTERFACE_H

@class NSHashTable, NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SKUIMediaPlayerItemStatus.h"

@interface SKUIMediaPlayerInterface : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSHashTable *_observers;
    SKUIMediaPlayerItemStatus *_onDeckItem;
    NSMapTable *_players;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}




+(BOOL)identifierMatches:(id)arg0 item:(id)arg1 ;
+(BOOL)isRadioItemIdentifier:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)identifierIsOnDeck:(id)arg0 ;
-(BOOL)isItemWithIdentifierActive:(id)arg0 ;
-(id)_itemFromNotification:(id)arg0 ;
-(id)_playerForNotification:(id)arg0 ;
-(id)init;
-(id)playerForItemWithIdentifier:(id)arg0 ;
-(void)_bufferingStateChangedNotification:(id)arg0 ;
-(void)_cancelOnDeckItem;
-(void)_createPeriodicTimeObserverIfNeeded:(id)arg0 ;
-(void)_currentItemDurationAvailableNotification:(id)arg0 ;
-(void)_destroyPeridicTimeObseverIfNeeded:(id)arg0 ;
-(void)_itemDidChange:(id)arg0 incomingItem:(id)arg1 ;
-(void)_notifiyObserversOfItemChange:(id)arg0 ;
-(void)_notifyFinishedItem:(id)arg0 ;
-(void)_notifyObserversOfItemStateChange;
-(void)_onDeckTimedOut;
-(void)_playbackErrorNotification:(id)arg0 ;
-(void)_playerItemDidChangeNotification:(id)arg0 ;
-(void)_playerItemReady:(id)arg0 ;
-(void)_playerItemWillChangeNotification:(id)arg0 ;
-(void)_playerRateDidChangeNotification:(id)arg0 ;
-(void)_registerForNotificationsForCurrentItem:(id)arg0 ;
-(void)_setCurrentTimeIfPossible:(CGFloat)arg0 player:(id)arg1 ;
-(void)_startOnDeckTimer;
-(void)_unregisterForNotificationsForCurrentItem:(id)arg0 ;
-(void)_updateBufferingState:(NSUInteger)arg0 player:(id)arg1 ;
-(void)_updateDurationForPlayerItem:(id)arg0 withMPAVItem:(id)arg1 ;
-(void)_updateItemForPlayer:(id)arg0 currentTime:(CGFloat)arg1 ;
-(void)_updateTimeValuesUsingItemTime:(BOOL)arg0 player:(id)arg1 item:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)notifyWillChangeToItemWithItemIdentifer:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)togglePlayStateForItemWithIdentifier:(id)arg0 ;


@end


#endif