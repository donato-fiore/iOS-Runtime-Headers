// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STFILEPROVIDERMONITOR_H
#define STFILEPROVIDERMONITOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface STFileProviderMonitor : NSObject

@property (retain) id *fpContext; // ivar: _fpContext
@property (retain) NSArray *fpDomains; // ivar: _fpDomains


+(id)sharedMonitor;
-(void)_postNotify:(id)arg0 ;
-(void)postNotify;
-(void)startMonitor;
-(void)stopMonitor;
-(void)sync;


@end


#endif