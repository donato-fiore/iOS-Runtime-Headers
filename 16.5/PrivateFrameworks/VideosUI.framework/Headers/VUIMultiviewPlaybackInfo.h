// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMULTIVIEWPLAYBACKINFO_H
#define VUIMULTIVIEWPLAYBACKINFO_H

@class AVPlayerViewController;

#import <Foundation/Foundation.h>

#import "VUIPlayer.h"

@interface VUIMultiviewPlaybackInfo : NSObject

@property (retain, nonatomic) VUIPlayer *player; // ivar: _player
@property (retain, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController


-(id)initWithPlayer:(id)arg0 playerViewController:(id)arg1 ;


@end


#endif