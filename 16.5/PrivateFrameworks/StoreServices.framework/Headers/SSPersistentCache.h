// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSPERSISTENTCACHE_H
#define SSPERSISTENTCACHE_H

@class NSString, NSFileManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSPersistentCache : NSObject {
    BOOL _safeKeys;
    NSString *_identifier;
    NSString *_cacheName;
    NSString *_path;
    NSFileManager *_fm;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




+(id)safeKeyForKey:(id)arg0 ;
-(BOOL)_isFileNotFound:(id)arg0 ;
-(BOOL)clear;
-(BOOL)removeDataForKey:(id)arg0 ;
-(BOOL)setData:(id)arg0 forKey:(id)arg1 ;
-(id)_pathForKey:(id)arg0 ;
-(id)dataForKey:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 cacheName:(id)arg1 ;
-(void)dealloc;
-(void)setFilenameSafeKeys:(BOOL)arg0 ;


@end


#endif