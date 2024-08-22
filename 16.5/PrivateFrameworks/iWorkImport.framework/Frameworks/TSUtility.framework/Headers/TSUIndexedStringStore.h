// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUINDEXEDSTRINGSTORE_H
#define TSUINDEXEDSTRINGSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSUIndexedStringStore : NSObject {
    os_unfair_lock_s _lock;
    vector<NSString *, std::allocator<NSString *>> _stringByIndex;
    NSMutableDictionary *_indexByString;
}




-(NSUInteger)count;
-(NSUInteger)indexForString:(id)arg0 ;
-(id)init;
-(id)stringForIndex:(NSUInteger)arg0 ;


@end


#endif