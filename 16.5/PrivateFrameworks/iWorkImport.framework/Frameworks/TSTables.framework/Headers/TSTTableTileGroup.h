// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLETILEGROUP_H
#define TSTTABLETILEGROUP_H


#import <Foundation/Foundation.h>


@interface TSTTableTileGroup : NSObject {
    TSTTableTile" _tiles;
    TSPLazyReference" _references;
}


@property (nonatomic) NSUInteger startingTileID; // ivar: _startingTileID


+(id)groupWithStartingTileID:(NSUInteger)arg0 ;
-(id)_tileForLazyReference:(id)arg0 ;
-(id)init;
-(id)initWithStartingTileID:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)enumerateLoadedTilesWithBlock:(id)arg0 ;
-(void)enumerateReferencesWithBlock:(id)arg0 ;
-(void)enumerateTilesWithBlock:(id)arg0 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)setReference:(id)arg0 forTileID:(NSUInteger)arg1 ;


@end


#endif