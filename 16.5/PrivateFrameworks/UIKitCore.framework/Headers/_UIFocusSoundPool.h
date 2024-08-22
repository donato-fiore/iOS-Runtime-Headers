// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSSOUNDPOOL_H
#define _UIFOCUSSOUNDPOOL_H

@class NSURL, NSArray;

#import <Foundation/Foundation.h>


@interface _UIFocusSoundPool : NSObject {
    NSURL *_soundFileURL;
    unsigned int _originalSystemSoundID;
    NSArray *_queue;
    NSUInteger _queueIndex;
}




-(id)initWithSoundFileURL:(id)arg0 ;
-(id)initWithSystemSoundID:(unsigned int)arg0 ;
-(unsigned int)playableSystemSoundID;


@end


#endif