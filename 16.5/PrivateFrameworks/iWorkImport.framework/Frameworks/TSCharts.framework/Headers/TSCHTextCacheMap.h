// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHTEXTCACHEMAP_H
#define TSCHTEXTCACHEMAP_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "TSCHTextCache.h"

@interface TSCHTextCacheMap : NSObject {
    TSCHTextCache *_mainCache;
    NSMapTable *_map;
}




-(id)init;
-(id)textCacheForStyleProvidingSource:(id)arg0 ;
-(void)clear;


@end


#endif