// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSMAPSEARCHINFO_H
#define _UIFOCUSMAPSEARCHINFO_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "_UIFocusGroupMap.h"
#import "_UIFocusSearchInfo.h"

@interface _UIFocusMapSearchInfo : NSObject

@property (readonly, copy, nonatomic) NSArray *destinationRegions;
@property (nonatomic) BOOL didFindFocusBlockingBoundary; // ivar: _didFindFocusBlockingBoundary
@property (retain, nonatomic) _UIFocusGroupMap *focusGroupMap; // ivar: _focusGroupMap
@property (readonly, nonatomic) BOOL hasOnlyStaticContent; // ivar: _hasOnlyStaticContent
@property (retain, nonatomic) NSArray *linearSortedFocusItems; // ivar: _linearSortedFocusItems
@property (retain, nonatomic) NSMutableArray *mutableDestinationRegions; // ivar: _mutableDestinationRegions
@property (retain, nonatomic) NSMutableArray *mutableSnapshots; // ivar: _mutableSnapshots
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo; // ivar: _searchInfo
@property (readonly, copy, nonatomic) NSArray *snapshots;


-(id)init;
-(void)addDestinationRegion:(id)arg0 ;
-(void)addSnapshot:(id)arg0 ;


@end


#endif