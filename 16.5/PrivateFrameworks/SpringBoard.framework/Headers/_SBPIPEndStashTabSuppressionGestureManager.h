// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBPIPENDSTASHTABSUPPRESSIONGESTUREMANAGER_H
#define _SBPIPENDSTASHTABSUPPRESSIONGESTUREMANAGER_H

@class NSMutableSet, UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "SBSystemGestureManager.h"

@interface _SBPIPEndStashTabSuppressionGestureManager : NSObject <UIGestureRecognizerDelegate>

 {
    NSMutableSet *_targets;
    UITapGestureRecognizer *_singleTapRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    SBSystemGestureManager *_systemGestureManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithSystemGestureManager:(id)arg0 ;
-(void)_addSystemRecognizers;
-(void)_removeGestureRecognizers;
-(void)addTarget:(id)arg0 action:(SEL)arg1 ;
-(void)dealloc;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif