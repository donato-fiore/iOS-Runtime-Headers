// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTTEXTTOSPEECHCACHE_H
#define _LTTEXTTOSPEECHCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LTTextToSpeechCache : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableDictionary *_cache;
}




-(id)audioDataForKey:(id)arg0 ;
-(id)init;
-(void)cacheAudioData:(id)arg0 forKey:(id)arg1 ;
-(void)clear;


@end


#endif