// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICUSTOMSCHEDULECONTROLLER_H
#define _UICUSTOMSCHEDULECONTROLLER_H

@class NSMapTable, NSTimer;

#import <Foundation/Foundation.h>


@interface _UICustomScheduleController : NSObject {
    NSMapTable *_observers;
    BOOL _inScheduleTime;
    NSTimer *_nextEventTimer;
}


@property (readonly, nonatomic, getter=isInScheduleTime) BOOL inScheduleTime;
@property (nonatomic) ? schedule; // ivar: _schedule


-(id)init;
-(id)nextTransition:(BOOL)arg0 ;
-(void)_notifyChange;
-(void)_significantTimeChange;
-(void)_updateStatus:(BOOL)arg0 ;
-(void)_updateTimeMonitoring;
-(void)_updateTimeMonitoring:(BOOL)arg0 ;
-(void)_updateWithDate:(id)arg0 ;
-(void)addObserver:(id)arg0 changeHandler:(id)arg1 ;
-(void)dealloc;
-(void)forceUpdate;
-(void)removeObserver:(id)arg0 ;


@end


#endif