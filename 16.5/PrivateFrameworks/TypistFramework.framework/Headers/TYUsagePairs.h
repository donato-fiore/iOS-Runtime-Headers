// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYUSAGEPAIRS_H
#define TYUSAGEPAIRS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TYUsagePairs : NSObject

@property (retain, nonatomic) NSMutableArray *_usagePages; // ivar: __usagePages
@property (retain, nonatomic) NSMutableArray *_usages; // ivar: __usages


-(id)init;
-(id)usagePages;
-(id)usages;


@end


#endif