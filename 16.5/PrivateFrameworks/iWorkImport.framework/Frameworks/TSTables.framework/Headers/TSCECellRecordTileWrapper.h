// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCECELLRECORDTILEWRAPPER_H
#define TSCECELLRECORDTILEWRAPPER_H

@class TSPObject;



@interface TSCECellRecordTileWrapper : TSPObject {
    unsigned short _tileColumnBegin;
    unsigned int _tileRowBegin;
    *void _tile;
    *void _unarchivedCellRecords;
}


@property (nonatomic) unsigned short internalOwnerID; // ivar: _internalOwnerID
@property (readonly, nonatomic) NSUInteger numCellRecords;


-(*void)cppTile;
-(id)description;
-(id)initWithOwnerId:(unsigned short)arg0 tileColumnBegin:(unsigned short)arg1 tileRowBegin:(unsigned int)arg2 context:(id)arg3 ;
-(void)dealloc;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)unpackAfterUnarchiveForCellDependencies:(*void)arg0 ;


@end


#endif