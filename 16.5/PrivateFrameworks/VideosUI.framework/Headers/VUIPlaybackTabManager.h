// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPLAYBACKTABMANAGER_H
#define VUIPLAYBACKTABMANAGER_H


#import <Foundation/Foundation.h>


@interface VUIPlaybackTabManager : NSObject



+(id)sharedInstance;
-(id)appContext;
-(void)getTabViewControllersForCanonicalID:(id)arg0 completion:(id)arg1 ;


@end


#endif