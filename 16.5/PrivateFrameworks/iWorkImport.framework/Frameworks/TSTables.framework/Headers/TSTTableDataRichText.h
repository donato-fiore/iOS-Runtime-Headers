// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLEDATARICHTEXT_H
#define TSTTABLEDATARICHTEXT_H



#import "TSTTableDataObject.h"

@interface TSTTableDataRichText : TSTTableDataObject



+(id)objectWithRichTextPayload:(id)arg0 refCount:(unsigned int)arg1 ;
-(NSUInteger)estimateByteSize;
-(id)description;
-(id)initObjectWithRichTextPayload:(id)arg0 refCount:(unsigned int)arg1 ;
-(id)richTextPayload;
-(id)richTextStorage;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 completion:(id)arg2 ;


@end


#endif