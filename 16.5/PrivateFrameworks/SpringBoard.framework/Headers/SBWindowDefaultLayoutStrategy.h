// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWINDOWDEFAULTLAYOUTSTRATEGY_H
#define SBWINDOWDEFAULTLAYOUTSTRATEGY_H

@class NSString;
@protocol SBWindowLayoutStrategy;

#import <Foundation/Foundation.h>


@interface SBWindowDefaultLayoutStrategy : NSObject <SBWindowLayoutStrategy>

 {
    BOOL _clip;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_strategyWithClipping:(BOOL)arg0 ;
+(id)clipStrategy;
+(id)noClipStrategy;
-(BOOL)shouldClipForWindow:(id)arg0 ;
-(id)_init;
-(struct CGRect )frameWithInterfaceOrientation:(NSInteger)arg0 windowScene:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif