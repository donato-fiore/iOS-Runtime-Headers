// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLEDATASTYLE_H
#define TSTTABLEDATASTYLE_H



#import "TSTTableDataObject.h"

@interface TSTTableDataStyle : TSTTableDataObject



+(id)objectWithStyle:(id)arg0 refCount:(unsigned int)arg1 ;
-(NSUInteger)estimateByteSize;
-(id)description;
-(id)initObjectWithStyle:(id)arg0 refCount:(unsigned int)arg1 ;
-(id)style;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 completion:(id)arg2 ;


@end


#endif