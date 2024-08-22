// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLTIMELINEENTRYNODERECYCLEBIN_H
#define TLTIMELINEENTRYNODERECYCLEBIN_H


#import <Foundation/Foundation.h>


@interface TLTimelineEntryNodeRecycleBin : NSObject

@property (readonly, nonatomic) NSUInteger maximumNumberOfRecycledNodes;
@property (readonly, nonatomic) NSUInteger numberOfRecycledNodes;


+(id)sharedRecycleBin;
-(id)_init;
-(id)retrieveRecycledEntryNode;
-(void)emptyRecycleBin;
-(void)recycleEntryNode:(id)arg0 ;


@end


#endif