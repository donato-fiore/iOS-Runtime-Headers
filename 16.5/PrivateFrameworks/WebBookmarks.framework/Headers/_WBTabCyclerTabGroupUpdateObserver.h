// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WBTABCYCLERTABGROUPUPDATEOBSERVER_H
#define _WBTABCYCLERTABGROUPUPDATEOBSERVER_H

@class NSTimer, NSString;
@protocol WBTabGroupManagerObserver;

#import <Foundation/Foundation.h>

#import "WBTabGroupManager.h"

@interface _WBTabCyclerTabGroupUpdateObserver : NSObject <WBTabGroupManagerObserver>

 {
    id *_handler;
    WBTabGroupManager *_tabGroupManager;
    NSTimer *_timeoutTimer;
    BOOL _waitForTabGroups;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)observeTabGroupManager:(id)arg0 waitForTabGroups:(BOOL)arg1 handler:(id)arg2 ;
-(id)initWithTabGroupManager:(id)arg0 handler:(id)arg1 ;
-(void)_timeout;
-(void)startObserving;
-(void)tabGroupManagerDidUpdateTabGroups:(id)arg0 ;


@end


#endif