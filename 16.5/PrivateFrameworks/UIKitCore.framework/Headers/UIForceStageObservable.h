// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIFORCESTAGEOBSERVABLE_H
#define UIFORCESTAGEOBSERVABLE_H

@class NSObservationSource, NSString;
@protocol NSObserver;



@interface UIForceStageObservable : NSObservationSource <NSObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)receiveObservedValue:(id)arg0 ;


@end


#endif