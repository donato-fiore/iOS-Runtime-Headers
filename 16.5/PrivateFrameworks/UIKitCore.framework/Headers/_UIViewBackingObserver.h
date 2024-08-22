// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWBACKINGOBSERVER_H
#define _UIVIEWBACKINGOBSERVER_H


#import <Foundation/Foundation.h>


@interface _UIViewBackingObserver : NSObject

@property (copy, nonatomic) id *observerBlock; // ivar: _observerBlock


+(id)sharedObserver;
-(void)observe:(id)arg0 forKeyPath:(id)arg1 once:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif