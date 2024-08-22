// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCOLUMNROWMETADATA_H
#define TSTCOLUMNROWMETADATA_H

@class TSKSosBase, TSWPParagraphStyle;


#import "TSTCellStyle.h"

@interface TSTColumnRowMetadata : TSKSosBase {
    UUIDData<TSP::UUIDData> _columnRowUID;
    BOOL _definedCellStyle;
    BOOL _definedTextStyle;
}


@property (readonly, nonatomic) TSTCellStyle *cellStyle; // ivar: _cellStyle
@property (readonly, nonatomic) BOOL hasHeaderContent;
@property (readonly, nonatomic) unsigned char hidingAction; // ivar: _hidingAction
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) CGFloat size; // ivar: _size
@property (readonly, nonatomic) TSWPParagraphStyle *textStyle; // ivar: _textStyle


+(id)metadata;
+(id)metadataWithUid:(struct TSKUIDStruct *)arg0 ;
-(BOOL)migrateStylesToDocument:(id)arg0 ;
-(id)init;
-(id)initWithSize:(CGFloat)arg0 hidingAction:(unsigned char)arg1 cellStyle:(id)arg2 textStyle:(id)arg3 columnRowUID:(struct TSKUIDStruct )arg4 ;
-(id)metadataWithUid:(struct TSKUIDStruct *)arg0 ;
-(struct TSKUIDStruct )columnRowUID;


@end


#endif