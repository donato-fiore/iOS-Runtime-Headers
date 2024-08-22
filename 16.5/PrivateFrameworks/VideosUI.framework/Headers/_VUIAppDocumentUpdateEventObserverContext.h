// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _VUIAPPDOCUMENTUPDATEEVENTOBSERVERCONTEXT_H
#define _VUIAPPDOCUMENTUPDATEEVENTOBSERVERCONTEXT_H

@class NSSet, NSMutableDictionary, UIViewController;

#import <Foundation/Foundation.h>


@interface _VUIAppDocumentUpdateEventObserverContext : NSObject

@property (copy, nonatomic) NSSet *eventDescriptors; // ivar: _eventDescriptors
@property (retain, nonatomic) NSMutableDictionary *refreshTimerByEventDescriptor; // ivar: _refreshTimerByEventDescriptor
@property (copy, nonatomic) id *refreshTimerFiredBlock; // ivar: _refreshTimerFiredBlock
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)_refreshTimerWithRefreshTimeEventDescriptor:(id)arg0 ;
-(void)_cancelAllRefreshTimers;
-(void)_cancelRefreshTimer:(id)arg0 ;
-(void)_cancelRefreshTimers:(id)arg0 ;
-(void)_startRefreshTimer:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)updateDescriptorsWithDescriptors:(id)arg0 ;


@end


#endif