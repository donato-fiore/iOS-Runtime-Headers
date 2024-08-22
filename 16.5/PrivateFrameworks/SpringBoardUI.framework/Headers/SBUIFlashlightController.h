// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIFLASHLIGHTCONTROLLER_H
#define SBUIFLASHLIGHTCONTROLLER_H

@class AVFlashlight, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBUIFlashlightController : NSObject {
    AVFlashlight *_flashlight;
    NSObject<OS_dispatch_queue> *_flashlightQueue;
    NSUInteger _level;
    NSHashTable *_observers;
}


@property (readonly, nonatomic, getter=isAvailable) BOOL available; // ivar: _available
@property (nonatomic) NSUInteger level;
@property (readonly, nonatomic, getter=isOverheated) BOOL overheated; // ivar: _overheated


+(id)sharedInstance;
-(NSUInteger)_loadFlashlightLevel;
-(id)init;
-(void)_postAvailabilityChangeNotification:(BOOL)arg0 ;
-(void)_postLevelChangeNotification:(NSUInteger)arg0 ;
-(void)_postOverheatedChangeNotification:(BOOL)arg0 ;
-(void)_setFlashlightLevel:(float)arg0 ;
-(void)_storeFlashlightLevel:(NSUInteger)arg0 ;
-(void)_turnPowerOff;
-(void)_turnPowerOn;
-(void)_updateStateWithAvailable:(BOOL)arg0 level:(NSUInteger)arg1 overheated:(BOOL)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)coolDown;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeAllObservers;
-(void)removeObserver:(id)arg0 ;
-(void)turnFlashlightOffForReason:(id)arg0 ;
-(void)turnFlashlightOnForReason:(id)arg0 ;
-(void)warmUp;


@end


#endif