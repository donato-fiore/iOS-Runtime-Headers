// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7VFXCORE11AUDIOPLAYER_H
#define _TTC7VFXCORE11AUDIOPLAYER_H


#import <Foundation/Foundation.h>


@interface _TtC7VFXCore11AudioPlayer : NSObject {
    ? url;
    ? engine;
    ? mixer;
    ? player;
    ? loops;
    ? isValid;
    ? samplesRaw;
    ? samplesRawCount;
    ? samplesRawTime;
    ? samplesRawSampleRate;
    ? _lock;
}




-(id)init;
-(void)dealloc;


@end


#endif