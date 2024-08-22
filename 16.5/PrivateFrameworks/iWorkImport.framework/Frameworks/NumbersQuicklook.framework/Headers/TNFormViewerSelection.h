// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TNFORMVIEWERSELECTION_H
#define TNFORMVIEWERSELECTION_H

@class TSKSelection;



@interface TNFormViewerSelection : TSKSelection

@property (readonly, nonatomic) unsigned short fieldIndex; // ivar: _fieldIndex
@property (readonly, nonatomic) unsigned int recordIndex; // ivar: _recordIndex


+(Class)archivedSelectionClass;
+(id)selection;
+(id)selectionForRecordIndex:(unsigned int)arg0 ;
+(id)selectionForRecordIndex:(unsigned int)arg0 fieldIndex:(unsigned short)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithRecordIndex:(unsigned int)arg0 ;
-(id)initWithRecordIndex:(unsigned int)arg0 fieldIndex:(unsigned short)arg1 ;


@end


#endif