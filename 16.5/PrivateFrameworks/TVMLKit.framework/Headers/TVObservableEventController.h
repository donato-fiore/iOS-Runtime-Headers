// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVOBSERVABLEEVENTCONTROLLER_H
#define TVOBSERVABLEEVENTCONTROLLER_H

@class NSMutableDictionary, NSMapTable, NSString;
@protocol TVObservable;

#import <Foundation/Foundation.h>


@interface TVObservableEventController : NSObject <TVObservable>

 {
    NSMutableDictionary *_observerRecords;
    NSMapTable *_eventsByObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addObserver:(id)arg0 forEvent:(id)arg1 ;
-(void)dispatchEvent:(id)arg0 sender:(id)arg1 withUserInfo:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 forEvent:(id)arg1 ;


@end


#endif