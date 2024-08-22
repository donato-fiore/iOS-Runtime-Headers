// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PERSONALHOTSPOTRELAY_H
#define PERSONALHOTSPOTRELAY_H


#import <Foundation/Foundation.h>


@interface PersonalHotspotRelay : NSObject

@property (nonatomic) BOOL isReady; // ivar: _isReady
@property (nonatomic) unsigned int softAPClientCount; // ivar: _softAPClientCount
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) unsigned int wifiNanClientCount; // ivar: _nanClientCount


+(id)sharedInstance;
-(void)updateWithState:(int)arg0 softAPClientCount:(unsigned int)arg1 wifiNanClientCount:(unsigned int)arg2 ;


@end


#endif