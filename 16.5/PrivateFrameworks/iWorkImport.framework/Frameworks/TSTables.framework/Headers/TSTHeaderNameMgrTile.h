// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTHEADERNAMEMGRTILE_H
#define TSTHEADERNAMEMGRTILE_H

@class TSPObject, NSString;


#import "TSTHeaderNameMgr.h"

@interface TSTHeaderNameMgrTile : TSPObject {
    os_unfair_lock_s _tileLock;
    map<NSString *, TSTHeaderNameMgrEntry *, std::less<NSString *>, std::allocator<std::pair<NSString *const, TSTHeaderNameMgrEntry *>>> _nameFragmentToEntry;
    TSTHeaderNameMgr *_headerNameMgr;
}


@property (readonly, nonatomic) NSUInteger count;
@property (retain, nonatomic) NSString *firstFragment; // ivar: _firstFragment
@property (retain, nonatomic) NSString *lastFragment; // ivar: _lastFragment


+(id)medianStringFromArray:(id)arg0 ;
-(*void)createFragmentEntryForString:(id)arg0 createIfMissingUsingPrecedentCoord:(struct TSUCellCoord *)arg1 ;
-(*void)fragmentEntryForString:(id)arg0 ;
-(id)description;
-(id)initWithHeaderNameMgr:(id)arg0 context:(id)arg1 ;
-(id)splitTile;
-(void)dealloc;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)unpackAfterUnarchive:(id)arg0 ;


@end


#endif