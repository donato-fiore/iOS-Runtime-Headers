// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENPLUGINCALLACTION_H
#define SBLOCKSCREENPLUGINCALLACTION_H

@class TUDialRequest, NSURL;


#import "SBLockScreenPluginAction.h"

@interface SBLockScreenPluginCallAction : SBLockScreenPluginAction {
    TUDialRequest *_dialRequest;
}


@property (readonly, nonatomic) NSURL *url;


-(BOOL)isCallAction;
-(id)initWithURL:(id)arg0 ;


@end


#endif