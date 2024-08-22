// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTOUCHREGIONMANAGER_H
#define SBTOUCHREGIONMANAGER_H

@class FBSDisplayLayoutMonitor, NSString;
@protocol FBSDisplayLayoutObserver, PTSettingsKeyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBBackBoardServicesInterface.h"
#import "SBMedusa1oSettings.h"

@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver, PTSettingsKeyObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    SBBackBoardServicesInterface *_queue_bksInterface;
    FBSDisplayLayoutMonitor *_queue_displayLayoutMonitor;
    SBMedusa1oSettings *_medusaSettings;
    CGFloat _queue_touchRegionBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(CGFloat)touchRegionBuffer;
-(id)_initWithBKSInterface:(id)arg0 displayLayoutMonitor:(id)arg1 ;
-(id)_queue_calculateHitTestRegionsFromSceneRects:(id)arg0 ;
-(id)_queue_calculateTouchRegionsFromSceneRects:(id)arg0 ;
-(id)_queue_floatingHitTestRegionForLayoutRect:(struct CGRect )arg0 ;
-(id)displayLayoutMonitor;
-(id)init;
-(void)_queue_displayLayoutDidUpdate:(id)arg0 ;
-(void)_queue_handleChamoisUILayout:(id)arg0 ;
-(void)dealloc;
-(void)layoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)setDisplayLayoutMonitor:(id)arg0 ;
-(void)setTouchRegionBuffer:(CGFloat)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif