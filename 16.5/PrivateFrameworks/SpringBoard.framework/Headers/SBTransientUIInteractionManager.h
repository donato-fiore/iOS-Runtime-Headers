// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRANSIENTUIINTERACTIONMANAGER_H
#define SBTRANSIENTUIINTERACTIONMANAGER_H

@class NSString, UIPanGestureRecognizer, NSHashTable, UITapGestureRecognizer, UIWindow;
@protocol SBSystemGestureRecognizerDelegate;

#import <Foundation/Foundation.h>

#import "SBFailingSystemGestureRecognizer.h"
#import "SBSystemGestureManager.h"

@interface SBTransientUIInteractionManager : NSObject <SBSystemGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBFailingSystemGestureRecognizer *dismissGestureRecognizer; // ivar: _dismissGestureRecognizer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPanGestureRecognizer *indirectPanRecognizer; // ivar: _indirectPanRecognizer
@property (retain, nonatomic) NSHashTable *indirectPanToParticipants; // ivar: _indirectPanToParticipants
@property (readonly) Class superclass;
@property (weak, nonatomic) SBSystemGestureManager *systemGestureManager; // ivar: _systemGestureManager
@property (retain, nonatomic) NSHashTable *tapToDismissParticipants; // ivar: _tapToDismissParticipants
@property (retain, nonatomic) NSHashTable *tapToUnhideParticipants; // ivar: _tapToUnhideParticipants
@property (retain, nonatomic) UITapGestureRecognizer *unhideDoubleTapRecognizer; // ivar: _unhideDoubleTapRecognizer
@property (retain, nonatomic) UITapGestureRecognizer *unhideTapRecognizer; // ivar: _unhideTapRecognizer
@property (readonly, nonatomic) UIWindow *window;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithSystemGestureManager:(id)arg0 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)_screenWasIndirectPannedToDismiss:(id)arg0 ;
-(void)_screenWasTappedToUnhide:(id)arg0 ;
-(void)registerParticipantForIndirectPanToDismiss:(id)arg0 ;
-(void)registerParticipantForTapToDismiss:(id)arg0 ;
-(void)registerParticipantForTapToUnhide:(id)arg0 ;
-(void)unregisterParticipantForIndirectPanToDismiss:(id)arg0 ;
-(void)unregisterParticipantForTapToDismiss:(id)arg0 ;
-(void)unregisterParticipantForTapToUnhide:(id)arg0 ;


@end


#endif