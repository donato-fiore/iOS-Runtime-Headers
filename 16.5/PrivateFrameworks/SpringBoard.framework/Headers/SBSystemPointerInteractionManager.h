// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMPOINTERINTERACTIONMANAGER_H
#define SBSYSTEMPOINTERINTERACTIONMANAGER_H

@class NSMapTable, NSHashTable, UIView, NSString;
@protocol SBMultiDisplayPointerInteractionObserver, UIPointerInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SBMultiDisplayUserInteractionCoordinator.h"
#import "SBWindowScene.h"

@interface SBSystemPointerInteractionManager : NSObject <SBMultiDisplayPointerInteractionObserver, UIPointerInteractionDelegate>

 {
    NSMapTable *_registeredViewsToDelegates;
    NSHashTable *_observers;
    SBMultiDisplayUserInteractionCoordinator *_multiDisplayUserInteractionCoordinator;
}


@property (readonly, nonatomic) UIView *activePointerRegionView; // ivar: _activePointerRegionView
@property (readonly, weak, nonatomic) SBWindowScene *activePointerWindowScene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isViewRegistered:(id)arg0 ;
-(id)initWithMultiDisplayUserInteractionCoordinator:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 window:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(id)pointerInteraction:(id)arg0 window:(id)arg1 styleForRegion:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)pointerDidMoveToFromWindowScene:(id)arg0 toWindowScene:(id)arg1 ;
-(void)pointerInteraction:(id)arg0 window:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)pointerInteraction:(id)arg0 window:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(void)registerView:(id)arg0 delegate:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)unregisterView:(id)arg0 ;


@end


#endif