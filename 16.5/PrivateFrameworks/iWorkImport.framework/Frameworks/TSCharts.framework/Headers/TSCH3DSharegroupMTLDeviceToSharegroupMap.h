// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSHAREGROUPMTLDEVICETOSHAREGROUPMAP_H
#define TSCH3DSHAREGROUPMTLDEVICETOSHAREGROUPMAP_H

@class TSUOnce, NSMapTable;

#import <Foundation/Foundation.h>


@interface TSCH3DSharegroupMTLDeviceToSharegroupMap : NSObject {
    TSUOnce *_mapOnce;
    NSMapTable *_cachedMap;
}


@property (readonly, nonatomic) NSMapTable *map;


+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedInstance;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif